#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>

using namespace std;

class vector
{
    int *ptr;
    int size;

    public:
    vector();
    vector(int *s, int);
    vector(vector&);

    void print();
    void reverse();
    void sort();
    //~vector();

};

#endif