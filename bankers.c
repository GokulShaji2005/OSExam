#include <stdio.h>

int main() {
    int n,r,alloc[20][20],max[20][20],need[20][20],avail[20];

    printf("Enter no of processes:");
    scanf("%d",&n);

    printf("Enter no of resources:");
    scanf("%d",&r);

    printf("Enter allocation matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&alloc[i][j]);
        }
    }

    printf("Enter max matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&max[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }

    printf("Enter available resources:");
    for(int i=0;i<r;i++){
        scanf("%d",&avail[i]);
    }

    printf("\nNeed Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            printf("%d ",need[i][j]);
        }
        printf("\n");
    }

    int finish[20]={0};
    int safe[20];
    int count=0;

    while(count<n){

        int found=0;

        for(int i=0;i<n;i++){

            if(finish[i]==0){

                int flag=0;

                for(int j=0;j<r;j++){
                    if(need[i][j]>avail[j]){
                        flag=1;
                        break;
                    }
                }

                if(flag==0){

                    for(int k=0;k<r;k++){
                        avail[k]+=alloc[i][k];
                    }

                    safe[count]=i;
                    count++;
                    finish[i]=1;
                    found=1;
                }
            }
        }

        if(found==0){
            printf("\nSystem is NOT in safe state");
            return 0;
        }
    }

    printf("\nSafe sequence:\n");
    for(int i=0;i<n;i++){
        printf("P%d ",safe[i]);
    }

    return 0;
}
