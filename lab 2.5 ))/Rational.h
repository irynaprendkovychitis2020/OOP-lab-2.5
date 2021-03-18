#pragma once
#include "Pair.h"

using namespace std;

class Rational
{
private:
	Pair pair;
public:
	Pair GetPair() { return pair; }
	void SetPair(Pair pair) { this->pair = pair; }

	int Multiply_1(Pair a, Pair b);
	int Multiply_2(Pair a, Pair b);
	int Diff_1(Pair a, Pair b);
	int Diff_2(int a, int b);
	int Plus_1(Pair a, Pair b);
	int Plus_2(Pair a, Pair b);
	int div_1(Pair a, Pair b);
	int div_2(Pair a, Pair b);
	void Init(Pair pair);
	void Display(Pair pair1, Pair pair2);
};