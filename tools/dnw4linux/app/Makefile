APP ?= dnw
OBJ = dnw.o
SRC = dnw.c
INSTALLDIR ?= ../

all: ${SRC}
	gcc -o ${APP} ${SRC}
#	cp ${APP} $(INSTALLDIR)

install: all
	cp ${APP} $(INSTALLDIR)

clean:
	rm -f ${APP}   *~ *.o 
