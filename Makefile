CXX = g++ 
CXXFLAGS = -std=c++20 -Wall

all: main test

clean:
    rm main *.o

test: test.cpp
    $(CXX) $(CXXFLAGS) test.cpp -o test
    
main: main.cpp
    $(CXX) $(CXXFLAGS) main.cpp -o main