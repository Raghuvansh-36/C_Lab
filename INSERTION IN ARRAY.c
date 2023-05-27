// Use of insertion in the array.
#include<stdio.h>
int main()
{
    int arr[100];
    int i,item,position,n;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the array elements:\n");
     for(i=0;i<n;i++)
     {
      scanf("%d",& arr[i]);
     }
     printf("Array before insertion:");
     for(i=0;i<n;i++)
     {
      printf("%d ",arr[i]);
     }

    printf("\nEnter the element to be inserted:");
    scanf("%d",& item);
    printf("Enter the position at which the element is to be inserted:");
    scanf("%d",& position);
    n++;

    for(i=n-1;i>=position;i--)
    arr[i]=arr[i-1];
    arr[position - 1]=item;

    printf("\nArray after insertion:");
     for(i=0;i<n;i++)
     {
      printf("%d ", arr[i]);
     }
return 0;
}
