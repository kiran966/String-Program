//program for revers string
#include<stdio.h>
#include<conio.h>
 int main()
 {
     char cSrc[20]="";
     char cDest[20]="";
     int i=0,j=0;

     printf("\n Enter a revers string = ");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         i++;
     }
     while(i>=0)
     {
         cDest[j]=cSrc[i];

         i--;
         j++;
     }
     cDest[j]='\0';

     printf("\n New String after revers = %s.",cDest+1);

     getch();
     return 0;


 }
