#include<stdio.h>
#include<conio.h>
void main(){
 int a,b,c;
 clrscr();
 printf("\nEnter three different numbers :");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c){
  printf("\n%d is greatest",a);
 }
 else if(b>a && b>c){
  printf("\n%d is grestest",b);
 }
 else{
  printf("\n%d is greatest",c);
 }

 if(a<b && a<c){
  printf("\n%d is smallest",a);
 }
 else if(b<a && b<c){
  printf("\n%d is smallest",b);
 }
 else{
  printf("\n%d is smallest",c);
 }
 getch();
}