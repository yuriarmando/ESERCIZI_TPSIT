#include <stdio.h>
#include <stdlib.h>

struct El{
    int valore;
    struct El* next;
};

int calcolaLunghezzaIterativa(struct El* l){
    int num=0;
    while (l!=NULL){
            num++;
            l=l->next; }
    return num;
}

int calcoloLunghezzaRicorsiva(struct El* l){
    int num=0;
    if(l!=NULL){
        l=l->next;
        num=calcoloLunghezzaRicorsiva(l)+1;}
    return num;
}
int main(){
    int n;
    struct El* lista;
    struct El* l;
    int num;
    lista=NULL;//UTILE USARE NULL, ALL INIZIO NON DEVE PUNTARE NULLA
    do{
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d",&n);
        if (n>=0){
            if (lista==NULL){
                //IDENTICO A ES 2 LISTA
                lista = (struct El*) malloc(sizeof(struct El));
                l = l->next;
            }
                l = lista;
            } else {
                l->next = (struct El*) malloc(sizeof(struct El));
            l->valore = n;
            l->next = NULL;
        }
    } while (n>=0);

    l=lista;
    printf("NUMBERS \n");
    while (l!=NULL){
        printf("%d - %p \n",l->valore, l->next);
        l=l->next;
    }
    num= calcolaLunghezzaIterativa(lista);      //UNICO ELEMENTO DIVERSO DA PRIMA, SI CALCOLA LA LUNGHEZZA SI CALCOLA
    //CON LE FUNZIONI PREPARATE PRIMA
    printf("\n\nnumero di elementi:%d", num);
    num= calcoloLunghezzaRicorsiva(lista);
    printf("\n\nnumero di elementi:%d", num);
    printf("\n");
    //fflush(stdin);
    //getch(); NON FUNZIONANO
    //return 0;
 }

