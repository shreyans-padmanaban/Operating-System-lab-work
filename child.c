//Creating Parent-Child process in C
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void main(){
	int a,pid;
	printf("Do you want to create a process? Press 1 for Yes");	
	scanf("%d",&a);
	if (a==1){
		pid=fork();}
	else{printf("Fair enough");}

	printf("This should print twice");

	if (pid<0){printf(" Child process not created ");}

	else if (pid>0){printf(" This is the parent process ");}

	else{printf(" This is the child process ");}
//Fork calls the a new process (Child process),which runs concurrently with process parent.After parent process is created,both processes will exectute the next instruction following fork() system call.
//Child process uses same Program counter,CPU registers and same directories.
//fork() has no arguments and returns a PID value as an integer.
//PID value can be: negative (No child process created),Zero (returns to newly created child process) and postive (to parent).
//
//In the first program,hello world will be printed twice because of child and parent executing same instruction.
}
