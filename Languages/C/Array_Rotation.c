#include <stdio.h>
main()
{
    int n;
    scanf("%d",&n); //taking input for size of array
    int A[n],i,t;
     for (i = 0; i < n; i++)
        scanf("%d",&A[i]); //array elements input
    t = A[n-1]; //temporary variable for swapping array elements
    for (i = n-1; i > 0; i--)
      A[i] = A[i-1];
      A[0] = t; //values swapped
    printf("\n The array after rotation is : \n");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
  return 0;
}
