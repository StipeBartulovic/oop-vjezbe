#include <iostream>
#include <vector>
#include "header.hpp"

using namespace std;

int main()
{
    int n, i;
    vector<int> myVector;

    cout << "Enter the number of vectors: ";
    cin >> n;

    cout << "Enter the elements of vectors:" << endl;
    pushInElements(myVector, n);

    cout << "Number of the element you want to delete:\n";
    cin >> i;

    removeElement(myVector, i);

    cout << "New vector:" << endl;
    printVector(myVector);
}
