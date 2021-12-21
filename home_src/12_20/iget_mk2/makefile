iget : main.c libiget.a
	gcc -o iget main.o -L./ -liget

libiget.a : iget.o
	ar rc libiget.a iget.o

iget.o : iget.c
	gcc -c iget.c
