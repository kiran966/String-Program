//program for pallindrom
#include<stdio.h>
#include<conio.h>
 int main()
 {
     char cSrc[20]="";
     int i=0,j=0;

     printf("\n Enter Pallindrome = ");
     gets(cSrc);

     while(cSrc[j]!='\0')
     {
         j++;
     }
     j--;
     while(j>i)
     {
         if(cSrc[j]!=cSrc[i])
         {
             break;
         }
         j--;
         i++;
     }
     if(i<j)
     {
         printf("\n Given String is Not pallindrome");
     }
     else
     {
         printf("\n Given string is pallindrome");
     }

     getch();
     return 0;

 }
