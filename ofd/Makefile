#Makefiel -makefile of our first driver

# if KERNELRELEASE is defined we've been invoked from the kernel build system and use its languauge
ifneq (${KERNELRELEASE},)
	obj-m := ofd.o
#Otherwise we were called directly from the command line,
#Invoke the kernel build system
else
    KERNEL_SOURCE := /usr/src/linux-headers-3.2.0-29-generic-pae
    PWD := $(shell pwd)
default:
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules

clean:
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
endif

