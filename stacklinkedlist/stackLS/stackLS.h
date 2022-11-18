typedef struct Stack_Node {
    int Data;
    Stack_Node*next;
}Stack_Node;

Stack_Node* top=NULL;


void push(int data) {

Stack_Node* newNode = malloc(sizeof(Stack_Node));
newNode->Data=data;

if (top==NULL){

newNode->next=NULL;
}
else{
    newNode->next=top;
}

top=newNode;
}

int pop (){




}
