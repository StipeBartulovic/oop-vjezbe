#include <iostream>

using namespace std;
int& returnArrElement(int* arr, int selected)
{

	return (arr[selected]);
}
int main()
{
	int n;

	cout << "Input size of array: ";
	cin >> n;

	int* arr = new int[n];

	cout << "Input elemets of array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int selected;

	cout << endl << "Enter the ordinal number of the element you want to increase by 1: ";
	cin >> selected;
	selected--;

	returnArrElement(arr, selected) += 1;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;

	return 0;
}