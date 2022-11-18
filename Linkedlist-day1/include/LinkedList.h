#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node Node;

struct Node
{
    int Data;
    Node *Prev, *Next;
};


Node *head = NULL, *tail = NULL;



void Add(int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Prev = newNode->Next = NULL;

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->Next = newNode;
        newNode->Prev = tail;
        tail = newNode;
    }
}

void Display()
{
    Node *current = head;

    while(current != NULL)
    {
        printf("%d   ", current->Data);
        current = current->Next;
    }
}

Node* GetNodeByData(int data)
{
    Node *current = head;

    while(current != NULL)
    {
        if(data == current->Data)
            return current;

        current = current->Next;
    }

    return NULL;
}

void Remove(int data)
{
    Node *node = GetNodeByData(data);

    if(node == NULL)
        return;

    if(node == head)
    {
        if(head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            head = head->Next;
            head->Prev = NULL;
        }
    }
    else if(node == tail)
    {
        tail = tail->Prev;
        tail->Next = NULL;
    }
    else
    {
        /*Node *A = node->Prev;
        Node *B = node->Next;

        A->Next = B;
        B->Prev = A;*/

        node->Prev->Next = node->Next;
        node->Next->Prev = node->Prev;
    }

    free(node);
}

void InsertAfter(int data, int afterData)
{
    Node * temp=GetNodeByData(afterData);
    if (temp==NULL)
    {
        return;
    }

    Node * NewNode= malloc (sizeof(Node));
    NewNode->Data=data;
    if (temp==tail)
    {
        NewNode->Next=NULL;
        NewNode->Prev=temp;
        temp->Next=NewNode;
        tail=NewNode;
    }
    else
    {
        NewNode->Next->Prev=NewNode;
        NewNode->Next=temp->Next;
        NewNode->Prev=temp;
        temp->Next=NewNode;


    }

}

int GetCount() {

    Node *current = head;
    int counter=0;

    while(current != NULL)
    {
        counter++;
        current = current->Next;
    }
return counter;
}


int GetDataByIndex(int index){
    Node *current = head;
    int i=0;
    int data_ret=0;

    while(current != NULL)
    {
        if (index==i)//indexfound
        {

        data_ret= current->Data;
        return data_ret;

        }
        i++;
        current = current->Next;
    }

return;
}

#endif // LINKEDLIST_H
