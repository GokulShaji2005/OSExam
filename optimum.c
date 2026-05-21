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

    }
for(int i=0;i<r;i++){
    int flag=0;
    for(int j=0;j<f;j++){
        if(frame[j]==ref[i]){
            flag=1;
            break;
        }
    }
    
    int pos=-1;
    if(flag==0){
        int farth=-1;
        for(int j=0;j<f;j++){
            int found=0;
            int kvalue;
            
            if(frame[j]==-1){
                pos=j;
                break;
            }
            for(int k=i+1;k<r;k++){
                if(frame[j]==ref[k]){
                    kvalue=k;
                    found=1;    
                    if(kvalue>farth){
                        farth=kvalue;
                        pos=j;
                    }
                    break;
                }
                    
            }
            
            if(found==0){
                pos=j;
                break;
            }
        }
        
        frame[pos]=ref[i];
        fault++;
        
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
