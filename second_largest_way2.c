
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
    int max = a[0];
    // ensure no negative number in array
    int second_max = -10;
    
    for (int i=0;i<n;i++){
        if(a[i]>max ){
            
            if(second_max!=max){
            second_max = max;
            }
            max = a[i];
        }
        printf("%d %d \n",max,second_max);
        if(i==n-1 && max!=a[n-1]){
            if (a[n-1]>second_max){
                second_max = a[n-1];
            }
        }
        
        
    }
    printf("%d thaa nan than max \n",max);
    printf("%d thaa nan than second max",second_max);
    return 0;
}
