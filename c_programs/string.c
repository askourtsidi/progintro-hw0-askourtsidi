#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *str){

    if (str==NULL) return 0;

    int l=0;
    while (str[l]!='\0') {
        l++;
    }
    return l;
}

int main(){
    char string[80];
    char *str;
    str=string;
    mystrlen(str);

    char *strA=malloc((80)*sizeof(char));
    char *strB=malloc((80)*sizeof(char));
    char *s1, *s2;
    s1=strA;
    s2=strB;

    char *strcpy(char *strA,const char *'This is a string.');
    char *strcpy(char *strB,const char *'This is another string.');

    printf("The first string is %s and its length is %d.\n", strA, mystrlen(s1));
    printf("The second string is %s and its length is %d.\n", strB, mystrlen(s2));

    int compare=strcmp(const char *s1, const char *s2);

    if (compare==0){
        printf("Οι συμβολοσειρές είναι ίσες\n");
    }
    else if (compare>1){
        printf("Η συμβολοσειρά 1 είναι λεξικογραφικά <<μεγαλύτερη>> της 2\n");
    }
    else {
        printf("Η συμβολοσειρά 1 είναι λεξικογραφικά <<μικρότερη>> της 2\n");
    }

    printf("%s\n", strcat(strA, strB));
    printf("%s\n", strcat(strB, strA));

    char *p;
    p=strtok(strB, " ,");
    while (p!=NULL){
        printf("%s\n",p);
        p=strtok(NULL, " ,");
    }
    
}