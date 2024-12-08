#include <stdio.h>
#include <stdlib.h>

//υλοποιούμε τον αλγόριθμο του Ευκλείδη 
long long int gcd(long long int a,long long int b){
    if (a%b==0){
        return b;
    }
    else {
        return gcd(b,a%b);
    }
}

//εισάγεται ο αριθμός παραμέτρων και δημιουργείται πίνακας με τις παραμέτρους αυτές
int main(int argc, char *argv[]){  
   
    //ελέγχουμε αν δίνονται δύο παράμετροι και στην περίπτωση αυτή ορίζουμε τις δύο μεταβλητές με τις τιμές που δόθηκαν  
    if (argc==3){
        //μετατρέπουμε τα δύο ορίσματα από string σε long long int με την συνάρτηση atol
        long long int num1=atol(argv[1]);
        long long int num2=atol(argv[2]);
       
        //ελέγχουμε αν κάποιος από τους δύο αριθμούς είναι 0 και αν ισχύει επιστρέφουμε την τιμή 1 
        if (num1==0 || num2==0) return 1;

        //καλούμε την συνάρτηση για τον υπολογισμό του ΜΚΔ και το αποτέλεσμα το αναθέτοθμε στην μεταβλητη d 
        long long int d=gcd(num1,num2);
        if (d>0){
            printf("gcd(%lld,%lld)=%lld\n",num1,num2,d);
        }
        else {
            printf("gcd(%lld,%lld)=%lld\n",num1,num2,(-d));
        }

    }

    //ελέγχουμε αν δεν δίνονται δύο παράμετροι και στην περίπτωση αυτή εμφανίζουμε κατάλληλο μήνυμα και επιστρέφουμε την τιμή 1
    if (argc!=3){
        printf("Usage: ./gcd <num1> <num2>\n");
        return 1;
    }

  return 0;
} 