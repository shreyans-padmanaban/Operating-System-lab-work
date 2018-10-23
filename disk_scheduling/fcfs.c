#include<stdio.h>

int main(){
	int i,j,sum=0,n;
	int ar[20],tm[20];
	int disk; //initialising disk variable
	printf("Enter number of location \t");
	scanf("%d",&n);
	printf("Enter position of head \t");
	scanf("%d",&disk);
	printf("Enter elements of disk queue \n");
	
	for(i=0;i<n;i++){
		scanf("%d",ar[i]);//takes input from user about elements in disk queue,that is to be served disk memory
		tm[i]=disk-ar[i];//dist bw disk head and task
		if(tm[i]<0){tm[i]=ar[i]-disk;}
		disk=ar[i];//move the header to the task
		sum=sum+tm[i];/*total movement*/}
	printf("No. of total cylinder moved is %d",sum);
	return 0;
}



