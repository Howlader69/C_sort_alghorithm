#include<stdio.h>
int main()
{

    int a[30],i,n,j,temp,min;
    printf("enter array length:");
    scanf("%d",&n);
    printf("enter an array list:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
 for(i=0;i<n-1;i++){
    min=i;
    for(j=i+1;j<n;j++){
        if(a[min]>a[j])
            min=j;
    }
    if(min !=i){
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
 }
 printf("sorted list:");
 for(i=0;i<n;i++){
    printf("%d",a[i]);

 }

}
