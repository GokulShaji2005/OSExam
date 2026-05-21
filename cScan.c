// Online C compiler to run C program online
#include <stdio.h>

int main() {
      int n,arr[20],head,total,new[25];
   printf("Enter the No:");
   scanf("%d",&n);
   
   printf("Enter the Numbers:");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   arr[n]=0;
   arr[n+1]=199;
   printf("Enter the head:");
   scanf("%d",&head);
   printf("%d ",head);
int temp;
for(int i=0;i<=n+1;i++){
    for(int j=i+1;j<=n+1;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int index=0;
for(int i=0;i<=n+1;i++){
    if(arr[i]>head){
        new[index]=arr[i];
        index++;
    }
}

for(int i=0;i<=n+1;i++){
    if(arr[i]<head){
        new[index]=arr[i];
        index++;
    }
}

for(int i=0;i<index;i++){
   printf("%d ",new[i]);
    }

printf("\n");
int seek1=arr[n+1]-head;
int seek2=arr[n+1]+new[index-1];
total=seek1+seek2;
printf("Total seek:%d ",total);
    return 0;
}
