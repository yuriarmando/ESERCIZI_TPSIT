#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DIMNOME 50
typedef struct emp{ //creo la struttura
    char* empname;
    int empid;
}Emp;

int main(){
    Emp** vett; //creo un vettore di puntatori alla struttura
    int dim;
    int i=0;
    char riga[DIMNOME];
    printf("quanti impiegati ci sono?");
    scanf("%d", &dim);
    Emp imp[dim];
    vett= (Emp**) malloc(dim*sizeof(Emp*)); // riservo uno spazio al vettore di puntatori
    for(i=0;i<dim;i++){
        printf("inserire il nome dell'impiegato (max %d caratteri)", DIMNOME);
        gets(riga);
        (imp+i)->empname= (char*) malloc(strlen(riga)*sizeof(char));    //la memoria aumenta in base al nome dell impiegato
        strcpy((imp+i)->empname,riga);
        (imp+i)->empid=1000+i;  //ID IMPIEGATO
        *(vett+i)=(imp+i);  //ASSEGNAZIONE PUNTATORE
    }
    for(i=0;i<dim;i++){
        printf("\n empid= %d \t empname= %s", (*(*(vett+i))).empid, (*(*(vett+i))).empname);//STAMPA DATIU
    }

    free(vett);//SVUOTA LA MEMORIA ACCUPATA DA VETT(COME JAVA)
}
