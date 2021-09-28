#include<stdio.h>
#include<conio.h>
void main(){
 int marks;
 clrscr();
 printf("Enter your overall percent marks :");
 scanf("%d",&marks);
 if(marks>=95 && marks<=100){
  printf("\nYour grade is A+");
 }
 else if(marks>=85 && marks<95){
  printf("\nYour grade is A");
 }
 else if(marks>=75 && marks<85){
  printf("\nYour grade is B+");
 }
 else if(marks>=65 && marks<75){
  printf("\nYour grade is B");
 }
 else if(marks>=55 && marks<65){
  printf("\nYour grade is C+");
 }
 else if(marks>=45 && marks<55){
  printf("\nYour grade is C");
 }
 else if(marks<45){
  printf("\nYou are failed");
 }
 getch();
}