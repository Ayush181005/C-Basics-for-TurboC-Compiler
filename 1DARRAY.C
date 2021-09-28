#include<stdio.h>
#include<conio.h>
void main(){
int a[5]={5,3,4,2,12},i,max=a[3];
for(i=0;i<5;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
}
printf("\nmax is %d",max);
getch();
}
































