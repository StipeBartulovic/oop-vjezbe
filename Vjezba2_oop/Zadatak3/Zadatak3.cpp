#include <iostream>
#include <iomanip>

using namespace std;

typedef struct
{
	int x, y;

}square;

typedef struct
{
	int x, y, r;

}circle;

void presjek(int** niz, const circle& a, int num, int& k)
{
	k = 0;
	for (int i = 0; i < num; i++)
		for (int j = 0; j < 1; j++)
		{
			int x = max(niz[i][j], min(a.x, niz[i][j + 2]));
			int y = max(niz[i][j + 1], min(a.y, niz[i][j + 3]));
			int X = x - a.x;
			int Y = y - a.y;
			if ((X * X + Y * Y) <= a.r * a.r)
				k++;

		}
}

void main()
{
	int num, k;
	circle a;
	square b;
	cout << "enter the points of the circle: " << endl;
	cin >> a.x >> a.y;
	cout << "enter the radius of the circle: " << endl;
	cin >> a.r;
	cout << "enter how many squares you want: " << endl;
	cin >> num;
	int** Arr = new int* [num];
	for (int i = 0; i < num; i++)
		for (int j = 0; j < 4; j++)
		{
			Arr[i] = new int[j];
			cout << "Input " << j + 1 << ". point for " << i + 1 << " squer: " << endl;
			cin >> b.x >> b.y;
			Arr[i][j] = b.x;
			j++;
			Arr[i][j] = b.y;
		}
	presjek(Arr, a, num, k);
	cout << k << " squere cross the circle!";
}