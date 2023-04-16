/*C program to linearly search an element
in an array.*/
/*If x is present then return its location, otherwise
 return -1*/

#include <stdio.h>

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = { 45, 65, 87, 16, 54 };
    int x = 65; //Value to be searched
    int N = sizeof(arr) / sizeof(arr[0]); //Size of array

    // Function call
    int result = search(arr, N, x);
    printf("The elements of the array are - \n");

     for (int i = 0; i < N; i++)
       printf("%d ", arr[i]);
       printf("\n");
       printf("Element to be searched is : %d\n", x);

     if (result == -1)
       printf("Element is not present in the array\n");
     else
       printf("Element is present at %d position of array\n\n", result);

     printf("Thanks!");

     return 0;
}

