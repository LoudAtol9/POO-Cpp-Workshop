#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include <iostream>

struct cel
{
    void* info;
    struct cel* prox;
};


/*
 * Lista Linkada:
 *
 * Condições:
 * - (para elementos do mesmo tipo)
 * - (para elementos do mesmo tamanho)
 */
class MyLinkedList
{
private:
    struct cel* head = NULL;
    int length = 0;
    size_t size = 0;

    void* deepCopyVoid(void* void_ptr)
    {
        int i = 0;
        int razao = MyLinkedList::size / sizeof(char);

        char* char_ptr = (char*) void_ptr;
        char* char_ptr_copy = (char*) malloc(MyLinkedList::size);

        if (i >= razao)
            free(char_ptr_copy);
            return NULL;
        
        for (i = 0; i < razao; i++)
        {
            char_ptr_copy[i] = char_ptr[i];
        }

        return (void*) char_ptr_copy;
    }

public:
    MyLinkedList();
    MyLinkedList(size_t tipo);
    MyLinkedList(size_t tipo, void* info_ptr);
    MyLinkedList(size_t tipo, void** info_ptr_array, int qnt);
    ~MyLinkedList();

    void* busca(int index);

    void insere(void* info_ptr);
    void insere(void* info_ptr, int index);

    void remove(int index);
    void deleteLinkedList();

    MyLinkedList deepCopy();

    int getlength();
    size_t getSize();
    void setSize(size_t tipo);
};



#endif // MYLINKEDLIST_H