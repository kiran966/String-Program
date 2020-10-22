//program for convert string to uppercase
#include<stdio.h>
#include<conio.h>
 int main()
 {
     char ch = '\0';

     printf("\n Enter a character = ");
     ch=getche();

     if(ch>='A' && ch<='Z')
     {
         ch = ch+32;
     }

     printf("\n Given character after processing:%c",ch);

     //printf("Thanks for watching");
     getch();
     return 0;
 }
