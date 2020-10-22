//program for Digit count
#include<Stdio.h>
#include<Conio.h>

 int main()
 {
     char cSrc[20]="";
     int i=0,Dig_cnt=0;

     printf("\n Enter a string=");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         if(cSrc[i]>='0' && cSrc[i]<='9')
         {
             Dig_cnt++;
         }
         i++;
     }
     printf("\n Enter Digit count in string is = %d.",Dig_cnt);
     getch();
     return 0;
 }
