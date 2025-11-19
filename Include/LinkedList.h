#ifndef LINKED_LIST_H
#define LINKED_LIST_H

template<typename T>
class ListNode
{
public: 
    ListNode<T>* next = nullptr;
    ListNode<T>* prev = nullptr;
    T* data;
};

template<typename T>
class LinkedList
{
public:
    ListNode<T>* head = nullptr;
    ListNode<T>* tail = nullptr;
    int size = 0;
    ListNode<T>* push(T* data)
    {
        ListNode<T>* newNode = new ListNode<T>();
        newNode->data = data;
        if (head)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else
        {
            head = newNode;
            tail = head;
        }
        this->size++;
        return newNode;
    }

    void remove(ListNode<T>* elem)
    {
        if (elem == head)
        {
            if (elem->next)
            {
                elem->next->prev = nullptr;
                head = elem->next;
                elem->next = nullptr;
            }
            else
            {
                head = nullptr;
                tail = nullptr;
            }
        }
        else if (elem == tail) // head != tail 
        {
            elem->prev->next = nullptr;
            tail = elem->prev;
            elem->prev = nullptr;
        }
        else // elem != head && elem != tail
        {
            elem->prev->next = elem->next;
            elem->next->prev = elem->prev;
        }
        this->size--;
    }
};

#endif // LINKED_LIST_H