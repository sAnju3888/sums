
#include <stdio.h>

int main()
{
    printf("remove the duplicates in sorted array or not : \n");
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int am = 0;
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   int cmp = a[0];
   int b[n];
   int count=0;
   int c =0;
   for (int i=1;i<n;i++){
       //diff is 0
       printf("%d d",cmp);
       if ((a[i]-cmp)==0){
           printf("%d \n",a[i]);
           if (c==0){
               b[count] = cmp;
               c+=1;
           }
       }
        else{
            c=0;
           b[count]=cmp;
           count+=1;
       }
   cmp = a[i];
       
   } 
   for(int i=0;i<n;i++){
        printf("%d",b[i]);
    }
   

    

    return 0;
}
