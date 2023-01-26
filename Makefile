CXX = g++
CXXFLAGS = -std=c++20 -Wall

all: main test

functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -Wall -c functions_to_implement.cpp

Point: functions_to_implement.o test.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.o test.cpp -o test

main: functions_to_implement.o main.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.o main.cpp -o main

clean:
	rm main *.o
