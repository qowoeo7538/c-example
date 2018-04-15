all: make_test

make_test: main.cpp
    g++ main.cpp -o make_test