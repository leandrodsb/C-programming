#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    int i,op, x=1;
    float notas[10], soma=0, media, maior, menor;
    printf("Insira suas notas \n\n");
    for(i=0;i<=3;i++){
        printf("Nota %d:\n",i+1);
        scanf("%f", &notas[i]);
    }
    while(x==1){
        printf("Selecione a operacao desejada \n\n");
        printf("1 - Media \n");
        printf("2 - Maior nota \n");
        printf("3 - Menor nota\n");
        scanf(" %d", &op);
            switch (op){
                case (1):
                    for(i=0;i<=3;i++){
                        soma = notas[i]+soma;
                    }
                    media = soma/4;
                    printf("Media = %.2f \n", media);
                    break;
                case (2):
                    for(i=0;i<3;i++){
                        if (notas[i+1]>=notas[i]){
                            maior = notas[i+1];
                        }else{
                            maior = notas[i];
                        }
                    }
                    printf("Maior nota = %.2f \n", maior);
                    break;
                case (3):
                    for(i=0;i<3;i++){
                        if (notas[i+1]<=notas[i]){
                            menor = notas[i+1];
                        }else{
                            menor = notas[i];
                        }
                    }
                    printf("Menor nota = %.2f \n", menor);
                default:
                    printf("Operacao invalida \n");
                    break;
                }
        printf("Deseja repetir a operação? Sim = 1, Nao = 0 \n\n");
        scanf("%d", &x);
    }



    system ("pause");
    return 0;
}
