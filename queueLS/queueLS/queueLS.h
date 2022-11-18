typedef struct Queue_Node {
    int data;
    Queue_Node *next;

}Queue_Node;

Queue_Node* frontq;
Queue_Node* rear;
frontq=rear=NULL;


void EnQueue (int Data){
    Queue_Node* q;
    q=malloc(sizeof(Queue_Node));
    q->data=Data;
    q->next=NULL;

    if (frontq==NULL && rear==NULL){
        frontq=q;
        rear=q;
    }
    else {
        rear->next=q;
        rear=q;
    }

}

int DeQueue (Queue_Node* q, int* data){
    if (frontq==NULL){
        return 0;
    }
    else
    *data=q->data;
    frontq=frontq->next;
    q=frontq;
    return 1;



}
