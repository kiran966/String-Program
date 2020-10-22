//program for White space count in string
#include<Stdio.h>
#include<Conio.h>
 int main()
 {

     char cSrc[20]="";
     int i=0,w_cnt=0;

     printf("\n Enter a string =");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         if(cSrc[i]==' ')
         {
             w_cnt++;
         }
         i++;
     }
     printf("\n White space count in given string is = %d.",w_cnt);
     getch();
     return 0;
}
