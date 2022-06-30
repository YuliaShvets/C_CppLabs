#include "publication.h"

int main()
{
    Book book;
    book.location();
    book.type_of_publication();
    book.ageRest = 16;
    cout<<"Age restriction:"<<book.ageRest<<endl;
    
    cout<<"\n\n"<<endl;
    
    Ebook ebook;
    ebook.location();
    ebook.type_of_publication();
    ebook.GetSite() = "VNS";
    ebook.ageRest = 12;
    cout<<ebook.GetSite()<<endl;
    ebook.wordnum = 5000;
    cout<<"Number of words:"<<ebook.wordnum<<endl;
    cout<<"Age restriction:"<<ebook.ageRest<<endl;
    
    cout<<"\n\n"<<endl;
    
    Monograph monograph;
    monograph.location();
    monograph.type_of_publication();
    monograph.ageRest = 20;
    monograph.pages = 500;
    monograph.author = "Professor";
    cout<<"Age restriction:"<<monograph.ageRest<<endl;
    cout<<"Number of pages:"<<monograph.pages<<endl;
    cout<<"Author:"<<monograph.author<<endl;

    cout<<"\n\n"<<endl;
    
    Magazines magazine;
    magazine.location();
    magazine.type_of_publication();
    magazine.type = "fashion magazine";
    magazine.pages = 8;
    cout<<"Type of magazine:"<<magazine.type<<endl;
    cout<<"Number of pages:"<<magazine.pages<<endl;
    
};
