#include<stdio.h>
#include<stdlib.h>

main(){
    int n;
    int *vett; //VETT PASSATO X INDIRIZZO
    printf("inserire la dimensione di un vettore: " );
    scanf("%d" , &n);
    printf("\n");
    vett = malloc(sizeof(int)*n);
    for(int k = 0; k < n; k++){
        printf("inserire un numero: ");
        scanf("%d" , vett+k);
    }
    for(int i = 0; i<n; i++){
        printf("%d \n" , *vett+i );
    }

}
