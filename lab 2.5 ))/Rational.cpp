#include "Rational.h"

void Rational::Display(Pair pair1, Pair pair2)
{
	Rational l;
	cout << "(a, b) * (c, d) = (a * c), (b * d)" << endl;
	cout << " ( " << l.Multiply_1(pair1, pair2) << " , " << l.Multiply_2(pair1, pair2) << " )" << endl << endl;

	cout << "(a, b) - (c, d) = (a - c), (b - d)" << endl;
	cout << " ( " << l.Diff_1(pair1, pair2) << " , " << l.Diff_2(pair1.GetSecond(), pair2.GetSecond()) << " )" << endl;

	cout << "(a, b) + (c, d) = (ad + bc, bd)" << endl;
	cout << " ( " << l.Plus_1(pair1, pair2) << " , " << l.Plus_2(pair1, pair2) << " )" << endl << endl;

	cout << "(a, b) / (c, d) = (ad / bc)" << endl;
	cout << " ( " << l.div_1(pair1, pair2) << " , " << l.div_2(pair1, pair2) << " )" << endl << endl;
}

int Rational::Multiply_1(Pair a, Pair b) { return a.GetFirst() * b.GetFirst(); }

int Rational::Multiply_2(Pair a, Pair b) { return a.GetSecond() * b.GetSecond(); }

int Rational::Diff_1(Pair a, Pair b) { return a.GetFirst() * b.GetSecond() - a.GetSecond() * b.GetFirst(); }
int Rational::Diff_2(int a, int b) { return a * b; }

int Rational::Plus_1(Pair a, Pair b) {return a.GetFirst() * b.GetSecond() + a.GetSecond() * b.GetFirst();}
int Rational::Plus_2(Pair a, Pair b) { return a.GetSecond() * b.GetSecond(); }

int Rational::div_1(Pair a, Pair b) { return a.GetFirst() * b.GetSecond(); }
int Rational::div_2(Pair a, Pair b) { return a.GetSecond() * b.GetFirst(); }

void Rational::Init(Pair pair) { SetPair(pair); }