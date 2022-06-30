#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    string lastName;
    string group;
    int date;
    float rating;
public:
    Student( string name, string lastName, string group, int date, float rating)
    {
        this->name = name;
        this->lastName = lastName;
        this->group = group;
        this->date = date;
        this->rating = rating;
    }
    Student(){};
    void printf()
    {
        cout<<"Name and surname:"<<this->name<<" "<<this->lastName<<" "<<"Group:"<<this->group<<" "<<"Date of birth:"<<this->date<<" "<<"Rating:"<<this->rating<<endl;
    }
    string GetLastName(){return lastName;}
    float GetRating(){return rating;}
    
};
