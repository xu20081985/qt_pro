CFLAGS= -O2 --static

CC=/usr/local/arm/arm-2009q3/bin/arm-linux-gcc

i2c-test: i2c.o 24lc01.o
	$(CC) $(CFLAGS) -o i2c-test i2c.o 24lc01.o

clean: 
	rm -f i2c-test 24lc01.o i2c.o

