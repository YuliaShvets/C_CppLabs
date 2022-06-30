#pragma once
#include <vector>

class Set
{
    std::vector <double> set;
public:

    Set();
    Set(double n, ...);

    friend bool operator==(Set set1, Set set2);

    friend Set operator&&(Set set1, Set set2);

    friend Set operator||(Set set1, Set set2);

    friend void operator+=(Set& set1, double a);

    friend void operator-=(Set& set1, double i);

    friend std::ostream& operator<< (std::ostream& out, Set& set1);

    friend std::istream& operator>> (std::istream& in, Set& set1);

    ~Set();

};

