#include<stdio.h>
int main()
{
    int number,array,max,search;
    printf("Enter Number of Element: ");
    scanf("%d",&number);
    printf("\nPlease Enter you Searching Number : ");
    scanf("%d",&search);

    for(int i=0; i<number; i++)
    {
        scanf("%d",&array);
        for(int j=0; j<number; j++)
        {
            if(array == search)
            {
                max = i+1;
                break;
                break;
            }
        }
    }
    printf("\n %d in present on index number %d\n",search,max);

    return 0;
}
