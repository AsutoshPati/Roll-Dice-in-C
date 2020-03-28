#include<stdio.h>

main(){
    int n;
    printf("welcome to dice game\n");
    do{
       printf("\npress any key to continue\n");
       getch();
       n=(rand()+rand())%6;
       switch(n)
       {
           case 0:printf("|-----------|\n");
                  printf("|           |\n");
                  printf("|    (@)    |\n");
                  printf("|           |\n");
                  printf("|-----------|\n");
                  break;
           case 1:printf("|-----------|\n");
                  printf("| (@)       |\n");
                  printf("|           |\n");
                  printf("|       (@) |\n");
                  printf("|-----------|\n");
                  break;
           case 2:printf("|-----------|\n");
                  printf("| (@)       |\n");
                  printf("|    (@)    |\n");
                  printf("|        (@)|\n");
                  printf("|-----------|\n");
                  break;
           case 3:printf("|-----------|\n");
                  printf("| (@)   (@) |\n");
                  printf("|           |\n");
                  printf("| (@)   (@) |\n");
                  printf("|-----------|\n");
                  break;
           case 4:printf("|-----------|\n");
                  printf("| (@)   (@) |\n");
                  printf("|    (@)    |\n");
                  printf("| (@)   (@) |\n");
                  printf("|-----------|\n");
                  break;
           case 5:printf("|-----------|\n");
                  printf("| (@)   (@) |\n");
                  printf("| (@)   (@) |\n");
                  printf("| (@)   (@) |\n");
                  printf("|-----------|\n");
                  break;
       }
       printf("\npress ESC to exit\n\n");
    }
    while(getch()!=27);
}        
