#include <iostream>
#include <fstream>

using namespace std;

float func(int a, int b, int c, int d);

int main()
{
	int x, y, z, w;

	ifstream inFile("data.dat");
	inFile >> x >> y >> z >> w;

	cout << "The average of file data: " << x << ", " << y << ", " << z << ", and ";
	cout << w << " is " << func(x, y, z, w) << endl;

	cout << "Input four integers: ";
	cin >> x >> y >> z >> w;

	cout << "The average of keyboard data: " << x << ", " << y << ", " << z << ", and ";
	cout << w << " is " << func(x, y, z, w) << endl;

	return 0;
}

float func(int a, int b, int c, int d)
{
	return (a+b+c+d)/4.0;
}
