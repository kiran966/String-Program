//program for word count
#include<stdio.h>
#include<conio.h>
 int main()
 {
     char cSrc[20]="";
     int i=0,Wd_cnt=0;

     printf("\n Enter a string = ");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         if(cSrc[i] == ' ')
         {
             i++;
             continue;
         }
         else
         {
             while(cSrc[i]!=' ' && cSrc[i]!='\0')
             {
                 i++;
             }
             Wd_cnt++;
         }
     }
     printf("\n Word count in given string is = %d.",Wd_cnt);

     getch();
     return 0;
 }
