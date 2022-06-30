#pragma once
#include <iostream>
#include <string>
#include "node.h"
using namespace std;
template <typename T>
class List
{
public:
    List();
    ~List();
    void push_back(T data);
    int GetSize(){return size;}
    void searchByName(string lastName);
    void printList(int num);
    void deleteList();
    T& operator[](const int index);
    void sortItems(bool f(T&, T&));
    
    void deleteObject();
private:
    Node<T> *head ;
    int size;
    
};

