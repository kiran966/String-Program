//program for string length
#include<stdio.h>
#include<conio.h>
 int main()
 {
     char cSrc[20]="";
     int len=0;

     printf("\n Enter your city name = ");
     gets(cSrc);

     while(cSrc[len]!='\0')
     {
         len++;
     }
     printf("\n Length of given String(city name) is = %d.",len);
     getch();
     return 0;
 }
