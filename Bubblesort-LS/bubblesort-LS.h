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
