//program for character array string
#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
 {
     char cSrc[20]= {'P','u','n','e'}; //Character array also called
                                        //Srting

     char Name[20]="Karad";

     printf("\n %s",Name);
     printf("\n %s",cSrc);

     strcpy(Name,"SGM College");
     strcpy(cSrc,"YC College");

     printf("\n %s",Name);
     printf("n %s",cSrc);

     printf("\n Thanks for watching");
     getch();
     return 0;
 }
