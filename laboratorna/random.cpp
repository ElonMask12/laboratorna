#include <iostream>
#include "random.h"


using namespace std;

Random::Random(const int& m_, const int& a_, const int& c_, const int& d_, const int& x01,const int& xn1_,const int& xn2_) {
	m = m_;
	a = a_;
	c = c_;
	d = d_;
	x0 = x01;
	xn1 = xn1_;
	xn2 = xn2_;
}
void Random::get(int& m_, int& a_, int& c_, int& d_, int& x01, int& xn1_,int& xn2_) {
	m = m_;
	a = a_;
	c = c_;
	d = d_;
	x0 = x01;
	xn1 = xn1_;
	xn2 = xn2_;
}

void Random::random1() {
	vector<double> rand;
	int t;
	for (int i = 1; i < 10; ++i) {
		t = (a*x0 + c) % m;
		number.push_back(t);
		x0 = t;
	}

}

void Random::random2() {
	int t;
	for (int i = 1; i < 10; ++i) {
		t = (d*x0*x0 + a * x0 + c) % m;
		number.push_back(t);
		x0 = t;
	}

}

void Random::random3() {


	for (int i = 1; i < 10; ++i) {
		x0 = (xn1 + xn2) % m;
		number.push_back(x0);
		xn1 = xn2;
		xn2 = x0;
	}


}


void Random::print() {
	for (int i = 0; i < number.size(); ++i) {
		cout << number[i] << " ";
	}
	cout << "\n";
}
