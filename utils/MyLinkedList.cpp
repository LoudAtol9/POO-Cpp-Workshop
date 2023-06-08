#include "MyLinkedList.hpp"

MyLinkedList::MyLinkedList(){}

MyLinkedList::MyLinkedList(void* info_ptr)
{
    MyLinkedList::insere(info_ptr);
}

MyLinkedList::MyLinkedList(void** new_info, int qnt)
{
    int i;
    for (i = 0; i < qnt; i++)
        MyLinkedList::insere(new_info[i]);
}

MyLinkedList::~MyLinkedList(){}


void* MyLinkedList::busca(int index)
{
    int i = 0;
    struct cel* ptr;

    for (ptr = MyLinkedList::head; i < index; ptr = ptr->prox)
        i++;
    
    return ptr->info;
}


void MyLinkedList::insere(void* info_ptr)
{
    struct cel* ptr;
    struct cel* new_ptr = new struct cel;

    MyLinkedList::size++;
    new_ptr->info = info_ptr;
    new_ptr->prox = NULL;

    if (MyLinkedList::head == NULL)
        MyLinkedList::head = new_ptr;
    else
    {
        for (ptr = MyLinkedList::head; ptr->prox != NULL; ptr = ptr->prox);
        ptr->prox = new_ptr;
    }  

    MyLinkedList::size++;
}

void MyLinkedList::insere(void* info_ptr, int index)
{
    int i = 0;
    struct cel* ptr;
    struct cel* new_ptr = new struct cel;

    new_ptr->info = info_ptr;
    new_ptr->prox = NULL;

    if (index > MyLinkedList::size || index < 0) 
    {
        delete new_ptr;
        return;
    }
    if (index == 0)
    {
        new_ptr->prox = MyLinkedList::head->prox;
        MyLinkedList::head = new_ptr;
    } 
    else
    {
        for (ptr = MyLinkedList::head; i < index - 1; ptr = ptr->prox)
            i++;
        new_ptr->prox = ptr->prox;
        ptr->prox = new_ptr;
    }  

    MyLinkedList::size++;
}


void MyLinkedList::remove(int index)
{
    int i = 0;
    struct cel* ptr;
    struct cel* aux_ptr;

    if (index > MyLinkedList::size || index < 0) 
        return;
    else if (index == 0)
    {
        aux_ptr = MyLinkedList::head;
        MyLinkedList::head = MyLinkedList::head->prox;
    }
    else
    {
        for (ptr = MyLinkedList::head; i < index - 1; ptr = ptr->prox)
            i++;

        aux_ptr = ptr->prox;
        ptr->prox = ptr->prox->prox;
    }

    MyLinkedList::size--;
    delete aux_ptr;
}

int MyLinkedList::getSize()
{
    return MyLinkedList::size;
}

void MyLinkedList::remove(void* info_ptr)
{
    int i = 0;
    struct cel* ptr;
    struct cel* aux_ptr;

    try
    {
        if (info_ptr == MyLinkedList::head->info)
        {
        aux_ptr = MyLinkedList::head;
        MyLinkedList::head = MyLinkedList::head->prox;
        }
        else
        {
            for (ptr = MyLinkedList::head; ptr->prox->info == info_ptr; ptr = ptr->prox)
                i++;

            aux_ptr = ptr->prox;
            ptr->prox = ptr->prox->prox;
        }

        MyLinkedList::size--;
        delete aux_ptr;
    }
    catch(...)
    {
        std::cout << "Erro: (MyLinkedList in remove) info_ptr não achado" << std::endl;
    }
}


MyLinkedList MyLinkedList::copy(size_t tam)
{
    int i;
    int j;

    void* void_ptr_copy;
    char* char_ptr;
    char* char_ptr_copy;

    struct cel* cel_ptr;
    struct cel* cel_ptr_copy;

    MyLinkedList listaRetorno = MyLinkedList();

    int razao = tam / sizeof(char);

    // Percore a lista linkada
    for (cel_ptr = MyLinkedList::head; i < MyLinkedList::size; cel_ptr = cel_ptr->prox)
    {
        i++;
        cel_ptr_copy = new struct cel;
        void_ptr_copy = malloc(tam);

        char_ptr = (char*) cel_ptr->info;
        char_ptr_copy = (char*) void_ptr_copy;

        /* Separa o conteúdo de void* em char (1byte)
         * os ponteiros char* percorem o void* do 
         * original e coloca na copia 
         */
        for (j = 0; j < razao; j++)
        {
            *char_ptr_copy = *char_ptr;
            char_ptr = char_ptr + 1;
            char_ptr_copy = char_ptr_copy + 1;
        }

        cel_ptr_copy->info = void_ptr_copy;
        listaRetorno.insere(cel_ptr_copy);
    }
    
    return listaRetorno;
}
