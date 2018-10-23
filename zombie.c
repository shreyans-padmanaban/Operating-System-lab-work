#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main(){
        pid_t child=fork();
        if(child>0){
                printf("PID %d is parent,terminating temporarily for 50",getppid());
		sleep(50);}
        else{exit(0);}
        return 0;}

