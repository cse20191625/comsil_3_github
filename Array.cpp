#include "Array.h"
#include <iostream>
#include <cstdlib>
using namespace std;
Array::Array(int size){
    if(size <= 0) {
    cerr << "Negative size error!\n";
    exit(-1);
}

data = new int[size];
if(data == NULL) {
    cerr << "Memory allocation error!\n";
    exit(-1);
}
len = size;
}

Array::~Array (void) {
    delete[] data;
}

int Array::length (void) const { 
    return len;
}

int & Array::operator[] (int i) {	    
    static int tmp;
    if(0 <= i && i < len) {
	return data[i];
    }
    else {
	cerr << "Array bound error!\n";
	return tmp;
    }
}

int Array::operator[] (int i) const {	    
    if(0 <= i && i < len) {
	return data[i];
    }
    else {
	cerr << "invalid size parameter (0 <= i < len)\n";
	return 0;
    }
}

void Array::print (void) {
    cout << '[';
    for(int i = 0; i < len; i++) {
	cout << ' ' << data[i];
    }
    cout << "]\n";
}

