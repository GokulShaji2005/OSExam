/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    pid_t pid;
    pid=fork();
    
    if(pid==0){
       printf("PCCSSl");
    }
    
    else if(pid>0){
       wait(NULL);
       printf("Operating");
    }
    
    else{
        printf("Failed");
    }

  
    return 0;
}
