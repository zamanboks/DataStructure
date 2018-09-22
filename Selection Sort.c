#include<stdio.h>
int main()
{
    int number,array[100],j,temp;
    scanf("%d",&number);

    for(int i=0; i<number; i++)
        scanf("%d",&array[i]);

    for(int j=0; j<number; j++)
    {
        int i;
        int index_minimun = j;
        for(int k = j+1; k<number; k++)
        {
            if( array[k] < array[index_minimun])
            {
                index_minimun = k;
            }
        }
        if(index_minimun != i){
            temp = array[j];
            array[j] = array[index_minimun];
            array[index_minimun] = temp;
        }
    }
     for(int m=0; m<number; m++)
        printf("%d ",array[m]);

    return 0;
}
