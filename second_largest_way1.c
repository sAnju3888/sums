
#include <stdio.h>

int main()
{
    printf("printing max num in the array: \n");
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=-1000;
    for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
    }
    printf("%d thaa max \n",max);
    //printing
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    printf("\n");
    // consider no negative number incase to int_num
    int second_max = -10;
    for(int i=0;i<n;i++){
    if(a[i]>second_max && a[i]!=max){
        second_max=a[i];
    }
    }
    printf("%d thaa second max",second_max);
    
    

    return 0;
}
