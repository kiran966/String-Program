//Copy String
#include<stdio.h>
#include<conio.h>
 int main()
 {

     char cSrc[20]= "";
     char cDest[20]= "";
     int i=0;

     printf("\n Enter your city Name =");
     gets(cSrc);

     while(cSrc[i]!= '\0')
     {
        cDest[i]=cSrc[i];
         i++;
     }
     cDest[i]='\0';

     printf("\n New String After copying = %s.",cDest);

     getch();
     return 0;
 }
