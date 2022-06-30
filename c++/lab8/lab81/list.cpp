#include "list.h"
#include <stdio.h>
#include "student.h"
#include "node.h"
template <typename T>

List<T>::List()
{
    size = 0;
    head = nullptr;
}
template <typename T>
List<T>::~List()
{
}

template <typename T>
void List<T>::push_back(T data)
{
    if(head == nullptr)
    {
        head = new Node<T>(data);
    }
    else
    {
        Node<T> *current = this ->head;
        while(current ->pNext != nullptr)
    {
        current = current->pNext;
    }
        current->pNext = new Node<T>(data);
   }
 size++;
}
template<typename T>
void List<T>::searchByName(string lastName)
{
    Node<Student> *temporary = this ->head;
    while(lastName !=temporary->data.GetLastName())
    {
        temporary = temporary -> pNext;
    }
    temporary->data.printf();
}
template <typename T>
void List<T>::printList(int num)
{
    if (num==0)
    {
        Node<Student> *temporary = head;
        while(temporary !=nullptr)
        {
            temporary->data.printf();
            temporary = temporary ->pNext;
        }
    }
}
template<typename T>
void List<T>::deleteList()
{
    while(size)
    {
        Node<T> *temp = head;
        head = head->pNext;
        delete temp;
        size--;
    }
}
template<typename T>
T& List<T>::operator[](const int index)
{
    int counter = 0;
    Node<T> *current = head;
    while(current != nullptr)
    {
       if(counter == index)
       {
           return current ->data;
       }
        current = current->pNext;
        counter++;
    }
    return current->data;
}

template<typename T>
void List<T>::deleteObject()
{
    Node<T> *temphead = this->head;
    this->head= this->head->pNext;
    delete temphead;
    size--;
}
template <typename T>
void List<T>::sortItems(bool f(T&, T&))
{
    if (size < 2) return;
        Node<T> *tmp = head->pNext, *prev = head;
        int cnt = 1;
        while(tmp != nullptr){
            prev->pNext = tmp->pNext;
            if (f(tmp->data, head->data)){
                tmp->pNext = head;
                head = tmp;
            }
            else{
                Node<T> *new_tmp = head;
                while(f(new_tmp->data, tmp->data)){
                    if (new_tmp->pNext != nullptr && f(new_tmp->pNext->data, tmp->data)) new_tmp = new_tmp->pNext;
                    else break;
                }
                tmp->pNext = new_tmp->pNext;
                new_tmp->pNext = tmp;
            }
            tmp = head->pNext;
            prev = head;
            cnt ++;
            for (int i=1; i<cnt-1; i++){
                tmp = tmp->pNext;
                prev = prev->pNext;
            }
        }
    }


