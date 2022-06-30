#include <iostream>
using namespace std;
#include "stadium.h"
#include <string>

int main()
{
    Stadium stadium = Stadium("Ukraine", 25000, 10000, "1000lx", "Football", 8, 16);
    stadium.print();
    
}
