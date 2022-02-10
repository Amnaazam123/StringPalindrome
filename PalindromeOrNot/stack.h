//BSEF19M009 - Amna Azam
//DSA-LAB-03
#pragma once
//Amna Azam- BSEF19M009- DSA_Assignment#01
#include<string>
template<class T>
class stack
{
private:
    T* myStack;
    int peak;
    int size;
public:
    stack(int);
    ~stack();
    void push(T);
    T pop();
    T top();
    int resize(int);
    bool isEmpty();
};



