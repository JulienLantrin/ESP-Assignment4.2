obj-m+=hello.o

.PHONY: all
all: bin/application modules

bin/app: src/hellobis.c src/main.c
	g++ -o bin/application src/hellobis.c src/main.c -lpthread


.PHONY: modules
modules:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules


.PHONY: clean
clean:
	rm -f bin/application
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean

