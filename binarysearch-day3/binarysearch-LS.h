typedef struct Node Node;

struct Node
{
    int Data;
    Node *Next;
};


Node *head=NULL;
Node *tail=NULL;


void Add(int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Next = NULL;

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->Next = newNode;
        //newNode->Prev = tail;
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
