database: address.o student.o date.o main.o
	g++ -g address.o student.o date.o main.o -o database


main.o: address.h main.cpp
	g++ -c -g main.cpp

student.o: student.h student.cpp
	g++ -c -g student.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

clean:
	rm *.o
	rm database
	rm testAddress
	rm testDate
	rm testStudent

run: database
	./database

debug: database
	gdb database

valgrind: database
	valgrind --leak-check=full ./database
