#include<stdio.h>
int main()
{

    int a[20],n,i,search;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter an array list:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a search number:");
    scanf("%d",&search);

    int found=0;

    for(i=0;i<n;i++){
        if(a[i]==search){
            found++;
            printf("%d number is found and position %d",search,i);
            break;
        }

    }
     if(found==0)
        {
            printf("%d number is not found",search);
        }
}
