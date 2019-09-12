#include <iostream>
#include "random.h"

#include <vector>
#include <cmath>
#include <string>

using namespace std;

void histograma(vector<double> a, double m) {
	vector <double> u(10, 0);
	double r = a.size();
	for (int i = 0; i < a.size(); ++i) {
		double t = a[i] / m;
		if ((t >= 0.0) && (t <= 0.1)) {
			u[0] += 1.0 / r;
		}
		else if ((t > 0.1) && (t <= 0.2)) {
			u[1] += 1.0 / r;
		}
		else if ((t > 0.2) && (t <= 0.3)) {
			u[2] += 1.0 / r;
		}
		else if ((t > 0.3) && (t <= 0.4)) {
			u[3] += 1.0 / r;
		}
		else if ((t > 0.4) && (t <= 0.5)) {
			u[4] += 1.0 / r;
		}
		else if ((t > 0.5) && (t <= 0.6)) {
			u[5] += 1.0 / r;
		}
		else if ((t > 0.6) && (t <= 0.7)) {
			u[6] += 1.0 / r;
		}
		else if ((t > 0.7) && (t <= 0.8)) {
			u[7] += 1.0 / r;
		}
		else if ((t > 0.8) && (t <= 0.9)) {
			u[8] += 1.0 / r;
		}
		else if ((t > 0.9) && (t <= 1.0)) {
			u[9] += 1.0 / r;
		}
	}
	for (int i = 0; i < 10; ++i) {
		cout << "  [0;0.1]:  " << u[i] << endl;
	}
}

int main() {
	cout << "Please,choose number of method" << endl;
	int arg;
	cin >> arg;
	switch (arg)
	{
	case 1:
	{
		cout << "Please,enter m" << endl;
		int m, c, x0, d, a,xn1,xn2;
		cin >> m;
		cout << "Please,enter c" << endl;
		cin >> c;
		cout << "Please,enter a" << endl;
		cin >> a;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		cout << "Please,enter d" << endl;
		cin >> d;
		cout << "Please,enter xn1" << endl;
		cin >> xn1;
		cout << "Please,enter xn2" << endl;
		cin >> xn2;

		Random random1;
		random1.get(m, a, c, d, x0,xn1,xn2);
		random1.random1();
		random1.print();

		histograma(random1.number, m);

	}
	break;
	case 2:
		//int  d;
	{
		cout << "Please,enter m" << endl;
		int m, c, x0, d, a, xn1, xn2;
		cin >> m;
		cout << "Please,enter c" << endl;
		cin >> c;
		cout << "Please,enter a" << endl;
		cin >> a;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		cout << "Please,enter d" << endl;
		cin >> d;
		cout << "Please,enter xn1" << endl;
		cin >> xn1;
		cout << "Please,enter xn2" << endl;
		cin >> xn2;

		Random random2;
		random2.get(m, a, c, d, x0, xn1, xn2);
		random2.random1();
		random2.print();
		histograma(random2.number, m);

	}
	break;
	case 3:
	{
		cout << "Please,enter m" << endl;
		int m, c, x0, d, a, xn1, xn2;
		cin >> m;
		cout << "Please,enter c" << endl;
		cin >> c;
		cout << "Please,enter a" << endl;
		cin >> a;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		cout << "Please,enter d" << endl;
		cin >> d;
		cout << "Please,enter xn1" << endl;
		cin >> xn1;
		cout << "Please,enter xn2" << endl;
		cin >> xn2;

		Random random3;
		random3.get(m, a, c, d, x0, xn1, xn2);
		random3.random1();
		random3.print();

		histograma(random3.number, m);

	}
	break;
    }

	return 0;
}
