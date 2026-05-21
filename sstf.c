// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,arr[20],visited[25]={0},head,index,total=0,min;
   printf("Enter the No:");
   scanf("%d",&n);
   
   printf("Enter the Numbers:");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   printf("Enter the head:");
   scanf("%d",&head);
   int dist;
   
    printf("%d ",head);
   for(int i=0;i<n;i++){
        index=-1,min=10000;
       for(int j=0;j<n;j++){
           if(visited[j]==0){
               dist=abs(head-arr[j]);
               if(dist<min){
                   min=dist;
                   index=j;
               }
           }
       }
       
       printf("%d ",arr[index]);
       total+=min;
       head=arr[index];
       visited[index]=1;
       
   }
   
   printf("Total seek time:%d",total);
   

    return 0;
}
