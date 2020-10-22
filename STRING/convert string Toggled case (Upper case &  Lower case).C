//program for convert string in Toggled case
#include<stdio.h>
#include<conio.h>
 int main()
 {
     char cSrc[20]="";
     int i=0;

     printf("\n Enter string = ");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         if(cSrc[i]>='A' && cSrc[i]<='Z')
         {
             cSrc[i]=cSrc[i]+32;
         }
         else if(cSrc[i]>='a' && cSrc[i]<='a')
         {
             cSrc[i]=cSrc[i]-32;
         }
         i++;
     }

     printf("\n Given string after converting to toggeld case = %s.",cSrc);

     getch();
     return 0;
 }
