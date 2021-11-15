#include <iostream>
#include <vector>
#include "myVector.hpp"
using namespace std;

int main()
{
    int n1, n2, a, b;
    vector <int> vect1, vect2;

    cout << "Enter the size of array:" << endl;
    cin >> n1;

    cout << "Enter the elements of array :" << endl;
    vectorInput(vect1, n1);

    cout << "Enter the range of numbers for the new array:" << endl;
    cin >> a;
    cin >> b;

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    cout << "Enter array size:" << endl;
    vectorAndInterval(vect2, a, b);
    
    n2 = vect2.size();

    cout << "First array:";
    printVector(vect1, n1);
    cout << endl << "Second array: ";
    printVector(vect2, n2);

}

