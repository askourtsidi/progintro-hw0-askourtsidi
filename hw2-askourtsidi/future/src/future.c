#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ορισμός του default window
#define DEFAULT_WINDOW 50

int main(int argc, char *argv[]){

    //έλεγχος αν ο αριθμός των ορισμάτων είναι μη αποδεκτός και εμφάνιση ανάλογου μηνύματος
    if (argc<2 || argc>4){
        fprintf(stderr, "Usage: ./future <filename> [--window N (default: 50)]\n");
        return 1;
    }
    
    //δήλωση του παραθύρου με τη μέγιστη τιμή
    int window=DEFAULT_WINDOW;
    
    //έλεγχος αν τα ορίσματα είναι 4
    if (argc==4){

        //άνοιγμα του αρχείου
        FILE *file=fopen(argv[1], "r");
        //έλεγχος αν το αρχείο ανοίχθηκε
        if (!file){
            return 1;
        }

        //έλεγχος αν δόθηκε παραθυρο και στην περίπτωση που δόθηκε αλλάζει η τιμή της μεταβλητής window
        if (strcmp(argv[2], "--window")==0){
            window=atoi(argv[3]);
            //έλεγχος αν το παράθυρο είναι μικρότερο από 1
            if (window<1){
                fprintf(stderr, "Window too small!\n");
                return 1;
            }
        }

        //χρήση malloc για δέσμευση μνήμης για το μέγεθος του παραθύρου
        double *window_size=malloc(window*sizeof(int));
        //έλεγχος αποτελέσματος malloc και σε περίπτωση αποτυχίας εμφάνιση ανάλογου μηνύματος 
        if (!window_size){
            fprintf(stderr, "Failed to allocate window memory");
            fclose(file);
            return 1;
        }

        //μέτρημα των αριθμών του αρχείου
        double number;
        int totalnumber=0;
        double sum=0.0;
        while (fscanf(file, "%lf", &number)==1){
            totalnumber++;
            if (totalnumber>=window){
                sum=sum+number;
            }
        }
        double average=sum/window;
        printf("%.2f\n", average);
        if (totalnumber<window){
            fprintf(stderr, "Window too large!\n");
            free(window_size);
            fclose(file);
            return 1;
        }

        free(window_size);
        fclose(file);
        return 0;
        }
       }
