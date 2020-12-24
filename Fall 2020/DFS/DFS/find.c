#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0


struct Node {
    int nod_id;
    struct node *parent;
    struct node *left;
    struct node *right;
};

struct Node *insertion(struct Node *node, char *, int);
struct Node *cursor(struct Node *node, int);
void depthFirstSearch(struct Node *node);

int main(int argc, const char *argv[]) {

    struct Node *pRoot = (struct Node*)malloc(sizeof(struct Node));
    struct Node *pCursor = (struct Node*)malloc(sizeof(struct Node));
    pRoot->nod_id = 1;
    pCursor = insertion(pRoot, "left", 2);
    pCursor = insertion(pCursor, "left", 3);
    pCursor = insertion(pCursor, "left", 4);
    cursor(pCursor, 2);
    pCursor = insertion(pCursor, "right", 5);
    cursor(pCursor, 5);
    pCursor = insertion(pCursor, "left", 6);
    cursor(pCursor, 5);
    pCursor = insertion(pCursor, "right", 7);
    cursor(pCursor, 1);
    pCursor = insertion(pCursor, "right", 8);
    pCursor = insertion(pCursor, "right", 9);
    pCursor = insertion(pCursor, "right", 10);
    depthFirstSearch(pRoot);
    
    
    return 0;
}

struct Node *insertion(struct Node *parent, char *direc,  int nod_id) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->nod_id = nod_id;
    if(direc == "left") {
        parent->left = newNode;
    } else if(direc == "right") {
        parent->right = newNode;
    }
    return newNode;
}

struct Node *cursor(struct Node *node, int data) {
    if(((node->left)&&(node->right)) == NULL) {
        return NULL;
    }
    printf("node null\n");
    if(node->nod_id == data) return node;
    printf("nodid == data\n");
    cursor(node->left, data);
    cursor(node->right, data);
    if(((node->left)&&(node->right)) == NULL) return NULL;
}

void depthFirstSearch(struct Node *node) {
    if(node == NULL) return;
    printf("%d\n", node->nod_id);
    depthFirstSearch(node->left);
    depthFirstSearch(node->right);
    return ;
}
