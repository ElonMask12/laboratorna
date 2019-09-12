#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include <vector>


using namespace std;

class Random {
public:
	Random() = default;
	Random(const int& m_, const int& a_, const int& c_, const int& d_, const int& x01,const int& xn1_,const int& xn2_);
	void random1();
	void random2();
	void random3();
	vector<double> number;

	void print();
	void get(int& m_, int& a_, int& c_, int& d_, int& x01, int& xn1_,int& xn2);
private:
	int m;
	int a;
	int c;
	int d;
	int x0;
	int xn1;
	int xn2;


};


#endif // RANDOM_H_INCLUDED
