#include <stdio.h>
#include <stdlib.h>

struct person {
    char *fname;
    char *lname;
    char *mname;
};

struct person *person_init(char *firstname, char *lastname, char *middlename);{
    struct point father;
    father=malloc(sizeof(char));
    return father;
}

struct person *childof(struct person father, char *newname);{
    struct point child;
    child=malloc(sizeof(char));
}

int main(){
    struct person *father, *child;

    father=person_init("Panagiotis", "Skourtsidis", "Anna");
    child=childof((*father), "Anna");
}