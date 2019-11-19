#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DIM 50
typedef struct contact{ //CREA LA STRUTTURA
    char name[20];
    int number;
    struct contact* next;
}Contact;

int main(){
    Contact giovanni;   //CREAZIONE CONTATTI DA QUA IN POI SU BASE STRUTTURA
    strcpy(giovanni.name,"giovanni");
    giovanni.number=8;
    giovanni.next=NULL;

    Contact mamma;
    strcpy(mamma.name,"mamma");
    mamma.number=7;
    mamma.next= &giovanni;
    Contact io;
    strcpy(io.name,"io");
    io.number=9;
    io.next= &giovanni;
    mamma.next= &io;    //TRAMOTE NEXT POSSO SPOSTARMI E INSERIRE I CONTATTI AL POSTO SCELTO
    giovanni.next= &mamma;
    Contact* support= &mamma;
    printf("name: %s \t number: %d\n", support->name, support->number); //DA QUA IN POI STAMPA
    do{
        support= support->next;
        printf("name: %s \t number: %d\n", support->name, support->number);
    }while(support->next != NULL);
}
//OMISSIONE DELLA PROCEDURA DI FINE PROGRAMMA IN OGNI ESERCIZIO VOLANTARIA CAUSA PROBLEMI CON CODEBLOCKS
