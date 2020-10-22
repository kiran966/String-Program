//program for capital count in string
#include<Stdio.h>
#include<Conio.h>
 int main()
 {

     char cSrc[20]="";
     int i=0,cap_cnt=0;

     printf("\n Enter a string =");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         if(cSrc[i]>='A'&&cSrc[i]<='Z')
         {
             cap_cnt++;
         }
         i++;
     }
     printf("\n capital count in given string is = %d.",cap_cnt);
     getch();
     return 0;
}
