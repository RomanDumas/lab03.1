#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, A;

	cout << "x = "; cin >> x;

	//1 спосіб

	if (x < 0 || x == 0) {
		A = log(cos(x)) + x * x * x * x * x;
		
	}
	if (x > 0 && x < 3) {
		A = cos(1 + log(x)) / sin(1 + log(x));
		
	}
	if (x == 3) {
		A = cos(1 + log(x)) / sin(1 + log(x));
		
	}
	if (x > 3) {
		A = 12 * x - x * x * x * x * x * x * x * x;
		
	}
	y = 2 + 6 * x + A;

	cout << "1) y = " << y << endl;

	//2 спосіб

	if (x < 0 || x == 0)
		A = log(cos(x)) + x * x * x * x * x;
	else
		if (x > 0 && x < 3)
			A = cos(1 + log(x)) / sin(1 + log(x));
		else 
			if (x == 3) 
				A = cos(1 + log(x)) / sin(1 + log(x));
			else
				if (x > 3)
					A = 12 * x - x * x * x * x * x * x * x * x;
	y = 2 + 6 * x + A;

	cout << "2) y = " << y << endl;

	return 0;
}