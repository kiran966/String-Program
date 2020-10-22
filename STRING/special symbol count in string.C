//program for Digit count
#include<Stdio.h>
#include<Conio.h>

 int main()
 {
     char cSrc[20]="";
     int i=0,spe_cnt=0;

     printf("\n Enter a string = ");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         if(!((cSrc[i]>='A' && cSrc[i]<='Z') || (cSrc[i]>='a' && cSrc[i]<='z') || (cSrc[i]>='0' && cSrc[i]<='9')))
         {
             spe_cnt++;
         }
         i++;
     }
     printf("\n Enter special count in string is = %d.",spe_cnt);
     getch();
     return 0;
 }
