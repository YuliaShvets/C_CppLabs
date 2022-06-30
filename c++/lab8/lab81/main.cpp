#include <iostream>
#include "list.h"
#include "student.h"
#include "list.cpp"

bool compare(Student &a, Student &b)
{
    return a.GetRating() < b.GetRating();
}
int main()
{
    List<Student> lst;
    Student type1 = Student("Yulia", "Shvets", "IoT", 2004, 4);
    Student type2 = Student("Anastasia", "Moroz","IoT", 2003, 5);
    Student type3 = Student("Oleh", "Yatskiv", "IoT", 2003, 4.8);
    Student type4 = Student("Vadym", "Pavlyk", "IoT", 2004, 4.5);
    lst.push_back(type1);
    lst.push_back(type2);
    lst.push_back(type3);
    lst.push_back(type4);
       cout<<"Size of list before deleting:"<<lst.GetSize()<<endl;
    lst.sortItems(compare);
       cout<<"\n"<<endl;
       lst.printList(0);
       cout<<"\n"<<endl;
       cout<<"\n"<<endl;
       lst[1].printf();
       lst[3].printf();
       cout<<"\n\n"<<endl;
       lst.searchByName("Shvets");
       lst.searchByName("Yatskiv");
       lst.deleteObject();
       cout<<"Size after deleting an object:"<<lst.GetSize()<<endl;
       cout<<"\n\n"<<endl;
       cout<<"\n"<<endl;
       lst.deleteList();
       cout<<"Size of list after deleting:"<<lst.GetSize()<<endl;
};
