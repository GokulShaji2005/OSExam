/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<unistd.h>
#include <sys/types.h>
int main()
{
    pid_t pid;
    pid=fork();
    
    if(pid<0){
        printf("Failed");
    }
    else if(pid==0){
        printf("Child Process\n");
        printf("Child process: %d\n",getpid());
         printf("Parent process: %d\n",getppid());
    }
    else{
         printf("Parent Process\n");
       
         printf("Parent process: %d\n",getpid());
         printf("Child process: %d\n",pid);
         sleep(120);
    }
  

    return 0;
}
