#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include <iostream>

struct cel
{
    void* info;
    struct cel* prox;
};


class MyLinkedList
{
private:
    struct cel* head = NULL;
    int size = 0;

public:
    MyLinkedList();
    MyLinkedList(void* info_ptr);
    MyLinkedList(void** info_ptr_array, int qnt);
    ~MyLinkedList();

    void* busca(int index);

    void insere(void* info_ptr);
    void insere(void* info_ptr, int index);

    void remove(int index);
    void remove(void* info_ptr);

    int getSize();

    MyLinkedList copy(size_t tam);
};



#endif // MYLINKEDLIST_H