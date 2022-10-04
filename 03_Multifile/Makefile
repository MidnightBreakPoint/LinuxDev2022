GENERATES = prog README
TRASH = *.o *~

CFLAGS = -Wall

all:	prog README

prog:   const.o fun.o prog.o

prog.o:	outlib.h

fun.o:	outlib.h

README:	prog
	./$< 2> $@

clean:
	rm -f $(TRASH)

distclean:	clean
	rm -rf $(GENERATES)
