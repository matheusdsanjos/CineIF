#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
    char nomeCliente[128], nomeFilme[128];
    int  codFilme, qtdIngressos;
    float refriGrande, refriMedio, refriPequeno, pipocaGrande, pipocaMedia, pipocaPequena, chocolate;
    float valorIngressos, valorGuloseimas, valorTotal;
}cliente;

void abertura()
{
    printf("\n\n");
    system("pause");
}

int main()
{
    system("chcp 1252 > nul");

    setlocale(LC_ALL, "");

    cliente s;

    int fileira, poltrona, opcao, opcao2, opcaoGuloseima, contNumIngressos;
    char x, mat[6][5] = {{' ', ' ', ' ', ' ', ' '},
                         {' ', ' ', ' ', ' ', ' '},
                         {' ', ' ', ' ', ' ', ' '},
                         {' ', ' ', ' ', ' ', ' '},
                         {' ', ' ', ' ', ' ', ' '},
                         {' ', ' ', ' ', ' ', ' '}};

    printf("    ==============================================================\n");
    printf("    _________  ____  _____      ____  _________    ____  _________\n");
    printf("    XXXXXXXXX  XXXX  XXXXX      XXXX  XXXXXXXXX    XXXX  XXXXXXXXX\n");
    printf("    XXXXXXXXX  XXXX  XXXXXX     XXXX  XXXXXXXXX    XXXX  XXXXXXXXX\n");
    printf("    XXXX       ____  XXXX XXX   XXXX  XXXX_____    ____  XXXX_____\n");
    printf("    XXXX       XXXX  XXXX  XXX  XXXX  XXXXXXXXX    XXXX  XXXXXXXXX\n");
    printf("    XXXX       XXXX  XXXX   XXX XXXX  XXXXXXXXX    XXXX  XXXXXXXXX\n");
    printf("    XXXX_____  XXXX  XXXX    XXXXXXX  XXXX_____    XXXX  XXXX     \n");
    printf("    XXXXXXXXX  XXXX  XXXX      XXXXX  XXXXXXXXX    XXXX  XXXX     \n");
    printf("    XXXXXXXXX  XXXX  XXXX       XXXX  XXXXXXXXX    XXXX  XXXX   \n\n");
    printf("    ==============================================================\n");
    printf("    C   I   N   E   M   A        A   C   A   D   Ê   M   I   C   O\n");

    abertura();

    system("cls");

    printf("\n    Digite seu nome: ");
    gets(s.nomeCliente);

    system("cls");

    do{
        printf("\n                       BEM-VINDO(A), %s!\n", s.nomeCliente);
        printf("\n                   CONFIRA NOSSAS OPÇÕES DE FILMES:\n\n");
        printf("                  VALOR ÚNICO POR INGRESSO: R$ 25,00\n");
        printf("                 ====================================\n");
        printf("                 Avatar: O Caminho da Água........001\n");
        printf("                 ====================================\n");
        printf("                 Noite Infeliz....................002\n");
        printf("                 ====================================\n");
        printf("                 O Adão Negro.....................003\n");
        printf("                 ====================================\n");
        printf("                 Lua Nova.........................004\n");
        printf("                 ====================================\n");
        printf("                 She Said.........................005\n");
        printf("                 ====================================\n");
        printf("                 Irmãos de Honra..................006\n");
        printf("                 ====================================\n");

        do
        {
            printf("\n                  ESCOLHA UMA DAS OPÇÕES EM CARTAZ: ");
            scanf("%d", &s.codFilme);

            if (s.codFilme == 001 || s.codFilme == 002 || s.codFilme == 003 || s.codFilme == 004 || s.codFilme == 005 || s.codFilme == 006){
                do{

                    printf("\n                  DIGITE A QUANTIDADE DE INGRESSOS: ");
                    scanf("%d", &s.qtdIngressos);

                    if (s.qtdIngressos < 1 || s.qtdIngressos > 30)
                    {
                        printf("\n                  NÚMERO DE INGRESSOS INDISPONÍVEL, POR FAVOR, DIGITE NOVAMENTE: \n");
                    }

                }while (s.qtdIngressos < 1 || s.qtdIngressos > 30);
            }

            else{
                printf("\n                SELEÇÃO INDISPONÍVEL, DIGITE NOVAMENTE: \n");
            }

        }while (s.codFilme != 001 && s.codFilme != 002 && s.codFilme != 003 && s.codFilme != 004 && s.codFilme != 005 && s.codFilme != 006);

        system("cls");

        printf("\n                 ============== RESUMO ==============");

        if(s.codFilme == 1){
            printf("\n\n                   FILME: Avatar: O Caminho da Água");
            strcpy(s.nomeFilme,"Avatar: O Caminho da Água");
        }
        if(s.codFilme == 2){
            printf("\n\n                          FILME: Noite Infeliz");
            strcpy(s.nomeFilme,"Noite Infeliz");
        }
        if(s.codFilme == 3){
            printf("\n\n                           FILME: O Adão Negro");
            strcpy(s.nomeFilme,"O Adão Negro");
        }
        if(s.codFilme == 4){
            printf("\n\n                           FILME: Lua Nova");
            strcpy(s.nomeFilme,"Lua Nova");
        }
        if(s.codFilme == 5){
            printf("\n\n                           FILME: She Said");
            strcpy(s.nomeFilme,"She Said");
        }
        if(s.codFilme == 6){
            printf("\n\n                        FILME: Irmãos de Honra");
            strcpy(s.nomeFilme,"Irmãos de Honra");
        }

        printf("\n\n                      QUANTIDADE DE INGRESSOS: %d", s.qtdIngressos);
        printf("\n\n                 ====================================");
        printf("\n\n                 ALTERAR PEDIDO...................001");
        printf("\n                 ESCOLHER GULOSEIMAS..............002");
        printf("\n                 SELECIONAR POLTRONAS.............003");
        printf("\n\n                    ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcao);

        system("cls");

    }while(opcao == 1);

    s.valorIngressos = s.qtdIngressos * 25.0;

    while(opcao == 2){
        printf("\n                         SESSÃO DE GULOSEIMAS: \n");
        printf("                 ====================================\n");
        printf("                 Refri Grande: R$5,00.............001\n");
        printf("                 ====================================\n");
        printf("                 Refri Médio: R$ 2,50.............002\n");
        printf("                 ====================================\n");
        printf("                 Refri Pequeno: R$ 1,50...........003\n");
        printf("                 ====================================\n");
        printf("                 Pipoca Grande: R$ 15,00..........004\n");
        printf("                 ====================================\n");
        printf("                 Pipoca Média: R$10,00............005\n");
        printf("                 ====================================\n");
        printf("                 Picoca Pequena: R$5,00...........006\n");
        printf("                 ====================================\n");
        printf("                 Chocolate: R$7,00................007\n");
        printf("\n                   ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcaoGuloseima);

        if(opcaoGuloseima == 1){
            printf("\n                DIGITE A QUANT. DE Refri Grande: ");
            scanf("%f", &s.refriGrande);
            printf("\n                 ESCOLHER OUTRA GULOSEIMA.........002");
            printf("\n                 PROSSEGUIR.......................003");
            printf("\n\n                    ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcao);
        }
        else if(opcaoGuloseima == 2){
            printf("\n                  DIGITE A QUANT. DE Refri Médio: ");
            scanf("%f", &s.refriMedio);
            printf("\n                 ESCOLHER OUTRA GULOSEIMA.........002");
            printf("\n                 PROSSEGUIR.......................003");
            printf("\n\n                    ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcao);
        }
        else if(opcaoGuloseima == 3){
            printf("\n                  DIGITE A QUANT. DE Refri Pequeno: ");
            scanf("%f", &s.refriPequeno);
            printf("\n                 ESCOLHER OUTRA GULOSEIMA.........002");
            printf("\n                 PROSSEGUIR.......................003");
            printf("\n\n                    ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcao);
        }
        else if(opcaoGuloseima == 4){
            printf("\n                  DIGITE A QUANT. DE Picoca Grande: ");
            scanf("%f", &s.pipocaGrande);
            printf("\n                 ESCOLHER OUTRA GULOSEIMA.........002");
            printf("\n                 PROSSEGUIR.......................003");
            printf("\n\n                    ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcao);
        }
        else if(opcaoGuloseima == 5){
            printf("\n                  DIGITE A QUANT. DE Pipoca Média: ");
            scanf("%f", &s.pipocaMedia);
            printf("\n                 ESCOLHER OUTRA GULOSEIMA.........002");
            printf("\n                 PROSSEGUIR.......................003");
            printf("\n\n                    ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcao);
        }
        else if(opcaoGuloseima == 6){
            printf("\n                  DIGITE A QUANT. DE Pipoca Pequena: ");
            scanf("%f", &s.pipocaMedia);
            printf("\n                 ESCOLHER OUTRA GULOSEIMA.........002");
            printf("\n                 PROSSEGUIR.......................003");
            printf("\n\n                    ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcao);
        }
        else if(opcaoGuloseima == 7){
            printf("\n                  DIGITE A QUANT. DE Chocolate: ");
            scanf("%f", &s.chocolate);
            printf("\n                 ESCOLHER OUTRA GULOSEIMA.........002");
            printf("\n                 PROSSEGUIR.......................003");
            printf("\n\n                    ESCOLHA UMA DAS OPÇÕES ACIMA: ");scanf("%d", &opcao);
        }

        system("cls");
    }

    while(opcao == 3){
        for(int cont = 1; cont <= s.qtdIngressos; cont++){
            printf("\n                           (0) (1) (2) (3) (4)\n");
            for(int linha = 0; linha < 6; linha++)
            {
                printf("                        (%i)", linha);
                for(int coluna = 0; coluna < 5; coluna++)
                {
                    printf("[%c] ", mat[linha][coluna]);
                }
                printf("\n");
            }
            printf("\n");
            printf("                           [======TELÃO======]");
            printf("\n\n");
            printf("                    INGRESSO Nº %d", cont);
            printf("\n                    DIGITE A FILEIRA (LINHA): ");
            scanf("%d", &fileira);
            printf("                    DIGITE A POLTRONA (COLUNA): ");
            scanf("%d", &poltrona);

            do
            {
                if (mat[fileira][poltrona] == 'X')
                {
                    printf("\n                    POLTRONA OCUPADA, DIGITE NOVAMENTE: \n\n");
                    printf("                    INGRESSO Nº %d", cont);
                    printf("\n                    DIGITE A FILEIRA (LINHA): ");
                    scanf("%d", &fileira);
                    printf("                    DIGITE A POLTRONA (COLUNA): ");
                    scanf("%d", &poltrona);
                }
            }while (mat[fileira][poltrona] == 'X');

            for(int linha = 0; linha < 6; linha++)
            {
                for(int coluna = 0; coluna < 5; coluna++)
                {
                    if(mat[linha][coluna] == mat[fileira][poltrona])
                    {
                        mat[fileira][poltrona] = 'X';
                    }
                }
            }
        }
        printf("\n                           (0) (1) (2) (3) (4)\n");
        for(int linha = 0; linha < 6; linha++)
        {
            printf("                        (%i)", linha);
            for(int coluna = 0; coluna < 5; coluna++)
            {
                printf("[%c] ", mat[linha][coluna]);
            }
            printf("\n");
        }
        printf("\n\n                    FINALIZAR COMPRA.......004");
        printf("\n\n                  PRESSIONE 4 PARA FINALIZAR: ");scanf("%d", &opcao);
        system("cls");
    }

    s.valorGuloseimas = ((s.refriGrande * 5.0) + (s.refriMedio * 2.5) + (s.refriPequeno * 1.5) + (s.pipocaGrande * 15.0) + (s.pipocaMedia * 10.0) + (s.pipocaPequena * 5.0) + (s.chocolate * 7.0));

    s.valorTotal = s.valorIngressos + s.valorGuloseimas;

    printf("\n                 *========== CUPOM FISCAL ==========*");
    printf("\n\n                  CLIENTE: %s", s.nomeCliente);
    printf("\n\n                  CÓD. DO FILME: %d", s.codFilme);
    printf("\n\n                  FILME: %s", s.nomeFilme);
    printf("\n\n                  QTD. DE INGRESSOS: %d", s.qtdIngressos);
    printf("\n\n                  INGRESSOS: R$ %.2f", s.valorIngressos);
    printf("\n\n                  GULOSEIMAS: R$ %.2f", s.valorGuloseimas);
    printf("\n\n                  TOTAL DO PEDIDO: R$ %.2f", s.valorTotal);
    printf("\n\n                  POLTRONAS SELECIONADAS: ");
    printf("\n\n                     (0) (1) (2) (3) (4)\n");
    for(int linha = 0; linha < 6; linha++)
    {
        printf("                  (%i)", linha);
        for(int coluna = 0; coluna < 5; coluna++)
        {
            printf("[%c] ", mat[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
    printf("                     [======TELÃO======]");
    printf("\n\n                *==================================*");
    printf("\n");

    return 0;
}
