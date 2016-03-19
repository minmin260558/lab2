A: a.o A_main.o
	g++ -o A A_main.o a.o

a.o: a.cpp a.h
	g++ -c a.cpp

A_main.o: A_main.cpp a.h
	g++ -c A_main.cpp

clean:
	rm a*.o
