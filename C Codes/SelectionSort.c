#include<stdio.h>
int SelectionSort(int array[],int size)
{
    for(int i = 0 ; i < size -1 ; i++ )
    {
       
        int min = i;
        for(int j = i+1 ; j <size ; j++ )
        {
            if(array[j]<array[min])
            {  
                min = j;
            }
        }
        if(min != i)
        {
            swap(array[i],array[min]);
        }
    }
    printf("Sorted Array : ");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",array[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the element in array : ");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    SelectionSort(array,size);
}