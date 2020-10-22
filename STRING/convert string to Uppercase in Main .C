//program for convert string in uppercase
#include<stdio.h>
#include<conio.h>
 int main()
 {
     char cSrc[20]="";
     int i=0;

     printf("Enter string = ");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         if(cSrc[i]>='A' && cSrc[i]<='Z')
         {
             cSrc[i]=cSrc[i]+32;
         }
         i++;
     }
     printf("\n Given String After converting to UPPERCASE = %s.",cSrc);

     getch();
     return 0;
 }
