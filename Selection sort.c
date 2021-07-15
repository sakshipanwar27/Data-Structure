#include<stdio.h>
int main(){
    int a[100],i,j,n,min,swap;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements  :\n");
    for(i=0; i<n; i++)
    
    scanf("%d", &a[i]);
    
    for(i=0; i < n-1; i++)
    {
        min=i;
        
        for(j=i+1; j<n ; j++){
            
            if(a[min] > a[j])
            
                min=j;
            }
            
            if(min!=i)
            {
                swap=a[i];
                a[i]=a[min];
                a[min]=swap;
                 }
        }
        
        printf("Sorted array \n : "); 
        
        for(i=0; i<n; i++)
        
        printf("%d\n", a[i]);
        return 0;
        
        
    }
    
    
    
