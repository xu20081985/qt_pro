CFLAGS= -O2 --static

CC=/usr/local/arm/arm-2009q3/bin/arm-linux-gcc

spidev_test: spidev_test.o
	$(CC) $(CFLAGS) -o spidev_test spidev_test.o

clean: 
	rm -f spidev_test spidev_test.o

