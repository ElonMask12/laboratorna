#include <iostream>
#define _USE_MATH_DEFINES
#include "Random.h"

#include <math.h>




using namespace std;

Random::Random( const int& x01,int m_){

	x0 = x01;
	m = m_;

}
void Random::get(int& x01,int m_ ) {

	x0 = x01;
	m_ = m;
}

double Random::random1() {
	int a = 1541;
	int c = 2957;

	double t;
	for (int i = 1; i < 100; ++i) {
		t = (a*x0 + c) % m;
		number.push_back(t);
		x0 = t;
	}
	return t;

}

double Random::random2() {
	int a = 33;
	int c = 61;
	int d = 32;
	double t;
	for (int i = 1; i < 100; ++i) {
		t = (d*x0*x0 + a * x0 + c) % m;
		number.push_back(t);
		x0 = t;
	}
	return t;
}

void Random::random3() {

	int xn1 = 2; int xn2 = 3;
	for (int i = 1; i < 100; ++i) {
		x0 = (xn1 + xn2) % m;
		number.push_back(x0);
		xn1 = xn2;
		xn2 = x0;
	}


}
int Random::obernene_chislo(long long a,int m) {
	a = a % m;
	for (int x = 1; x < m; x++)
	{
		if ((a * x) % m == 1)
			return x;
	}
}
void Random::random4()
{
	int a = 3;
	int c = 5;
	int X = 3;
	int p = 10067;
	for (int i = 0; i <= 100; ++i) {
		X = obernene_chislo(X,p);
		X = ((a*X) + c) % p;
		number.push_back(X);
	}
}
void Random::random5()
{
	int a = 3;
	int c = 2;
	int d = 5;
	int m = 12000;
	int t;
	int t1 = x0;
	int t2 = x0;

	for (int i = 1; i <= 100; ++i) {

		t1 = (a*t1 + c) % m;
		t2 = (d*t2*t2 + a * t2 + c) % m;
		t = abs((t1 - t2) % m);
		number.push_back(t);

	}
}
void Random::random6() {
	int t;
	double sum = 0, u = 0;
	for (int j = 0; j < 12; j++)
		sum += random1() / m;
	t = sum - 6;
	number.push_back(t);
	x0 = t;

}
void Random::random7() {
	static long x = 1, y = -1;
	int t1, t2;
	double ux = 0, uy = 0, s = 0, v1 = 0, v2 = 0, z1 = 0, z2 = 0;
	ux = random1() / m;
	uy = random1() / m;
	v1 = 2 * ux - 1;
	v2 = 2 * uy - 1;
	s = v1 * v1 + v2 * v2;
	for (int i = 0; i < 1000;i++) {

		if (s >= 1) continue;
		else {
			z1 = v1 * (sqrt(((-2)*log(s)) / s));
			z2 = v2 * (sqrt(((-2)*log(s)) / s));
			t1 = (z1 + 3) * 10;
			t2 = (z2 + 3) * 10;
		}

	}
	number.push_back(t1);
	number.push_back(t2);
}
void Random::random8() {
	double ux, uy, z = 0;
		bool isGenerated = false;
	while (!isGenerated) {
		ux = random1() / m;
		uy = random1() / m;
		z = (sqrt(8 / (exp(1))))*((uy - 0.5) / ux);
		if ((z*z) <= (5 - (4 * pow((exp(1)), (1 / 4))*ux)))
			isGenerated = true;
		else if ((z*z) < ((4 * pow((exp(1)), ((-1)*1.35)) / ux) + 1.4))
			if ((z*z) <= ((-4)*log(ux)))
				isGenerated = true;
		number.push_back(z);
		x0 = z;
	};
}
void Random::random9() {
	int t = 0;
	double xn = 0, ux = 0;
	ux = random1() / m;
	xn = -2 * log(ux);
	if (xn > 10)
		xn = 9;
	t= xn * m/ 10;
	number.push_back(t);
	x0 = t;
}
void Random::random10()
{
	static std::vector<int> arr(100);
	double t;
	double xn = 0, y = 0, x = 0, a = 23;
	xn = random1() / m;
	y = tan(M_PI *xn);
	x = sqrt(2 * a - 1)*y + a - 1;

	for (int i = 0; i < 100;i++) {
		if (x <= 0) continue;
		if (xn > (1 + y * y)*exp((a - 1)*log(x / (a - 1)) - sqrt(2 * a - 1)*y)) continue;
		t = x/10;
		number.push_back(t);

	}

}
void Random::print() {
	for (int i = 0; i < number.size(); ++i) {
		cout << number[i] << " ";
	}
	cout << "\n";
}
