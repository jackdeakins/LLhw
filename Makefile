CC = g++

all: hw06

hw06: hw06.cpp hw06.h menu.o poplist.o addrec.o delrec.o showrec.o showrecs.o saveexit.o
	$(CC) hw06.cpp -o hw06 hw06.h menu.o poplist.o addrec.o delrec.o showrec.o showrecs.o saveexit.o

menu.o: menu.cpp hw06.h
	$(CC) -c menu.cpp -o menu.o

poplist.o: poplist.cpp hw06.h
	$(CC) -c poplist.cpp -o poplist.o
addrec.o: addrec.cpp hw06.h
	$(CC) -c addrec.cpp -o addrec.o
delrec.o: delrec.cpp hw06.h
	$(CC) -c delrec.cpp -o delrec.o
showrec.o: showrec.cpp hw06.h
	$(CC) -c showrec.cpp -o showrec.o
showrecs.o: showrecs.cpp hw06.h
	$(CC) -c showrecs.cpp -o showrecs.o
saveexit.o: saveexit.cpp hw06.h
	$(CC) -c saveexit.cpp -o saveexit.o


