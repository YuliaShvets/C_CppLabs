#pragma once
#include <iostream>
#include <string>
using namespace std;


class Publication
{
public:
    string author;
    int pages;
    virtual void location() = 0;
    void type_of_publication()
    {
        cout<<"It is a type of publication"<<endl;
    }
};

class Book : public Publication {
  
private:
    string colour;
public:
    int ageRest;
    void location() override{
        
        cout<<"Find book in a library"<<endl;
    }
    
};

class Ebook : public Book {
    
    private :
    string site;
public:
    int wordnum;
    void location() override {
        
        cout<<"Find book in the Internet"<<endl;
    }
    string GetSite()
    {
        return site;
    }
    
};
 
class Monograph : public Book {
    protected :
    int chapters;
    public :
    string theme;
    void location()override
    {
        cout<<"Find monograph in book shops"<<endl;
    }
};

class Magazines : public Publication
{
    public :
    string type;
    void location()override
    {
        cout<<"Find magazines in a shop"<<endl;
    }
    
};
