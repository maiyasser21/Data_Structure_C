#include <stdio.h>
#include <stdlib.h>
#include "binarysearch-LS.h"

int BinarySearchLS (int);

void main(void)
{
    int i=0;
    int x=0;
    int z=0;
    Add(3);
    Add(5);
    Add(7);
    Add(9);

    Display();
    i=GetCount();
    x=GetDataByIndex(1);
    z=BinarySearchLS(9);
    printf("\n");
    printf("Count is = %d \n", i);
    printf("Data in index is = %d \n", x);
    printf("Data found is = %d", z);


}
int BinarySearchLS (int item)
{
    int LS_size=GetCount();

    int minIndex=0, max_Index= (LS_size), midIndex;
    int temp=0;

        while (minIndex<=max_Index)
        {
            midIndex=(minIndex+max_Index)/2;
            temp=GetDataByIndex(midIndex);

            if (item==temp)
            {
                return temp;
            }
            if (item > temp)
            {
                minIndex=midIndex+1;
            }
            else
            {
                max_Index=midIndex-1;
            }
        }


    return -1;

}



