#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//συνάρτηση εύρεσης του μέγιστου κοινού διαιρέτη των μεταβλητών p και q
long long int gcd(long long int a,long long int b){
    if (a%b==0){
        return b;
    }
    else {
        return gcd(b,a%b);
    }
}

//συνάρτηση υπολογισμού του phi(N)
int phi(long long int p, long long  int q){
    return (p-1)*(q-1);
}

//συνάρτηση ελέγχου αν οι μεταβλητές e και phi(N) είναι πρώτοι αριθμοί
long long int prime(long long int a){
    if (a<1){
        return 1;
    }
    else {
        for (int i=2; i<=sqrt(a); i++){
            if (a%i==0){
                return 1;
            }
        }
    }
    return 0;
}

//συνάρτηση encrypt(m)
long long unsigned int encrypt(long long int m, long long int e, long long int N){
    int x=(int)pow(m,e);
    return (x%N);
}

//συνάρτηση decrypt(c)
long long unsigned int decrypt(long long int c, long long int d, long long int N){
    int y=(int)pow(c,d);
    return (y%N);
}


int main(int argc, char *argv[]){

    //έλεγχος αν τα ορίσματα είναι 6
    if (argc!=6){
        printf("Usage: ./rsa enc|dec <exp_exp> <priv_exp> <prime1> <prime2>\n");
        return 1;
    }
    else {

        //μετατροπή των ορίσματων από string σε long long int με την συνάρτηση atol
        long long int e=atol(argv[2]);
        long long int d=atol(argv[3]);
        long long int p=atol(argv[4]);
        long long int q=atol(argv[5]);
        long long int N=p*q;

        //έλεγχος αν το πρώτο όρισμα είναι 'enc' ή 'dec'
        if (strcmp(argv[1], "enc")!=0 && strcmp(argv[1], "dec") !=0){
            printf("First argument must be 'enc' or 'dec'\n");
            return 1;
        }

        //έλεγχος αν κάποιος αριθμός είναι αρνητικός
        if (e<0 || d<0 || p<0 || q<0){
            printf("Negative numbers are not allowed\n");
            return 1;
        }

        //έλεγχος αν οι μεταβλητές p και q είναι πρώτοι
        if (prime(p)!=0 || prime(q)!=0){
            printf("p and q must be prime\n");
            return 1;
        }
        
        //έλεγχος αν η μεταβλητή e και το φ(N) είναι πρώτοι μεταξύ τους
            if (gcd(e,phi(p,q))!=1){
                printf("e is not coprime with phi(N)\n");
                return 1;
            }

        //έλεγχος αν οι μεταβλητές e και d είναι αντίστροφοι
        if ((e*d)%phi(p,q)!=1){
            printf("e*d mod phi(N) is not 1\n");
            return 1;
        }

        //κλήση των συναρτήσεων encrypt(m) ή decrypt(c) ανάλογα με το πρώτο όρισμα
        if (strcmp(argv[1], "enc")==0){
           
            //διάβασμα του αποκρυπτογραφημένου μηνύματος m
            long long int m;
            if (scanf("%lld", &m)!=1){
                return 1;
            }
            else {
                //έλεγχος αν το μήνυμα m είναι μεγαλύτερο του N
                if (m>N){
                    printf("Message is larger than N\n");
                    return 1;
                }

               //έλεγχος αν το μήνυμα m είναι αρνητικό
               if (m<0){
                   printf("Negative numbers are not allowed\n");
                   return 1;
               }
                
                printf("%llu\n",encrypt(m,e,N));
            }
        }
        else {

            //διάβασμα του κρυπτογραφημένου μηνύματος c
            long long int c;
            if (scanf("%lld", &c)!=1){
                return 1;
            }
            else {
                printf("%llu\n",decrypt(c,d,N));
            }
        }
    }

    return 0;
}