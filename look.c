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
   
   printf("Enter the head:");
   scanf("%d",&head);
   printf("%d ",head);
int temp;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

int index=0;
for(int i=0;i<n;i++){
    if(arr[i]>=head){
       new[index]=arr[i]; 
       index++;
    }
}
int mid;
int count=-1;
for(int i=0;i<n;i++){
    if(arr[i]<head){
        count++;
        
    }
}

for(int i=count;i>=0;i--){
    new[index]=arr[i];
    index++;
}
int max=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
}
int seek1=max-head;
int seek2=max-new[index-1];
total=seek1+seek2;
for(int i=0;i<index;i++){
    printf("%d ",new[i]);
}
printf("\n");
printf("Total seek:%d",total);
    return 0;
}
