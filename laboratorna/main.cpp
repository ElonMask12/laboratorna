#include <iostream>
#include "Random.h"

#include <vector>
#include <cmath>
#include <string>

//cons int m = 12000;
using namespace std;

void histograma(vector<double> a,const int m) {
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
	for (double i = 0; i < 10; ++i) {
		cout << "["<<i/10<<";"<<(i+1)/10<<"]"<<":  "<< u[i] << endl;
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
		int x0;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Random random1;
		random1.get(x0,m);
		random1.random1();
		random1.print();

     	histograma(random1.number, m);

	}
	break;
	case 2:
	{
		int  x0;

		cout << "Please,enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Random random2;
		random2.get(x0,m);
		random2.random2();
		random2.print();
		histograma(random2.number, m);

	}
	break;
	case 3:
	{
		int x0;

		cin >> x0;
		cout << "Please,enter d" << endl;
		int m = 12000;
		Random random3;
		random3.get(x0,m);
		random3.random3();
		random3.print();

		histograma(random3.number, m);

	}
	break;
	case 4:
	{
		int m = 12000;
		Random random4;
		random4.random4();
		random4.print();

		histograma(random4.number, m);
	}
	break;
	case 5:
	{
		int m = 12000;
		Random random5;
		random5.random5();
		random5.print();

		histograma(random5.number, m);
	}
	break;
	case 6:
	{
		int x0;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		int m = 12000;


		Random random6;
		random6.get(x0, m);
		random6.random6();
		random6.print();

		histograma(random6.number, m);
	}
	break;
	case 7:
	{
		int x0;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		int m = 12000;


		Random random7;
		random7.get(x0, m);
		random7.random7();
		random7.print();

		histograma(random7.number, m);
	}
	break;
	case 8:
	{
		int x0;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		int m = 12000;


		Random random8;
		random8.get(x0, m);
		random8.random8();
		random8.print();

		histograma(random8.number, m);
	}
	break;
	case 9:
	{
		int x0;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		int m = 12000;


		Random random9;
		random9.get(x0, m);
		random9.random9();
		random9.print();

		histograma(random9.number, m);
	}
	break;
	case 10:
	{
		int x0;
		cout << "Please,enter x0" << endl;
		cin >> x0;
		int m = 12000;


		Random random10;
		random10.get(x0, m);
		random10.random10();
		random10.print();

		histograma(random10.number, m);
	}
	break;

	}


	return 0;
}
