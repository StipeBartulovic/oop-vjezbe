#include <iostream>
#include <vector>
#include "myVector.hpp"

using namespace std;

int main()
{
    int ar1, ar2, a, b;
    vector <int> vect1, vect2, myVect;

    cout << "Enter the size of array:" << endl;
    cin >> ar1;

    cout << "Enter the elements of array:" << endl;
    vectorInput(vect1, ar1);

    cout << "Enter the range of numbers for the new array:" << endl;
    cin >> a;
    cin >> b;

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    cout << "Enter the elements of array:" << endl;
    vectorAndInterval(vect2, a, b);
    myVect = isInFirstNotInSecond(vect1, vect2);
    ar2 = myVect.size();
    cout << "Members of the first vector that are not in the second" << endl;
    printVector(myVect, ar2);
}