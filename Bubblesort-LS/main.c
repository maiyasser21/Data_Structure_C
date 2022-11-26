#include <stdio.h>
#include <stdlib.h>
#include "bubblesort-LS.h"

void Swap (Node *ptr1, Node *ptr2);
void BubbleSort(Node *LS);

void main(void)
{



}

void BubbleSort(Node *LS)
{
    //int sorted = 0;
    Node *current=head;

    while(current->Next != tail){
        if (current->Data > current->Next->Data){
            Swap(current, current->Next);
            sorted==0;
        }
        current=current->Next;
    }
    tail=current;

    }




    /*
    for(counter = 0; counter < size - 1 && !sorted; counter++)
    {
        sorted = 1;

        for(index = 0; index < size - 1 - counter; index++)
        {
            if(data[index] > data[index + 1])
            {
                Swap(&data[index], &data[index + 1]);
                sorted = 0;
            }
        }
    }*/
}


void Swap (Node *ptr1, Node *ptr2){
int temp=0;
temp=ptr1->Data;
ptr1->Data=ptr2->Data;
ptr2->Data=temp;
}
