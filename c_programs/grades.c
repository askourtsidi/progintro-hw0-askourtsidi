#include <stdio.h>
#include <stdlib.h>

typedef struct listnode *Listptr;

struct listnode {
    int data;
    Listptr next;
};

void insert_at_start(Listptr *ptr, int grade);

