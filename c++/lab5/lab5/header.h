#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

 enum governmentType
{
     DEMOCRACY,
     REPUBLIC,
     AUTOCRACY
 };

class Country
{
private:
    governmentType type_government;
    string name;
    string capital;
    int code;
    int population;
    int area;
    int GDP;
    
public:
    Country(){}
    ~Country(){}
    
    void print()
    {
        cout<<"The country has name:"<< name<<"\nGDP:"<<GDP<<endl;
    }
    void printf()
    {
        cout<< "Density of "<< name <<"="<<getDensity() <<endl;
    }
    
    
Country(string valueName, governmentType value_government , string valueCapital, int valueCode, int valuePopulation, int valueArea, int valueGDP)
    {
    this->type_government= value_government;
    this->name= valueName;
    this->capital= valueCapital;
    this->code= valueCode;
    this->population=valuePopulation;
    this->area = valueArea;
    this->GDP=valueGDP;
    }
    int getGDP();
    int getPopulation();
    int getArea();
    int getDensity();
    
};
class Land
{
private:
    vector<Country> Countries;
    
public:
    
  void addCountry(Country country)
    {
      Countries.push_back(country);
  }
    Land (){}
    ~Land(){}
    
    void sortCountries();
     
    void calculatePopulationDensity ();
    
};
