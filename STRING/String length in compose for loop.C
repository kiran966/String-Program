//program for string length
#include<stdio.h>
#include<conio.h>
 int main()
 {
     char cSrc[20]= "";
     int len=0;

     printf("\n Enter city name=");
     gets(cSrc);

     for(len=0;cSrc[len]!='\0';len++)

    printf("\n Length of given string(city name)is = %d.",len);

    getch();
    return 0;
 }
