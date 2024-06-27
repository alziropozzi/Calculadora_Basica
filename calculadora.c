#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "portuguese");//configura o programa conforme a lingua portuguesa. Adição de acentuação e ","
    int opcao;
    float op1, op2, soma, sub, produto, divisao; //declaração das variaveis como real, podendo assim fazer operações com numeros decimais
    do{
        printf("\nSelecione a operação: ");
        printf("\n 0-Sair");
        printf("\n 1-Adição");
        printf("\n 2-Subtração");
        printf("\n 3-Multiplição");
        printf("\n 4-Divisão");
        printf("\n 5-Potenciação\n");
        scanf("%d", &opcao); //leitura da opção do tipo de operação desejada pelo usuário
        switch(opcao){ //conforme a opção desejada, o programa executará os comandos do caso escolhido, para assim resolver a operação matemática
        case 1:
            printf("\n Primeiro operador: ");
            scanf("\n%f", &op1);
            printf("\n Segundo operador: ");
            scanf("\n%f", &op2);
            soma=op1+op2;
            printf(" =%.2f\n", soma);
            break;
        case 2:
            printf("\n Primeiro operador: ");
            scanf("\n%f", &op1);
            printf("\n Segundo operador: ");
            scanf("\n%f", &op2);
            sub=op1-op2;
            printf(" =%.2f\n", sub);
            break;
        case 3:
            printf("\n Primeiro operador: ");
            scanf("\n%f", &op1);
            printf("\n Segundo operador: ");
            scanf("\n%f", &op2);
            produto=op1*op2;
            printf(" =%.2f\n", produto);
            break;
        case 4:
            printf("\n Dividendo: ");
            scanf("\n%f", &op1);
            printf("\n Divisor: ");
            scanf("\n%f", &op2);
            divisao=op1/op2;
            printf(" =%.2f\n", divisao);
            break;
        case 5:
            printf("\n Base numérica: ");
            scanf("\n%f", &op1);
            printf("\n Expoente: ");
            scanf("\n%f", &op2);
            int i=1, potenciacao=1;
            while(i<=op2){
                potenciacao=potenciacao*op1;
                i++;
            }
            printf(" =%d\n", potenciacao);
        }
    }while(opcao!=0); //enquanto não for informado 0 o programa continuará em loop, exibindo o menu de operações, e logo após, a execução da operação desejada pelo usuário
    printf("\n Saindo...");
}