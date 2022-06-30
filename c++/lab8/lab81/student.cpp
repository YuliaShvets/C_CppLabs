#include "student.h"
#include <stdio.h>

bool operator >(Student &stud1, Student &stud2)
{
    return stud1.GetRating() > stud2.GetRating();
}

bool operator < (Student &stud3, Student &stud4)
{
    return stud3.GetRating()< stud4.GetRating();
}
 
