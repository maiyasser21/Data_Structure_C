#include <stdio.h>
#include <stdlib.h>
#include "bubblesort-LS.h"

void Swap (Node *ptr1, Node *ptr2);
void BubbleSort();

void main(void)
{
    Add(3);
    Add(5);
    Add(7);
    Add(9);
    Add(1);

    Display();
    printf("\n");
    BubbleSort();
    Display();

}

void BubbleSort()
{
    Node *current;
    Node *ptr;
    ptr=head;

    while(ptr->Next != NULL)
    {
        current=head;

        while(current->Next != NULL)
        {

            if (current->Data > current->Next->Data)
            {
                Swap(current, current->Next);
            }
            current=current->Next;
        }
        ptr=ptr->Next;

    }


}

void Swap (Node *ptr1, Node *ptr2)
{
    int temp=0;
    temp=ptr1->Data;
    ptr1->Data=ptr2->Data;
    ptr2->Data=temp;
}
