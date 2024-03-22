#include<stdio.h>
#include<unistd.h>
int main(void)
{
printf("Before fork\n");
fork();
printf("after fork\n"); 
}
