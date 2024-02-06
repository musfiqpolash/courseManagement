main: main.o Student.o Course.o
	g++ -std=c++17 main.o Student.o Course.o -o main.out && ./main.out

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

Student.o: Student.cpp
	g++ -std=c++17 -c Student.cpp

Course.o: Course.cpp
	g++ -std=c++17 -c Course.cpp

clean:
	rm *.o *.out
