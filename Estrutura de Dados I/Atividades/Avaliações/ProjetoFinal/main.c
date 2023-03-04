#include <stdio.h>
#include <stdlib.h>
#include "projeto.h"
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int x, cod=0, opc=0;
    char nome[40];
    struct cliente cli, dados_cliente;

    Lista *li;
    li = leitura_bin();

    while(opc != 7){
    x = 0;
    opc = menu();
    switch (opc){
case 1 :
    printf("Código do cliente: ");
    scanf("%d", &cli.cod);
    printf("Nome do cliente: ");
    getchar();
    fgets(&cli.nome, 40, stdin);
    fflush(stdin);
    printf("Empresa do cliente: ");
    fgets(&cli.empresa, 40, stdin);
    fflush(stdin);
    printf("Departamento do cliente: ");
    fgets(&cli.departamento, 20, stdin);
    fflush(stdin);
    printf("Telefone do cliente: ");
    scanf("%d", &cli.telefone);
    printf("Celular do cliente: ");
    scanf("%d", &cli.celular);
    printf("Email do cliente: ");
    getchar();
    fgets(&cli.email, 40, stdin);
    fflush(stdin);
    printf("\n\nEscolha onde deseja inserir o contato: \n1-comeco \n2-final\n\n");
    scanf("%d", &opc);
    if(opc == 1){
    x = insere_ini_lista(li, cli);
    }else{
    x = insere_final_lista(li, cli);
    }
    if(x){
            printf("\nInserido com sucesso!\n\n");
    }else{
            printf("\nNão foi possivel inserir o contato.\n\n");
    }
    system("PAUSE");
    system("CLS");
    break ;

case 2 :
    x =  consulta_lista(li);
    if(x = 0){
        printf("\nLista de contatos vazia!\n\n");
    }
    system("PAUSE");
    system("CLS");
    break;

case 3 :
    printf("Digite o código do contato que você deseja consultar: \n");
    scanf("%d", &cod);
    if(x = consulta_lista_cod(li, cod, &cli)){
    printf("\n\nCodigo: %d\n", cli.cod);
    printf("\nNome: %s", cli.nome);
    printf("\nEmpresa: %s", cli.empresa);
    printf("\nDepartamento: %s", cli.departamento);
    printf("\nTelefone: %d\n", cli.telefone);
    printf("\nCelular: %d\n", cli.celular);
    printf("\nEmail: %s\n", cli.email);
    system("PAUSE");
    }else{
        printf("\n\nNão foi possivel achar esse código para a consulta.\n\n");
        system("PAUSE");
    }
    system("CLS");

    break;

case 4 :
    printf("Digite o nome do contato que você deseja consultar: \n");
        getchar();
        fgets(&nome, 40, stdin);
        fflush(stdin);
        if (x = consulta_lista_nome(li, nome, &cli)){
        printf("\n\nCodigo: %d\n", cli.cod);
        printf("\nNome: %s", cli.nome);
        printf("\nEmpresa: %s", cli.empresa);
        printf("\nDepartamento: %s", cli.departamento);
        printf("\nTelefone: %d\n", cli.telefone);
        printf("\nCelular: %d\n", cli.celular);
        printf("\nEmail: %s\n", cli.email);
        system("PAUSE");
        }else{
            printf("\n\nNão foi possivel achar esse nome para a consulta.\n\n");
            system("PAUSE");
        }
        system("CLS");
        break;

case 5 :
        x =  consulta_lista(li);
        if(x = 1){
            printf("Digite o código do contato que deseja alterar: \n");
            scanf("%d", &cod);
            system("CLS");
            x = edita_lista_cod(li, cod, &cli);
            if(x){
                printf("\nContato alterado com sucesso!\n\n");
            }else{
                printf("\nNão foi possivel alterar o contato.\n\n");
            }
            system("PAUSE");
            system("CLS");
        }else{
            printf ("\nLista de contatos vazia.\n\n");
        }
        system("PAUSE");
        system("CLS");
        break;

case 6 :
        printf("Digite o código do contato que deseja remover: \n");
        scanf("%d", &cod);
        x = remove_lista(li, cod);
        if(x){
        printf("\nContato removido com sucesso!\n\n");
        }else{
        printf("\nNão e possivel remover esse contato.\n\n");
        }
        system("PAUSE");
        system("CLS");
        break;

case 7 :
        x = salva_bin(li);
        if(x){
            printf("\nArquivo salvo com sucesso!\n\n");
        }else{
            printf("\nArquivo não foi salvo.\n\n");
            }
        system("pause");
        system("cls");
        apagaLista(li);
        return 0;
        break;

default:
    printf("\nValor invalido!");

    }
    opc = 0;
    }
    }


