#include <stdio.h>
#include <stdlib.h>

struct El{
    int valore;
    struct El* next;
};

void stampaLista(struct El* l){  //FUNZIONE DI STAMPA SU BASE ESERCIZI DI INFO MODIFICATA PER L EVENIENZA
    if(l!=NULL){
        printf("%d \n",l->valore);
        l=l->next;
        stampaLista(l);
    }
    return;
int main(){
    int n;
    struct El* lista;
    struct El* l;
    lista=NULL; //UTILE USARE NULL, ALL INIZIO NON DEVE PUNTARE NULLA
    do{
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d",&n);
        if (n>=0){
            if (lista==NULL){
                lista = (struct El*) malloc(sizeof(struct El));//ALLOCAZIONE DINAMICA PER IL PRIMO ELEMENTO
                l = lista;
            } else {
                l->next = (struct El*) malloc(sizeof(struct El));
                l =      l->next;
            }
            l->valore = n; //VALORE+RESET PUNTATORE
            l->next = NULL;
        }
    } while (n>=0);
    l=lista;
    printf("NUMBERS: \n");
    stampaLista(lista);
    //fflush(stdin);
    //getch(); NON FUNZIONANO
    //return 0;
}
}
}
