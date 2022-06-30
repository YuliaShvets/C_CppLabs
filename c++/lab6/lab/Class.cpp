#include "Class.h"
#include<iostream>
using std::endl;
using std::istream;
using std::ostream;
Set::Set()
{

};
Set::Set(double n, ...)
{
    double* pn = &n;
    for (int i = 0; i < n; ++i)
    {
        set.push_back(*(++pn));

    }
}
bool operator==(Set set1, Set set2)
{
    bool a = false;
    for (int i = 0; i < set1.set.size(); ++i)
    {
        a = false;
        for (int j = 0; j < set2.set.size(); ++j)
        {
            if (set1.set[i] == set2.set[j])
                a = true;
        }
        if (!a)
            return false;
    }
    return true;
}

Set operator&&(Set set1, Set set2)
{
    Set set3;
    for (int i = 0; i < set1.set.size(); ++i)
    {
        for (int j = 0; j < set2.set.size(); ++j)
        {
            if (set1.set[i] == set2.set[j])
                set3.set.push_back(set1.set[i]);
        }
    }
    return set3;
}

Set operator||(Set set1, Set set2)
{
    Set set3 = set2;
    for (int i = 0; i < set1.set.size(); ++i)
    {
        bool a = true;
        for (int j = 0; j < set2.set.size(); ++j)
        {
            if (set1.set[i] == set2.set[j])
                a = false;
        }
        if (a)
            set3.set.push_back(set1.set[i]);
    }
    return set3;
}

void operator+=(Set& set1, double a)
{
    set1.set.push_back(a);
}

void operator-=(Set& set1, double i)
{
    set1.set.erase(set1.set.begin() + i - 1);
}

ostream& operator<< (ostream& out, Set& set1)
{
    for (int i = 0; i < set1.set.size(); ++i)
        out << set1.set[i] << endl;
    std::cout << "\n\n\n";
    return out;
}

istream& operator>> (istream& in, Set& set1)
{
    std::cout << "\nwrite your set(write not number to end):\n";
    int a;
    while (in >> a)
        set1.set.push_back(a);
    std::cout << endl << endl;
    return in;
}

Set::~Set()
{

}

