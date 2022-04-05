#include <stdio.h>
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int  i=0;
    int tam=1;
    int nulo=0;
    
    char vetp[50];
     char letra[5];
     char test[5] = "#2=1"; 
     char test2[5] = "#2=2";
     char test3[5] = "#2=3";
     
     char alt[5] = "#3=1";
     char alt2[5] = "#3=2";
     char alt3[5] = "#3=3";
     
     char four[5] = "#4=1";
     char four2[5] = "#4=2";
     char four3[5] = "#4=3";
     
     char five[5] = "#5=1";
     char five2[5] = "#5=2";
     char five3[5] = "#5=3";
     
     char six[5] = "#6=1";
     char six2[5] = "#6=2";
     char six3[5] = "#6=3";
     
     char seven[5] = "#7=1";
     char seven2[5] = "#7=2";
     char seven3[5] = "#7=3";
     char seven4[5] = "#7=4";
     
     char eight[5] = "#8=1";
     char eight2[5] = "#8=2";
     char eight3[5] = "#8=3";
     
     char nine[5] = "#9=1";
     char nine2[5] = "#9=2";
     char nine3[5] = "#9=3";
     char nine4[5] = "#9=4";
     
     char nine5[5] = "#9=5";
     
    printf("Digite o tamanho da palavra escolhida:");
    scanf("%d", &tam);
     
    for(int i=0; i<tam;i++){
   printf("Digite o caractere sharp # desejado:");
    scanf("%s", letra);
    
    
    if (strcmp(letra,test) == 0){
    vetp[i]='a';
    } 
    if (strcmp(letra,test2) == 0){
    vetp[i]='b';
    } 
    if (strcmp(letra,test3) == 0){
    vetp[i]='c';
    } 
    
     if (strcmp(letra,alt) == 0){
    vetp[i]='d';
    } 
    if (strcmp(letra,alt2) == 0){
    vetp[i]='e';
    } 
    if (strcmp(letra,alt3) == 0){
    vetp[i]='f';
    } 
    
     if (strcmp(letra,four) == 0){
    vetp[i]='g';
    } 
    if (strcmp(letra,four2) == 0){
    vetp[i]='h';
    } 
    if (strcmp(letra,four3) == 0){
    vetp[i]='i';
    } 
    
     if (strcmp(letra,five) == 0){
    vetp[i]='j';
    } 
    if (strcmp(letra,five2) == 0){
    vetp[i]='k';
    } 
    if (strcmp(letra,five3) == 0){
    vetp[i]='l';
    } 
    
    if (strcmp(letra,six) == 0){
    vetp[i]='m';
    } 
    if (strcmp(letra,six2) == 0){
    vetp[i]='n';
    } 
    if (strcmp(letra,six3) == 0){
    vetp[i]='o';
    } 
    
    if (strcmp(letra,seven) == 0){
    vetp[i]='p';
    } 
    if (strcmp(letra,seven2) == 0){
    vetp[i]='q';
    } 
    if (strcmp(letra,seven3) == 0){
    vetp[i]='r';
    } 
    if (strcmp(letra,seven4) == 0){
    vetp[i]='s';
    } 
    
    if (strcmp(letra,eight) == 0){
    vetp[i]='t';
    } 
    if (strcmp(letra,eight2) == 0){
    vetp[i]='u';
    } 
    if (strcmp(letra,eight3) == 0){
    vetp[i]='v';
    } 
    
    if (strcmp(letra,nine) == 0){
    vetp[i]='w';
    } 
    if (strcmp(letra,nine2) == 0){
    vetp[i]='x';
    } 
    if (strcmp(letra,nine3) == 0){
    vetp[i]='y';
    } 
    if (strcmp(letra,nine4) == 0){
    vetp[i]='z';
    } 
    
    }
    printf("Sua palavra: \n");
    while (i < tam){
    printf("%c", vetp[i]);
    i++;  
    }
    printf("\n");
      system("pause");

    return 0;
}

    
