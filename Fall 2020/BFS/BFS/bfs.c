#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0
#define MAX 100
typedef struct Node Node;

int adj[100][100];
int front = -1;
int rear = -1;
struct Node *queue[MAX];
int map[30][30], visit[30]; // 인접 행렬과 큐와 방문 배열


struct Node { 
    int nod_id;
    Node *parent;
    Node *left;
    Node *right;
    int flag;
};

struct Node *insertion(struct Node *node, char *, int);
struct Node *cursor(struct Node *node, int);
void breadthFirstSearch(struct Node *node);
bool isEmpty();
struct Node *getFront();
void dequeue();
void enqueue(struct Node *node);
int treeSize(struct Node *node);
int queueSize();
struct Node *addition(struct Node *node, char *, int);
void BFS(struct Node *node);


int main(int argc, const char *argv[]) {

    struct Node *pRoot = (struct Node*)malloc(sizeof(struct Node));
    struct Node *pCursor = (struct Node*)malloc(sizeof(struct Node));
    pRoot->nod_id = 1;
    pCursor = insertion(pRoot, "left", 2);
    pCursor = insertion(pCursor, "left", 4);
    pCursor = insertion(pCursor, "left", 7);
    cursor(pCursor, 2);
    pCursor = insertion(pCursor, "right", 5);
    cursor(pCursor, 5);
    pCursor = insertion(pCursor, "left", 8);
    cursor(pCursor, 5);
    pCursor = insertion(pCursor, "right", 9);
    cursor(pCursor, 1);
    pCursor = insertion(pCursor, "right", 3);
    pCursor = insertion(pCursor, "right", 6);
    pCursor = insertion(pCursor, "right", 10);
    breadthFirstSearch(pRoot);
    
    
    return 0;
}

struct Node *insertion(struct Node *parent, char *direc,  int nod_id) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->nod_id = nod_id;
    newNode->flag = 0;
    if(direc == "left") {
        parent->left = newNode;
        newNode->parent = parent;
    } else if(direc == "right") {
        parent->right = newNode;
        newNode->parent = parent;
    }
    return newNode;
}

struct Node *cursor(struct Node *node, int nod_id) {
    if(((node->left)&&(node->right)) == NULL) {
        return NULL;
    }
    if(node->nod_id == nod_id) return node;
    cursor(node->left, nod_id);
    cursor(node->right, nod_id);
    if(((node->left)&&(node->right)) == NULL) return NULL;
}


void breadthFirstSearch(struct Node *node) {
    struct Node *pCursor = (struct Node*)malloc(sizeof(struct Node));
    pCursor = node;
    enqueue(pCursor);
    while(!isEmpty()) {
        printf("%d\n", queue[0]->nod_id);
        if(queue[0]->left->flag == 0) {
            pCursor = pCursor->left;
            enqueue(pCursor);
            pCursor = pCursor->parent;
        }
        if(queue[0]->right->flag == 0) {
            pCursor = pCursor->right;
            enqueue(pCursor);
            pCursor = pCursor->parent;
        }
        dequeue();
    }
    
    
    return ;
}

bool isEmpty() {
    if(front == rear) return true;
    else return false;
}

struct Node *getFront() {
    if(isEmpty()) printf("Queue is empty.\n");
    else {
        front = (front+1) % MAX;
        return queue[front];
    }
}

void dequeue() {
    if(isEmpty()) printf("Queue is empty.\n");
    else {
        front = (front+1) % MAX;
        free(queue[front]);
    }
}

void enqueue(struct Node *node) {
    rear = (rear+1) % MAX;
    queue[rear] = node;
    queue[rear]->flag = 1;
}

int queueSize() {
    if(!isEmpty()) return 0;
    else {
        int frontTemp = front;
        int size = 0;
        while(frontTemp != rear) {
            size = size + 1;
            frontTemp = frontTemp + 1;
        }
        return size;
    }
}

struct Node *addition(struct Node *node, char *direc, int nod_id) {
    struct Node *pCursor = (struct Node*)malloc(sizeof(struct Node));
    pCursor = insertion(node, direc, nod_id);
    enqueue(pCursor);
    return pCursor;
}

int treeSize(struct Node *node) {
    int temp = 0;
    if(node == NULL) return temp;
    temp = temp + 1;
    treeSize(node->left);
    treeSize(node->right);
    return temp;
}

void BFS(struct Node *node) {
    struct Node *pCursor = (struct Node*)malloc(sizeof(struct Node));
    printf("isEmpty.\n");
    while(!isEmpty()) {
        printf("while statement.\n");
        //① queue의 가장 앞에 있는 노드를 pop
        pCursor = queue[0];
        
        //② 현재 노드에 인접한 모든 노드들 중
        for(int i=0; i<queueSize(); i++) {
            int here = queue[0]->nod_id;
            int there = adj[here][i];
            // 아직 방문하지 않은 노드들을 queue에 push
            if(queue[there]->flag == 0) {
                struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
                newNode->nod_id = there;
                queue[there]->flag = 1;
            }
        }
    }
    return;
}

/*
void displaytree(struct node *node, int size) {
    printf("%d", node[0].id);
    
    for(int i=0;i<size;i++) {
        if(node[i].left != NULL) {
            printf("%d", node[i].left->id);
        }
        if(node[i].right != NULL) {
            printf("%d", node[i].right->id);
        }
    }
    printf("\n");
    return ;
}
*/
