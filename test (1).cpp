/**
 * test.cpp
 *
 * EECS 183
 * Lab 5: loops exercises
 *
 * Casey Lee
 * leecasey
 *
 * We will be creating different shapes out of loop functions and test those. 
 */

#include "loops.h"

#include <iostream>
using namespace std;

void test_rectangle();
void test_right();
void test_rightJustified();
void test_isosceles();

int main() {
    
    // TODO
    // Once you have completed the testing functions
    // call them such that the tests actually get run
    test_rectangle();
    test_right();
    test_rightJustified();
    test_isosceles();
    return 0;
}

void test_rectangle() {
    cout << "Testing printRectangle()" << endl;
    printRectangle(8, 8);
    cout << endl;
    printRectangle(3, 2);
    cout << endl;
    printRectangle(1, 3);
    cout << endl;
    return;
}

void test_right() {
    cout << "Testing printRight()" << endl;
    printRight(3);
    cout << endl;
    return;
}

void test_rightJustified() {
    cout << "Testing rightJustified()" << endl;
    printRightJustified(3);
    cout << endl;
    return;
}

void test_isosceles() {
    cout << "Testing Isosceles()" << endl;
    printIsosceles(3);
    cout << endl;
    return;
}
    
