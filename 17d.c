#include <stdio.h>
void main()
{
   int m, n, i, j, matrix[10][10], transpose[10][10];

   printf("Enter rows and columns :\n");
   scanf("%d%d", &m, &n);

   printf("Enter elements of the matrix\n");
 
   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix[i][j]);
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         transpose[j][i] = matrix[i][j];

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < m; ++i)
  for (int j = 0; j < n; ++j) {
    printf("%d  ", matrix[i][j]);
    if (j == n - 1)
    printf("\n");
  }


   printf("Transpose of the matrix:\n");

   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", transpose[i][j]);
      printf("\n");
   }
   
}