#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Pair
{
private:
	int first;
	int second;
public:
	Pair();
	Pair(int, int);
	Pair(const Pair&);
	~Pair();

	int GetFirst() const { return first; }
	int GetSecond() const { return second; }

	void SetFirst(int first) { this->first = first; };
	void SetSecond(int second) { this->second = second; };

	void Init(int F, int S);
	Pair& operator = (const Pair&);
	operator string() const;
	friend ostream& operator << (ostream&, const Pair&);
	friend istream& operator >> (istream&, Pair&);
	friend Pair operator - (const Pair&, const Pair&);
	bool equal(Pair a, Pair b);

	Pair& operator ++();
	Pair& operator --();
	Pair operator ++(int);
	Pair operator --(int);
};