#include <iostream>
#include <vector>
#include <algorithm>
#include "header.hpp"
using namespace std;

void pushInElements(vector<int>& vect, int n) {
    int num = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vect.push_back(num);
    }
}

void removeElement(std::vector<int>& vect, int i) {
    swap(vect[i], vect.back());
    vect.pop_back();
}

void printVector(vector<int> vect) {
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
}