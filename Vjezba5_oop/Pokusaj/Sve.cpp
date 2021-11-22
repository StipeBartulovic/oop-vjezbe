#include <iostream>
#include <iomanip>

using namespace std;

class Point {
public:
	double x = 0;
	double y = 0;
	double z = 0;
	void set()
	{
		cout << "Input values of coordinates: " << endl;
		cin >> x >> y >> z;
	}
	void random(int first, int last)
	{
		if (first < 0)
		{
			x = rand() % last - first + first;
			y = rand() % last - first + first;
			z = rand() % last - first + first;
		}
		else
		{
			x = rand() % last + first;
			y = rand() % last + first;
			z = rand() % last + first;
		}
	}
	void gets(double& X, double& Y, double& Z)
	{
		X = x; Y = y; Z = z;
	}
	void lenght_2D(double x1, double x2, double y1, double y2, double& len)
	{
		len = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	}
	void lenght_3D(double x1, double x2, double y1, double y2, double z1, double z2, double& len)
	{
		len = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2));
	}

};

class Gun
{
public:
	Point position;
	int clipSize, currentAmmo;

public:
	void shoot(Point p, int clip, int ammo);
	void reload(Point p, int clip, int ammo);
};

class Target
{
public:
	Point A, C;
	int hit;
};

void Gun::shoot(Point p, int clip, int ammo)
{
	if (ammo > 0)
		ammo--;
	else
		reload(p, clip, ammo);
}

void Gun::reload(Point p, int clip, int ammo)
{
	if (ammo == 0)
		ammo = clip;
}


void main()
{
	srand((double)time(NULL));
	int first, last;
	cout << "Enter the first and the last number of the interval: " << endl;
	cin >> first >> last;
	double x1, x2, y1, y2, z1, z2, 2D, 3D;
	Point P;
	P.random(first, last);
	P.gets(x1, y1, z1);
	P.random(first, last);
	P.gets(x2, y2, z2);

	cout << "X1 = " << x1 << " X2 = " << x2 << endl << "Y1 = " << y1 << " Y2 = " << y2 << endl << "Z1 = " << z1 << " Z2 = " << z2 << endl;

	P.lenght_2D(x1, x2, y1, y2, 2D);
	P.lenght_3D(x1, x2, y1, y2, z1, z2, 3D);

	cout << "Lenght between two dots in 2D is: " << 2D << " and in 3D is: " << 3D << endl;
}