#include <stdio.h>

void display(int arr[], int n){
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



void InserElement(int arr[], int element, int index, int size, int capacity )
{
    if (size>=capacity)
    {
        printf("Array is full");

    }
    for (int i=size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}

int main(){
    int arr[100]={10,5,2,5,4};
    int elemet=50, size=5, index=3;
    display(arr, size);
    InserElement(arr, elemet, index, size, 100);
    size=size+1;
    display(arr, size);
    return 0;
}