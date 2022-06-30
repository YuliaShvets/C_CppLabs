#include "header.h"

int Country::getGDP()
        
{
    return GDP;
}


 void Land::sortCountries()
{
     Country temp;
     for(int i = 0; i < Countries.size(); i++)
     {
         for(int j = i + 1; j < Countries.size(); j++)
         {
             if (Countries[j].getGDP() > Countries[i].getGDP())
             {
                 
                temp = Countries[j];
                 Countries[j] = Countries[i];
                 Countries[i] = temp;
             }
         }
     }
     for ( auto country : Countries)
     {
         country.print();
     }
 }
 
int Country::getArea()
{
    return area;
}
int Country::getPopulation()
{
    return population;
}
int Country::getDensity()
{
    int density;
    density = population/area;
    return density;
}

void Land::calculatePopulationDensity()
{
    Country temp;
    for(int i = 0; i < Countries.size(); i++)
    {
        for(int j = i + 1; j < Countries.size(); j++)
        {
            if (Countries[j].getDensity() > Countries[i].getDensity())
            {
                
               temp = Countries[j];
                Countries[j] = Countries[i];
                Countries[i] = temp;
            }
        }
    }
    for (auto country : Countries)
    {
        country.printf();
    }
}
