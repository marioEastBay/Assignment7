//
//
//

#ifndef UNTITLED12_BST_H
#define UNTITLED12_BST_H

#include <string>
#include <fstream>
typedef char ItemType;
struct TreeNode {
    ItemType info;
    TreeNode* left;
    TreeNode* right;
};
#include "Queue.h"
enum OrderType {PRE_ORDER, IN_ORDER, POST_ORDER};
class TreeType
{
public:
    TreeType();                     // constructor
    ~TreeType();                    // destructor
    TreeType(const TreeType& originalTree);
    void operator=(const TreeType& originalTree);
    // copy constructor
    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    int GetLength() const;
    ItemType GetItem(ItemType item, bool& found);
    void PutItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetTree(OrderType order);
    ItemType GetNextItem(OrderType order, bool& finished);
    void Print(std::ofstream& outFile) const;
private:
    TreeNode* root;
    QueType preQue;
    QueType inQue;
    QueType postQue;
};



#endif //UNTITLED12_BST_H
