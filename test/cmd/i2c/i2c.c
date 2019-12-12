#include <stdio.h>
#include <fcntl.h>
#include <getopt.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "24lc01.h"

#define usage_if(a) do { do_usage_if( a , __LINE__); } while(0);
void do_usage_if(int b, int line)
{
	const static char *eeprog_usage = 
		"-r : read \n"
		"-w :write \n"
                "-f :write ff\n"
                "-b :write block\n";
	if(!b)
		return;
	fprintf(stderr, "%s\n[line %d]\n", eeprog_usage, line);
	exit(1);
}


#define die_if(a, msg) do { do_die_if( a , msg, __LINE__); } while(0);
void do_die_if(int b, char* msg, int line)
{
	return;
//	if(!b)
//		return;
//	fprintf(stderr, "Error at line %d: %s\n", line, msg);
//	fprintf(stderr, "	sysmsg: %s\n", strerror(errno));
//	exit(1);
}


static int read_eeprom(struct eeprom *e, int addr, int size)
{
	int ch, i;
	for(i = 0; i < size; ++i, ++addr)
	{
		die_if((ch = eeprom_read_byte(e, addr)) < 0, "read error");
		if( (i % 16) == 0 ) 
			printf("\n %.4x|  ", addr);
		else if( (i % 8) == 0 ) 
			printf("  ");
		printf("%.2x ", ch);
		fflush(stdout);
	}
	fprintf(stderr, "\n\n");
	return 0;
}

static int write_eeprom(struct eeprom *e, int addr)
{
	int i;
	
        for(i=0, addr=0; i<256; i++, addr++)
	{
		if( (i % 16) == 0 ) 
			printf("\n %.4x|  ", addr);
		else if( (i % 8) == 0 ) 
			printf("  ");
		printf("%.2x ", i);
		
		die_if(eeprom_write_byte(e, addr, i), "write error");
                fflush(stdout);
               usleep(5000);
	}
	fprintf(stderr, "\n\n");
	return 0;
}

static int write_ff(struct eeprom *e)
{

	int addr;
   //     for( addr=0; addr<256; addr++)
	while(1)
	{
		if( (addr % 16) == 0 ) 
			printf("\n %.4x|  ", addr);
		else if( (addr % 8) == 0 ) 
			printf("  ");
		printf("%.2x ", 255);
		
		die_if(eeprom_write_byte(e, addr, 0xa), "write error");
                fflush(stdout);
              usleep(5000);
	}
	fprintf(stderr, "\n\n");
	return 0;
}



int main(int argc, char** argv)
{
	struct eeprom e;
	int op;

	op = 0;

	usage_if(argc != 2 || argv[1][0] != '-' || argv[1][2] != '\0');
	op = argv[1][1];

	fprintf(stderr, "Open /dev/i2c-2 with 8bit mode\n");
	die_if(eeprom_open("/dev/i2c-2", 0x51, EEPROM_TYPE_8BIT_ADDR, &e) < 0, 
			"unable to open eeprom device file "
			"(check that the file exists and that it's readable)");
	switch(op)
	{
	case 'r':
		fprintf(stderr, "  Reading 256 bytes from 0x00-0xff\n");
		read_eeprom(&e, 0, 256);
		break;
	case 'w':
		fprintf(stderr, "  Writing into 0x00-0xff \n");
		write_eeprom(&e, 0);
		break;
        case 'f':
		fprintf(stderr, "  Writing ff to 0x00-0xff \n");
		write_ff(&e);
		break;
         case 'b':
		fprintf(stderr, "  Writing block to 0x00-0xff \n");
		write_to_block(&e);
		break;
	default:
		usage_if(1);
		exit(1);
	}
	eeprom_close(&e);

	return 0;
}

