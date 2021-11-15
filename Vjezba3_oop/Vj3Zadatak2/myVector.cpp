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

vector<int> isInFirstNotInSecond(vector<int> first, vector<int> second)
{
	int num;
	int n = first.size();
	vector <int> myVect;
	for (int i = 0; i < n; i++) {
		if (!(find(second.begin(), second.end(), first[i]) != second.end())) {
			myVect.push_back(first[i]);
		}
	}
	return myVect;
}

void printVector(vector<int> vect, int n) {
	for (int i = 0; i < n; i++) {
		cout << vect[i] << " ";
	}
