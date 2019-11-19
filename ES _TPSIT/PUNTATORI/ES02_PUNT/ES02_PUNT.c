#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *vett;
    int max = 0;
    printf("inserire la dimensione di un vettore: " );
    scanf("%d" , &n);
    printf("\n");
    vett = malloc(sizeof(int)*n); // xxx = malloc  xxx deve essere un puntatore
    for(int k = 0; k < n; k++){
        printf("inserire un numero: ");
        scanf("%d" , vett+k);
        if(*vett+k > max){
            max = *vett+k;
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d \n" , *vett+i );
    }
    printf("numero massimo: %d" , max);
    return 0;
}
