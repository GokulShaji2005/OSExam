// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int r,f,frame[25],ref[25],time[25],fault=0;
    
    printf("Enter the r:");
    scanf("%d",&r);
    printf("Enter the number of ref:");
   
    for(int i=0;i<r;i++){
        scanf("%d",&ref[i]);
    }
    
    printf("Enter the f:");
    scanf("%d",&f);
    
    for(int i=0;i<f;i++){
        frame[i]=-1;
        time[i]=0;
    }
  int counter=0;
  for(int i=0;i<r;i++){
      
      int flag=0;
      for(int j=0;j<f;j++){
          if(frame[j]==ref[i]){
              counter++;
              time[j]=counter;
              flag=1;
              break;
          }
      }

    if(flag==0){
              int pos=0;
              for(int j=1;j<f;j++){
                  if(time[j]<time[pos]){
                      pos=j;
                   
                  }
              }
                 frame[pos]=ref[i];
                      fault++;
                      counter++;
                      time[pos]=counter;
    }
    
        printf("Frame after inserting %d: ",ref[i]);
        for(int k=0;k<f;k++){
            if(frame[k]!=-1){
                printf("%d ",frame[k]);
            }
            else{
                   printf("- ");
            }
         
    }
       printf("\n");
    }
    printf("\n");
    printf("No of page faults: %d",fault);
     printf("No of page hits: %d",r-fault);
    

    return 0;
}
