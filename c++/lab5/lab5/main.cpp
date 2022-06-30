#include "header.h"
 

 int main ()
{
    
     Country Ukraine ("Ukraine", REPUBLIC, "Kyiv", 38, 45000000, 603628, 3726);
     Country Poland ("Poland", DEMOCRACY, "Warzaw", 48, 37950000, 312679, 15686);
     Country Italy ("Italy", AUTOCRACY, "Rome", 39, 59550000, 301340, 31676);
      
     
     Land land;
     
     land.addCountry(Ukraine);
     land.addCountry(Poland);
     land.addCountry(Italy);
     
     
     land.sortCountries();
     
     land.calculatePopulationDensity();
    
     
    

 };
