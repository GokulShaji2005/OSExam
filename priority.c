// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int pid[20],at[20],bt[20],ct[20],tat[20],wt[20],n,prior[20];
 printf("Enter the no:");
 scanf("%d",&n);
 

 for(int i=0;i<n;i++){
     pid[i]=i+1;
      printf("Enter the at and bt:");
     scanf("%d%d",&at[i],&bt[i]);
  printf("Enter the priority:");
 scanf("%d",&prior[i]);
 }

  int count=0;
 for(int i=0;i<n;i++){
if(at[i]==0){
        count++;
}
 }
 
 if(count==1){
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         if(at[i]==0){
             pid[0]=pid[i];
             at[0]=at[i];
             bt[0]=bt[i];
             prior[0]=prior[i];
             break;
         }
     }
 }
 ct[0]=at[0]+bt[0];
int temp;
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        if(prior[j]>prior[i]){
       temp=pid[i];
       pid[i]=pid[j];
       pid[j]=temp;
       
        temp=at[i];
       at[i]=at[j];
       at[j]=temp;
       
         temp=bt[i];
       bt[i]=bt[j];
       bt[j]=temp;
       
       
       temp=prior[i];
       prior[i]=prior[j];
       prior[j]=temp;
    }}
}


for(int i=1;i<n;i++){
    
        ct[i]=ct[i-1]+bt[i];
    
}

}

 if(count>1){
 
 
int temp;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(prior[j]>prior[i]){
       temp=pid[i];
       pid[i]=pid[j];
       pid[j]=temp;
       
        temp=at[i];
       at[i]=at[j];
       at[j]=temp;
       
         temp=bt[i];
       bt[i]=bt[j];
       bt[j]=temp;
       
       temp=prior[i];
       prior[i]=prior[j];
       prior[j]=temp;
    }}
}


for(int i=0;i<n;i++){
    
        ct[i]=ct[i-1]+bt[i];
    
}
}
 for(int i=0;i<n;i++){
     tat[i]=ct[i]-at[i];
     wt[i]=tat[i]-bt[i];
 }
 
 printf("\nPid\tat\tbt\tprior\tct\ttat\twt\n");
 
 for(int i=0;i<n;i++){
     printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],prior[i],ct[i],tat[i],wt[i]);
 }
 
 for(int i=0;i<n;i++){
     printf("| P%d",pid[i]);
     
 }
 printf("|\n");
 printf("0");
 for(int i=0;i<n;i++){
     printf("\t%d",ct[i]);
 }
    return 0;
}
