#include <iostream>
#include <vector>
#include "myVector.hpp"
using namespace std;

void vectorInput(vector<int>& vect, int n) {
    int num = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vect.push_back(num);
    }
}

void vectorAndInterval(vector<int>& vect, int a, int b) {
    int num = 0;
    cin >> num;
    while ((num > a) && (num < b)) {
        vect.push_back(num);
        cin >> num;
    }
}

void printVector(vector<int> vect, int n) {
    for (int i = 0; i < n; i++) {
        cout << vect[i] << " ";
    }
}