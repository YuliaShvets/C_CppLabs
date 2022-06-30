
#include <iostream>
#include "Class.h"
using namespace std;




int main()
{
    Set set1(4, 3.14, 7.0, 9.0, 18.0);
    set1 += 5.0;
    cout << set1;
    set1 -= 3;
    cout << set1;
    Set set2(4, 2.0, 3.14, 4.0, 5.9);
    Set set3 = set1 && set2;
    Set set4 = set1 || set2;
    cout << set3 << set4;
    if (set1 == set2)
        cout << "Sets are equal";
    else
        cout << "Sets are NOT equal";
    Set set5;
    cin >> set5;
    cout << set5;
    return 0;
}
