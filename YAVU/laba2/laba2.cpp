#include <iostream>
#include <string>
using namespace std;

template<typename T>
class list
{
private:
    template<typename I>
    class Node
    {
    public:
        Node *pNext;
        I data;
        Node(I data=I(),Node *pNext=nullptr )
        {
            this->data=data;
            this->pNext=pNext;
        }
    };
    int Size;
    Node<T> *head;
public:
    list(/* args */);
    ~list();
    void push_back(T data);
    int GetSize(){return Size;}

    T& operator[](const int index);
};
template<typename T>
list<T>::list(/* args */)
{
    Size = 0;
    head = nullptr;
}
template<typename T>
list<T>::~list()
{
}
template<typename T>
void list<T>::push_back(T data)
{
    if(head == nullptr)
    {
        head = new Node<T>(data);
    }
    else
    {
        Node<T> *current = this->head;
        while (current->pNext !=nullptr)
        {
            current = current->pNext;
        }
        current -> pNext = new Node<T>(data);
        
    }
    Size++;
}
template<typename T>
T& list<T>::operator[](const int index)
{   
    int counter = 0;
    Node<T> *current = this->head;
    while (current!=nullptr)
    {
        if(counter == index)
        {
            return current->data;
        }
        current = current->pNext;
        counter++;   
    }
    
}




int main() {
    setlocale(LC_ALL, "ru ");

    list<int> lst;
    lst.push_back(5);
    lst.push_back(10);
    lst.push_back(22);
    cout << lst.GetSize() << endl;
    cout << lst[2]<<endl;



    return 0;
}