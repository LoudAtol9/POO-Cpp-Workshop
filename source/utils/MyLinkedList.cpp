#include "MyLinkedList.hpp"

/*
 * Se usar o construtor padrao use "setSize" e passe o sizeof
 */
MyLinkedList::MyLinkedList()
{
    MyLinkedList::length = 0;
    MyLinkedList::size = 0;
}

MyLinkedList::MyLinkedList(size_t tipo)
{
    MyLinkedList::length = 0;
    MyLinkedList::size = tipo;
}

MyLinkedList::MyLinkedList(size_t tipo, void* info_ptr)
{
    MyLinkedList::size = tipo;
    MyLinkedList::insere(info_ptr);
}

MyLinkedList::MyLinkedList(size_t tipo, void** new_info, int qnt)
{
    int i;
    MyLinkedList::size = tipo;
    for (i = 0; i < qnt; i++)
        MyLinkedList::insere(new_info[i]);
}

MyLinkedList::~MyLinkedList()
{
    MyLinkedList::deleteLinkedList();
}



/*
 * Retorna um ponteiro allocado por malloc( )
 * Caso queira desalocar use free( )
 * Senão irá ocasionar vazamento de memoria
 */
void* MyLinkedList::busca(int index)
{
    int i = 0;
    struct cel* cel_ptr;

    if (index >= MyLinkedList::length || index < 0) 
        return NULL;

    for (cel_ptr = MyLinkedList::head; i < index; cel_ptr = cel_ptr->prox)
        i++;

    return MyLinkedList::deepCopyVoid(cel_ptr->info);
}



/*
 * Cria uma cópia do conteúdo do ptr (info_ptr)
 * e o adiciona o final da lista
 */
void MyLinkedList::insere(void* info_ptr)
{
    struct cel* ptr;
    struct cel* new_ptr = new struct cel;

    new_ptr->info = MyLinkedList::deepCopyVoid(info_ptr);
    new_ptr->prox = NULL;

    if (MyLinkedList::head == NULL)
        MyLinkedList::head = new_ptr;
    else
    {
        for (ptr = MyLinkedList::head; ptr->prox != NULL; ptr = ptr->prox);
        ptr->prox = new_ptr;
    }  

    MyLinkedList::length++;
}

/*
 * Cria uma cópia do conteúdo do ptr (info_ptr)
 * e o adiciona no ponto especificado (index)
 */
void MyLinkedList::insere(void* info_ptr, int index)
{
    int i = 0;
    struct cel* ptr = NULL;
    struct cel* new_ptr = NULL;

    if (index >= MyLinkedList::length || index < 0) 
        return;

    new_ptr = new struct cel;
    new_ptr->info = MyLinkedList::deepCopyVoid(info_ptr);
    new_ptr->prox = NULL;

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

    MyLinkedList::length++;
}


/*
 * Remove o elemento na posicao indicada
 */
void MyLinkedList::remove(int index)
{
    int i = 0;
    struct cel* ptr;
    struct cel* aux_ptr;

    if (index >= MyLinkedList::length || index < 0) 
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

    MyLinkedList::length--;
    free(aux_ptr->info);
    delete aux_ptr;
}


/*
 * Limpa todo conteúdo da lista
 */
void MyLinkedList::deleteLinkedList()
{
    struct cel* ptr;
    struct cel* ptr_prox;

    for (ptr = MyLinkedList::head; ptr != NULL; ptr = ptr_prox)
    {
        ptr_prox = ptr->prox;
        free(ptr->info);
        delete ptr;
    }

    MyLinkedList::head = NULL;

    return;
}


/*
 * Copia toda a classe e retorna uma 
 * nova instancia dela
 */
MyLinkedList MyLinkedList::deepCopy()
{
    int i = 0;
    struct cel* cel_ptr;

    MyLinkedList listaRetorno = MyLinkedList(MyLinkedList::size);

    // Percore a lista linkada
    for (cel_ptr = MyLinkedList::head; i < MyLinkedList::length && cel_ptr != NULL; cel_ptr = cel_ptr->prox)
    {
        i++;
        listaRetorno.insere((MyLinkedList::deepCopyVoid(cel_ptr->info)));
    }
    
    return listaRetorno;
}


/*
 * Retorna o tamanho da lista
 */
int MyLinkedList::getlength()
{
    return MyLinkedList::length;
}

/*
 * Retorna o tamanho do objeto armazenado dentro da lista
 */
size_t MyLinkedList::getSize()
{
    return MyLinkedList::size;
}

/*
 * Declare o tipo que vai ser armazenado na lista linkada
 */
void MyLinkedList::setSize(size_t tipo)
{
    if (MyLinkedList::size == 0)
        MyLinkedList::size = tipo;
    else
        std::cout << "Erro: (MyLinkedList::setSize) " << std::endl; 
}
