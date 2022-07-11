#include<stdio.h>
void main()
{
  
   int a[100], n,sum=0,count=0;
   float avg;

   printf("Enter array size [1-100]: ");
   scanf("%d",&n);
   printf("Enter %d elements: ", n);
   
   for(int i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
     sum = sum+a[i];
   }
   
   avg =sum/n;
   printf("Sum= %d \t Average= %.2f \n ", sum, avg);

   // finding number greater than average
   
   for(int i=0; i<n; i++)
   {
     if(a[i]>avg)
     {
         count=count+1;
     }
  }
  printf("Number greater than average are:%d",count);
}