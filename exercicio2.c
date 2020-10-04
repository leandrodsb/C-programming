#include <stdio.h>
#include <stdlib.h>

int main (){
    int idade,op,casanum, x=1;
    unsigned long cep, cepok;
    do{
        printf("Escolha opção.\n");
        printf("1-Inserir idade.\n");
        printf("2-Inserir cep.\n");
        printf("3-Inserir numero da casa.\n");
        scanf("%d", &op);
        switch (op){
            case 1:
                printf("Sua Idade:\n");
                scanf("%d", &idade);
                if(idade<13){
                    printf("Crianca\n");
                }else if(idade<=17){
                    printf("Adolescente\n");
                }else if(idade>18 && idade<60){
                    printf("Adulto\n");
                }else{
                    printf("Idoso\n");
                }
                break;
            case 2:
                printf("Seu CEP\n");
                scanf("%d", &cep);
                cepok=cep;
                break;
            case 3:
                printf("Numero da sua casa\n");
                scanf("%d", &casanum);
                break;
        }
        printf("\nDeseja repetir a operacao?\n");
        printf("\n(1 = Sim , 0 = Nao)\n");
        scanf("%d",&x);
    }while(x==1);
    printf ("\n\n Dados registrados: \n\n");
    printf ("\n Idade: %d\n", idade);
    printf ("\n CEP: %d\n", cepok);
    printf ("\n Numero da casa: %d\n", casanum);
}
