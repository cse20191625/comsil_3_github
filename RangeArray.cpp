#include "RangeArray.h"
#include <iostream>
#include <cstdlib>
using namespace std;

RangeArray::RangeArray (int low, int high) : Array (high-low+1) {
this->low = low;
this->high = high;
}

RangeArray::~RangeArray () {
}


int RangeArray::baseValue () {
    return low;
}

int RangeArray::endValue () {
    return high;
}

int & RangeArray::operator[](int i) {	    
    static int tmp;
    if (low <= i && i <= high) {
	return data[i-low];
    }
    else {
	cerr << "Array bound error!\n";
	return tmp;
    }
}

int RangeArray::operator[] (int i) const {  
    if (low <= i && i <= high) {
	return data[i-low];
    }
   
    else {
	cerr << "Array bound error!\n";
	return 0;
    }
}

