// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int pid[20],at[20],bt[20],ct[20],tat[20],wt[20],rem[20],n,queue[20],quant;
 printf("Enter the no:");
 scanf("%d",&n);
 
 printf("Enter the at and bt:");
 for(int i=0;i<n;i++){
     pid[i]=i+1;
     scanf("%d%d",&at[i],&bt[i]);
     rem[i]=bt[i];
 }
 int visited[20]={0};
 printf("Enter the quant:");
 scanf("%d",&quant);
 
 int front=0,rear=0;
 int gant_p[20],gant_t[20],gant_i=0,time=0,count=0;
 
 
 for(int i=0;i<n;i++){
     if(at[i]==0){
         queue[rear++]=i;
         visited[i]=1;
     }
 }
 while(count<n){
   if(front==rear){
       time++;
       for(int i=0;i<n;i++){
           if(at[i]<=time && visited[i]==0){
               queue[rear++]=i;
               visited[i]=1;
           }
       }
       continue;
   }
   
   int i=queue[front++];
 if(rem[i]>quant){
     time+=quant;
     rem[i]-=quant;
 
 }
 else{
     time+=rem[i];
     rem[i]=0;
     ct[i]=time;
     count++;
 }
 
 gant_p[gant_i]=i;
 gant_t[gant_i]=time;
 gant_i++;
 
 for(int j=0;j<n;j++){
     if(at[j]<=time && visited[j]==0){
         queue[rear++]=j;
         visited[j]=1;
     }
 }
 
 if(rem[i]>0){
     queue[rear++]=i;
 }
 }
 for(int i=0;i<n;i++){
     tat[i]=ct[i]-at[i];
     wt[i]=tat[i]-bt[i];
 }
 
 printf("\nPid\tat\tbt\tct\ttat\twt\n");
 
 for(int i=0;i<n;i++){
     printf("P%d\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);
 }
 
 for(int i=0;i<gant_i;i++){
     printf("| P%d",gant_p[i]);
     
 }
 printf("|\n");
 printf("0");
 for(int i=0;i<gant_i;i++){
     printf("\t%d",gant_t[i]);
 }
    return 0;
}
