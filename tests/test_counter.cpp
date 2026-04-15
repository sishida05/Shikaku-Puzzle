// tests/test_counter.cpp
#include "Counter.h"
#include <iostream>
#include <cassert>
 
void test_initial_value() {
    Counter c;
    assert(c.getValue() == 0);
    std::cout << "PASSED: test_initial_value\n";
}
 
void test_increment() {
    Counter c;
    c.increment();
    c.increment();
    assert(c.getValue() == 2);
    std::cout << "PASSED: test_increment\n";
}
 
void test_decrement() {
    Counter c;
    c.increment();
    c.increment();
    c.increment();
    c.decrement();
    assert(c.getValue() == 2);
    std::cout << "PASSED: test_decrement\n";
}
 
void test_reset() {
    Counter c;
    c.increment();
    c.increment();
    c.reset();
    assert(c.getValue() == 0);
    std::cout << "PASSED: test_reset\n";
}

void test_increment_by() {
    Counter c;
    c.incrementBy(5);
    assert(c.getValue() == 5);
    c.incrementBy(3);
    assert(c.getValue() == 8);
    std::cout << "PASSED: test_increment_by\n";
}

 
int main() {
    std::cout << "Running Counter tests...\n\n";
    test_increment_by();
    test_initial_value();
    test_increment();
    test_decrement();
    test_reset();
    std::cout << "\nAll tests passed!\n";
    return 0;
}
