#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVector = { 2, 22, 33, 27, 7, 1, 78, 11 };
    
    sort(myVector.begin(), myVector.end());

    myVector.insert(myVector.begin(), 0);

    int sum = accumulate(myVector.begin(), myVector.end(), 0);

    myVector.insert(myVector.end(), sum);

    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
}