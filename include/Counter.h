// include/Counter.h
#ifndef COUNTER_H
#define COUNTER_H
 
class Counter {
private:
    int value;
 
public:
    Counter() : value(0) {}
 
    int getValue() const { return value; }
 
    void increment() { value++; }
    void decrement() { value--; }
    void reset() { value = 0; }
    void incrementBy(int n) { value += n; }
};
 
#endif
