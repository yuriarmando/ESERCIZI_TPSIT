#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define DIM 30

int main(){
    char str[DIM];  //creo la stringa
    printf("inserire un stringa (max %d caratteri)", DIM);  //chiedo di inserire la stringa
    gets(str);
    bool fine=true; //creo la variabile dove mi segno se la stringa
    int cont=0; //creo la variabile contatore e la inizializzo
    int i;  //creo il contatore
    for(i=0;fine;i++){  //ripeto finch� non finisce la stringa
        if(*(str+i)=='\0'){ //controllo se il carattere � quello di fine stringa
            fine=false; //se il carattere � quello della fine della stringa finisco il ciclo
        }
        cont++; //incremento il contatore
    }
    printf("la stringa e lunga %d caratteri", cont);    //stampo la lunghezza della stringa
}
