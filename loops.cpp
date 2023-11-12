/**
 * loops.cpp
 *
 * EECS 183
 * Lab 5: Loops exercises
 *
 * Casey Lee
 * leecasey
 * We will be creating loop functions to create different shapes. 
 */

#include "loops.h"
#include <iostream>

using namespace std;



void printRectangle(int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << '*';
        }
        cout << endl;
    }
    return;
}

void printRight(int n) {
    for(int i = n + 1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
        }
        for(int k = i; k < n; k++) {
            cout << '*';
        }
        cout << endl;
    }
    return;
}

void printRightJustified(int n) {
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            cout << ' ';
        }
        for(int k = i; k < n; k++) {
            cout << '*';
        }
        cout << endl;
    }
    return;
}

void printIsosceles(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j > i; j--) {
            cout << ' ';
        }
        for(int k = 0; k <= i * 2; k++) {
            cout << '*';
        }
        cout << endl;
    }
    return;
}
