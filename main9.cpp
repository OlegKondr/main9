#include <iostream>
 

int main()
{
    
    int n = 0;
    printf("Enter the number of items:");
    scanf("%d", &n);
 
    int *arr = new int[n];
 
    for (int i = 0; i < n; i++)
    {
      printf("Enter the element:",i);
       scanf("%d", &arr[i]);
    }
 
    int min = arr[0];
    int max = arr[0];
    int avg = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        avg += arr[i];
    }
 
    printf ( "Maximum number: %d\n" , max );
    printf ( "Minimum number: %d\n" , min );
    printf ( "Sum of all elements: %d\n" , avg );
    printf ( "Arithmetic mean (integers): %d\n" , avg/n  );
 
   
}
