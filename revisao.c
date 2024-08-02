#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    float numero1,numero2;
    int operacao = 1;
    printf("Insira o primeiro número : \n");
    scanf("%f",&numero1);
    printf("Insira o segundo número : \n");
    scanf("%f",&numero2);
    while (operacao != 5)
    {
        printf("\n[1] SOMA\n[2] SUBTRAÇÃO\n[3] MULTIPLICAÇÃO\n[4] DIVISÃO\n[5] SAIR\n");
        scanf("%d",&operacao);
        float soma = numero1 + numero2;
        float sub = numero1 - numero2;
        float multi = numero1 * numero2;
        float div = numero1 / numero2;
        switch (operacao)
        {
        case 1:
            printf("%.2f",soma);
            break;
        case 2:
            printf("%.2f",sub);
            break;
        case 3:
            printf("%.2f",multi);
            break;
        case 4:
            printf("%.2f",div);
            break;
        case 5:
            printf("FINALIZANDO . . .");
            break;
        default:
            printf("escolha uma das opções disponíveis!");
            break;
        }
    }
    
       
}
