libcrud.a : set.o get.o del.o prts.o
	ar rc libcrud.a set.o get.o del.o prts.o

del.o : del.c crudini.h
	gcc -c del.c

get.o : get.c crudini.h
	gcc -c get.c

set.o : set.c crudini.h
	gcc -c set.c

prts.o : prts.c crudini.h
	gcc -c prts.c

clean : 
	@rm -rf *.o libcrud.a
