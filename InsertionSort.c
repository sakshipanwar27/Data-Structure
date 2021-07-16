#include<stdio.h>
 int main(){
     int a[100] , i,j,n, temp;
     printf("Enter size of array: " );
     scanf("%d", &n);
     printf("\nEnter elements:");
     for(i=0;i<n;i++)
     scanf("%d", &a[i]);
     
     for(i=1;i<n;i++){
         temp=a[i];
         for(j=i;j>0 &&temp<a[j-1];j--)
         {
             a[j]=a[j-1];
         }
         a[j]=temp;
         
         }
         printf("After sorting \n");
          for(i=0;i<n;i++)
            printf("%d \n", a[i]);
            return 0;
 }