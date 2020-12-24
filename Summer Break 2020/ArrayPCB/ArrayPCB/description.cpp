#include "header.hpp"

/*
PCB::PCB(int p) {
    parent = p;
    children = NULL;
}
*/

/*
void PCB::create(int p) {
    PCB(p);
    children = p+1 ;
}

void PCB::destroy(int p) {
    
}
*/

Node::Node() {
    pPrevious = NULL;
    pcb = NULL;
    pNext = NULL;
}

DLinkedList::DLinkedList() {
    pHead = NULL;
    pCursor = NULL;
    pTail = NULL;
}

void DLinkedList::insertion() {
    if(pHead==NULL) {
        pHead = new Node();
        pCursor = new Node();
        pTail = new Node();
        Node *pNewNode = new Node();
        pHead->pNext = pNewNode;
        pNewNode->pNext = pTail;
        pTail->pPrevious = pNewNode;
        pNewNode->pPrevious = pHead;
    } else {
        pCursor = pTail->pPrevious;
        Node *pNewNode = new Node();
        pCursor->pNext = pNewNode;
        pNewNode->pNext = pTail;
        pTail->pPrevious = pNewNode;
        pNewNode->pPrevious = pCursor;
    }
}

void DLinkedList::deletion(int p) {
    
}

void DLinkedList::showInfo() {
    if(pHead==NULL) {
        cout<<"There is no node in the list."<<endl;
    } else {
        pCursor = pHead;
        while(pCursor->pNext!=pTail) {
            pCursor = pCursor->pNext;
            cout<<"Data: "<<pCursor->pcb<<"."<<endl;
        }
    }
}

int DLinkedList::countNode() {
    int iCountNode = 0;
    if(pHead==NULL) {
        return 0;
    } else {
        pCursor = pHead;
        while(pCursor->pNext!=pTail) {
            pCursor = pCursor->pNext;
            iCountNode ++;
        }
    }
    return iCountNode;
}

void PCB::create(int &p) {
    parent = NULL;
    DLinkedList L;
    L.insertion();
    L.pcb->parent = p;
}

void PCB::destroy(int p) {
    
}

