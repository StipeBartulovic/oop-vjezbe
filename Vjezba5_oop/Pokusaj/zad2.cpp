#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Point
{
public:
	double x, y, z;

public:
	void setMemberValue(Point& p);
	void setPseudorandomValue(Point& p, double min, double max);
	void getMemberValue(Point& p);
	double twoDDistance(Point a, Point b);
	double triDDistance(Point a, Point b);
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



int main()
{
	srand(double(time(NULL)));

	int n;
	int numberOfHits = 0;
	double min = 1;
	double max = 10;

	cout << "How many targets you want: ";
	cin >> n;
	cout << endl;

	Gun g;
	Point p;
	int clip = 6;
	int ammo = clip;

	cout << "Gun position coordinates: ";
	p.setPseudorandomValue(p, min, max);

	g.position = p;
	g.clipSize = clip;
	g.currentAmmo = ammo;

	Target arrayOfTargets[10];

	for (int i = 0; i < n; ++i)
	{
		Target t;
		Point a, c;

		cout << i + 1 << ". target point A coordinates: ";
		a.setPseudorandomValue(a, min, max);
		cout << i + 1 << ". target point C coordinates: ";
		c.setPseudorandomValue(c, min, max);

		t.A = a;
		t.C = c;

		arrayOfTargets[i] = t;
	}

	for (int i = 0; i < g.clipSize; ++i)
	{
		Point shot;

		cout << "Bullet hole coordinates: ";

		if (((shot.x = g.position.x) && (shot.y = g.position.y)) || ((shot.x = g.position.x) && (shot.z = g.position.z)) || ((shot.y = g.position.y) && (shot.z = g.position.y)))
		{
			for (int i = 0; i < n; ++i)
			{
				if ((shot.x <= sqrt((arrayOfTargets[i].C.x - arrayOfTargets[i].A.x) * (arrayOfTargets[i].C.x - arrayOfTargets[i].A.x))) && ((shote.y <= sqrt((arrayOfTargets[i].C.y - arrayOfTargets[i].A.y) * (arrayOfTargets[i].C.y - arrayOfTargets[i].A.y))) && ((shot.z <= sqrt((arrayOfTargets[i].C.z - arrayOfTargets[i].A.z) * (arrayOfTargets[i].C.z - arrayOfTargets[i].A.z))))))
					numberOfHits++;
			}
		}
	}

	cout << "Number of hits: " << numberOfHits << endl;
}