#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * Read_string(int buff);
char * merge(char * s1, char * s2);
int main(void){
 
   char * nome;
   char * cognome;
   char * NomeCognome;
   printf("Inserire il proprio nome: ");
   nome = Read_string(25);
   printf("Inserire il proprio cognome: ");
   cognome = Read_string(25); 
   NomeCognome = merge(nome,nome);
   printf("%s",NomeCognome);
}




char *Read_string(int buff) {
    char *s;
    char tmp[buff+1];
    int lun;
    int ch, i = 0;

    while((ch = getchar()) != '\n') {
        if(i < buff) {
            tmp[i++] = ch;
        }
    }

    tmp[i] = '\0';

    lun = strlen(tmp);

    s = malloc(lun + 1);

    if(!s) {
        return NULL;
    }

    strcpy(s, tmp);

    return s;
}

char * merge(char * s1, char * s2){
    
    int L_s1 =  strlen(s1);
    int L_s2 =  strlen(s2);
    char * merged_string = malloc(L_s1+L_s2);
    merged_string = strcat(s1,s2);
    return merged_string;
}