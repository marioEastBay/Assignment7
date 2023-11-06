#ifndef UNTITLED12_QUEUE_H
#define UNTITLED12_QUEUE_H

#include <new>
#include <cstddef>
class FullQueue {};

class EmptyQueue {};
typedef char ItemType;

struct NodeType;

class QueType {
public:
    QueType();

    QueType(int max);

    ~QueType();

    QueType(const QueType& anotherQue);

    void MakeEmpty();

    bool IsEmpty() const;

    bool IsFull() const;

    void Enqueue(ItemType newItem);

    void Dequeue(ItemType& item);

private:
    NodeType* front;
    NodeType* rear;
};



#endif //UNTITLED12_QUEUE_H
