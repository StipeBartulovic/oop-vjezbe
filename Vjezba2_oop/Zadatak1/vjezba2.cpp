#include <iostream>
using namespace std;
void minnmaks(int* arr, int n, int& minn, int& maks)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minn)
		{
			minn = arr[i];
		}
		else if (arr[i] > maks)
		{
			maks = arr[i];
		}
	}
}
int main()
{
	int minn, maks, n;
	cout << "Input size of array: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Input elemets of array: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	minn = maks = arr[0];
	minnmaks(arr, n, minn, maks);


	cout << "The smallest element of the array is " << minn << endl;
	cout << "The  largest element of the array is " << maks << endl;
	delete[] arr;
	return 0;
}

