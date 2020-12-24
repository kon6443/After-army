#include <iostream>

#define MAX_PCB 5

using namespace std;

struct PCB {
    int parent;
    int children;
};

class Node {
    friend class SLinkedList;
private:
    PCB *PCB;
    Node *pNext;
public:
    Node();
//    Node(struct *);
};

class SLinkedList {
private:
    Node *pHead;
    Node *pCursor;
public:
    SLinkedList();
    void insertion(PCB *);
    void deletion(PCB *);
    void showInfo();
    int count();
};


int main(int argc, const char * argv[]) {

    PCB PCB[MAX_PCB];
    
    
    
    return 0;
}
Node::Node() {
    PCB = NULL;
    pNext = NULL;
}

/*
Node::Node(struct *PCB) {
    this->PCB = PCB;
    pNext = NULL;
}
*/

SLinkedList::SLinkedList() {
    pHead = NULL;
    pCursor = NULL;
}

void SLinkedList::insertion(PCB *PCB) {
    if(pHead==NULL) {
        pHead = new Node();
        pCursor = new Node();
        Node *pNewNode = new Node();
        pNewNode->PCB = PCB;
        pHead->pNext = pNewNode;
    } else {
        Node *pNewNode = new Node();
        pCursor = pHead->pNext;
        pNewNode = pHead->pNext;
        pNewNode->pNext = pCursor;
    }
}

void SLinkedList::deletion(PCB *) {
    
}

void SLinkedList::showInfo() {
    
}

int SLinkedList::count() {
    int temp = 0;
    
    return temp;
}
 
