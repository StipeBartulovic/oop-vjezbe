#include <iostream>

using namespace std;

void minmax(int arr[], int n, int* minim, int* maks)
{
	*minim = arr[0];
	*maks = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < *minim)
		{
			*minim = arr[i];
		}
		else if (arr[i] > *maks)
		{
			*maks = arr[i];
		}
	}
}

int main()
{
	int minim, maks, n;

	cout << "Input size of array: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Input elemets of array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". element is?";
		cin >> arr[i];
	}

	minmax(arr, n, &minim, &maks);
	cout << "The smallest element of the array is: " << minim << endl;
	cout << "The largest element of the array is " << maks << endl;

	return 0;
}