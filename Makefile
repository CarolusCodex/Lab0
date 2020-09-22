compile: test_main.o test_program.cc time.o
	 g++ -Wall -Wextra -pedantic test_main.o test_program.cc time.o

test_main.o: test_main.cc
	g++ -Wall -Wextra -pedantic -c test_main.cc

time.o: time.cc time.h
	g++ -Wall -Wextra -pedantic -c time.cc time.h

clean:
	rm -rf *.o a.out
