#include<stdio.h>
#include<conio.h>
void main(){
 int a[2][2],b[2][2],i,j;
 clrscr();

 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    scanf("%d",&a[i][j]);
   }
 }
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("\t%d",a[i][j]);
  }
  printf("\n");
 }
/* for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++);
  {
     b[i][j]=a[j][i];
  }
 } */
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("\t%d",b[i][j]);
  }
  printf("\n");
 }
 getch();
}