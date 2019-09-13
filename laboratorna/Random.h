#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include <vector>


using namespace std;

class Random {
public:
	Random() = default;
	Random(const int& x01,int m_);
	double random1();
	double random2();
	void random3();
	void random4();
	void random5();
	void random6();
	void random7();
	void random8();
	void random9();
	void random10();
	int obernene_chislo(long long a, int m);
	int m = 10000;

	vector<double> number;

	void print();
	void get(int& x01,int m_);
private:
	int x0;




};

#endif // RANDOM_H_INCLUDED
