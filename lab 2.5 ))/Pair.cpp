#include "Pair.h"
Pair::Pair()
{
    first = 0;
    second = 0;
}
Pair::Pair(int f = 0, int s = 0)
{
    first = f;
    second = s;
}
Pair::Pair(const Pair& r)
{
    first = r.first;
    second = r.second;
}
Pair::~Pair() { }

void Pair::Init(int F, int S)
{
    SetFirst(F);
    SetSecond(S);
}

Pair operator - (const Pair& a, const Pair& b)
{
    return Pair(a.first - b.first, a.second - b.second);
}
bool Pair::equal(Pair a, Pair b)
{

    if (a.first == b.first && a.second == b.second)
        return true;
    else
        return false;
}

Pair& Pair::operator = (const Pair& r)
{
    first = r.first;
    second = r.second;
    return *this;
}

Pair::operator string () const
{
    stringstream sstr;
    sstr << endl << " ( " << first << " , " << second << " )" << endl << endl;
    return sstr.str();
}

ostream& operator << (ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}

istream& operator >> (istream& in, Pair& r)
{
    cout << " "; in >> r.first;
    cout << " "; in >> r.second;
    r.Init(r.first, r.second);
    return in;
}

Pair& Pair::operator ++()
{
    first++;
    return *this;
}
Pair& Pair::operator --()
{
    first--;
    return *this;
}
Pair Pair::operator ++(int)
{
    Pair t(*this);
    second++;
    return t;
}
Pair Pair::operator --(int)
{
    Pair t(*this);
    second--;
    return t;
}
