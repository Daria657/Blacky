#include <iostream> git init;
#include <math.h> git add main.cpp;
using namespace std;
int main()
{
	bool res;
	float x, y;
	cout << "Input x-->";
	cin >> x;
	cout << "x=" << x << endl;
	cout << "Input y-->";
	cin >> y;
	cout << "y=" << y << endl;
	res = (x * x + y * y <= 36 & y >= 0&x>=0) ;
	cout << "Result=" << res;
	return 0;
}