
#include <stdio.h>

int main()
{
    printf("check the array is sorted or not : \n");
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int am = 0;
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   // checking the diffrence of two consecutive numbers
   int cmp1 = a[0];
   for (int i = 1;i<n;i++){
       if (a[i]> cmp1){
           cmp1 = a[i];
       }
       else{
           am=1;
           printf("The given array is not sorted");
           break;
       }
       
   }
   if (am==0){
       printf("the given array is sorted");
   }
 

    return 0;
}
