#include <cstddef>
#include <iostream>
using namespace std;
struct MyVector
{
	int* arr;
	size_t size, capacity;

	// member functions
	void vector_new(size_t sz = 0);
	void vector_delete();
	void vector_push_back(int n);/* adds a new element at the end of the vector */
	void vector_pop_back();/* removes the last element in the vector */
	int& vector_front();/* returns a reference to the first element in the vector*/
	int& vector_back(); /* returns a reference to the last element in the vector */
	size_t vector_size(); /* returns the number of the elements in the vector */

	void print_vector();
};


void MyVector::vector_new(size_t sz)
{
	arr = new int[sz];
	size = 0;
	capacity = 1;
}
void MyVector::vector_delete()
{
	delete[] arr;
}
void MyVector::vector_push_back(int n)
{

	if (size == capacity)
	{
		capacity *= 2;
		int* myArr = new int[capacity];
		for (int i = 0; i < capacity - 1; i++)
		{
			myArr[i] = arr[i];
		}

		delete[] arr;

		arr = myArr;
	}

	arr[size] = n;
	size++;
}
void MyVector::vector_pop_back()
{
	size--;
}
int& MyVector::vector_front()
{
	return arr[0];
}
int& MyVector::vector_back()
{
	return arr[size - 1];
}
size_t MyVector::vector_size()
{
	return size;
}
void MyVector::print_vector()
{
	for (size_t i = 0; i < vector_size(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
int main()
{
	MyVector mv;
	mv.vector_new(10);

	int m;
	cout << "Enter the elemetn, Ctrl+d (linux) or Ctrl+z (win) for end of the program" << endl;
	while (cin >> m)
		mv.vector_push_back(m);

	cout << "first element " << mv.vector_front() << endl;
	cout << "last element " << mv.vector_back() << endl;
	mv.print_vector();

	cout << "removing last element" << endl;
	mv.vector_pop_back();
	mv.print_vector();

	cout << "size " << mv.vector_size() << endl;
	cout << "capacity " << mv.capacity << endl;

	mv.vector_delete();
}
