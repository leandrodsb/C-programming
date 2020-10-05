#include <stdio.h>
#define TAM 10

int fila [TAM] = {0,0,0,0,0,0,0,0,0,0};
int queue = 0;
int dequeue = 0;
int retirado = 0;
int valor = 0;
int op = 0;

void inserir(){
    if((queue-dequeue)<TAM){
        printf("Insira o numero:\n");
        scanf("%d", &valor);
        fila[queue-dequeue] = valor;
        queue += 1;
    } else{
        printf("\nNao e possivel realizar operacao.\n");
    }
}

void retirar(){
    if(queue>dequeue){
        retirado = fila[0];
        dequeue += 1;
        for (int i=0; i<TAM-1; i++){
            fila[i] = fila[i+1];
        }
        fila[TAM-1] = 0;
    } else{
        printf("\nNao e possivel realizar operacao.\n");
    }
}

void mostrar(){
    printf("\n-----------------------------------------\n");
    for (int i = 0; i<TAM; i++){
        printf("| %d ", fila[i]);
    }
    printf("| \n\nValor retirado: %d\n\nQueue: %d\nDequeue: %d\n", retirado,queue,dequeue);
    printf("\n-----------------------------------------\n");
}

void clear(){
    for (int i = 0; i<TAM; i++){
        fila[i] = 0;
    }
    queue = 0;
    dequeue = 0;
    retirado = 0;
}


int main(){
    do{
        printf("\nSelecione sua opcao:\n\n1: Inserir\n2: Retirar\n3: Mostrar\n4:Limpar\n-1:Sair\n\n");
        scanf ("%d", &op);
        switch (op){
        case 1:
            inserir();
            break;
        case 2:
            retirar();
            break;
        case 3:
            mostrar();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("Valor invalido.");
            break;
        }
    } while (op != -1);

    return 0;
}
