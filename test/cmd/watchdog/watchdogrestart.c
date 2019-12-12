
/*
 * Watchdog Driver Test Program
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/watchdog.h>

int main(void)
{

	int fd,outtime;
    fd = open("/dev/watchdog", O_WRONLY);

    if (fd == -1) {
	fprintf(stderr, "Watchdog device not enabled.\n");
	fflush(stderr);
	exit(-1);
    }
//    ioctl(fd, WDIOC_GETTIMEOUT,&outtime);
 //    printf("outtime is %d\n",outtime);
//	outtime=20;
//    ioctl(fd, WDIOC_SETTIMEOUT,&outtime);
    while(1) {
    }
}
