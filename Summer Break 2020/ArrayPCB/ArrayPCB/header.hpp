#include <iostream>

using namespace std;

#define PCB_MAX 5

class DLinkedList;

class PCB {//: public DLinkedList {
    friend class DLinkedList;
public:
    int parent;
    PCB *children;
    void create(int &);
    void destroy(int );

};

class Node {
    friend class DLinkedList;
    friend class PCB;
private:
    Node *pPrevious;
    class PCB *pcb;
    Node *pNext;
public:
    Node();
};

class DLinkedList {
    friend class PCB;
private:
    Node *pHead;
    Node *pCursor;
    Node *pTail;
public:
    DLinkedList();
    void insertion();
    void deletion(int );
    void showInfo();
    int countNode();

};

