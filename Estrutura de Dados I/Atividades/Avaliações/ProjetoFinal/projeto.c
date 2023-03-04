#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projeto.h"

struct elemento{
    CLIENTE dados; //define o tipo de estrutura que sera usada pelos dados presentes no nó
    struct elemento *prox;
};

typedef struct elemento ELEM;

int menu(){
    int opc = 0;
    printf("\nMENU SISTEMA DE CONTATOS ACME S.A.\n");
    printf("\nEntre com uma opção: \n1-Inserir contato \n2-Lista completa \n3-Pesquisar contato por código \n4-Pesquisar contato por nome \n5-Editar contato \n6-Remover contato \n7-Sair e salvar\n\n");
    scanf("%d", &opc);
    system("PAUSE");
    system("cls");
    if(opc >= 1 && opc <= 7 ){
    return opc;
    }else{
    printf("\nEntre com uma opção valida!\n\n");
    system("PAUSE");
    system("cls");
    }
};

//Função para a criação da lista
Lista *criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

//Funçao que insere contatos no inicio da lista
int insere_ini_lista(Lista *li, CLIENTE cli){
    if (li== NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL){
        return 0;
    }
    no->dados = cli; //os dados presentes no nó entram na variavel cli
    no->prox = (*li);
    *li = no;
    return 1;
}
//Função para a inserção de contatos no final da lista
int insere_final_lista(Lista *li, CLIENTE cli){
    if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL){
        return 0;
    }
    no->dados = cli;
    no->prox= NULL;
    if((*li) == NULL){
        *li = no;
    }else{
        ELEM *aux = *li;
        while(aux->prox != NULL){
            aux = aux ->prox;
        }
        aux->prox = no;
    }
    return 1;
}
//Função que remove os contatos pelo ID
int remove_lista(Lista *li, int cod){
    if(li == NULL){
        return 0;
    }
    ELEM *ant, *no = *li;
    while(no != NULL && no->dados.cod != cod){
        ant = no;
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }
    if (no == *li){
        *li = no->prox;
    }else{
        ant->prox = no->prox;
    }
    free(no);
    return 1;
}

//Função que edita os contatos da lista
int edita_lista_cod(Lista *li, int cod, CLIENTE *cli){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    while(no != NULL && no->dados.cod != cod){//A lista vai sendo percorrida até que o codigo dos dados presentes no nó
        no = no->prox;                        //seja igual ao codigo que foi passado previamente como parametro.
    }
    if(no == NULL){ //Se não for encontrado nenhum codigo igual ao codigo passado pelo parametro a função acaba.
        return 0;
    }else{
        //caso seja encontrado os dados presentes no nó são exibidos na tela, o usuario então altera esses dados,
        //que são enviados para a estrutura cli na lista, assim sobrescrevendo os dados ja existentes.
        printf("\nDADOS DO CONTATO\n\n");
        printf("\n\nCodigo: %d\n", no->dados.cod);
        printf("\nNome: %s", no->dados.nome);
        printf("\nEmpresa: %s", no->dados.empresa);
        printf("\nDepartamento: %s", no->dados.departamento);
        printf("\nTelefone: %d\n", no->dados.telefone);
        printf("\nCelular: %d\n", no->dados.celular);
        printf("\nEmail: %s\n\n", no->dados.email);
        printf("Novo codigo: ");
        scanf("%d", &no->dados.cod);
        printf("\nNovo nome: ");
        getchar();
        fgets(&no->dados.nome, 40, stdin);
        fflush(stdin);
        printf("\nNova empresa: ");
        fgets(&no->dados.empresa, 40, stdin);
        fflush(stdin);
        printf("\nNovo departamento: ");
        fgets(&no->dados.departamento, 20, stdin);
        fflush(stdin);
        printf("\nNovo email: ");
         fgets(&no->dados.email, 40, stdin);
        fflush(stdin);
        printf("\nNovo telefone: ");
        scanf("%d", &no->dados.telefone);
        printf("\nNovo celular: ");
        scanf("%d", &no->dados.celular);
        *cli = no->dados;
    }
}
//Consulta pelo codigo do contato
int consulta_lista_cod(Lista *li, int cod, CLIENTE *cli){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    while(no != NULL && no->dados.cod != cod){
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }else{
        *cli = no->dados;
        return 1;
    }
}

//Consulta da lista por nome
int consulta_lista_nome(Lista *li, char nome[40], CLIENTE *cli){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    while(no != NULL && strcmp(no->dados.nome, nome)){
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }else{
        *cli = no->dados;
        return 1;
    }
}

//Consulta que imprime todos os contatos na tela
int consulta_lista(Lista *li){
   if(li == NULL){
        printf("\nLista vazia!\n\n");
    }
    ELEM *no = *li;
    printf("\nDADOS DOS CONTATOS\n\n");
    while(no != NULL){
        printf("\n\nCodigo: %d\n", no->dados.cod);//os dados são exibidos com base nos dados presentes no nó
        printf("\nNome: %s", no->dados.nome);
        printf("\nEmpresa: %s", no->dados.empresa);
        printf("\nDepartamento: %s", no->dados.departamento);
        printf("\nTelefone: %d\n", no->dados.telefone);
        printf("\nCelular: %d\n", no->dados.celular);
        printf("\nEmail: %s\n", no->dados.email);
        no = no->prox;
    }
    if (no == NULL){
        return 0;
    }

}

//Função que apaga a lista da memoria executada a cada fim do programa
void apagaLista(Lista *li){
    if(li != NULL){
        ELEM *no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int listaVazia(Lista *li){
    if(li == NULL){
        return 1;
    }
    if(*li == NULL){
        return 1;
    }
    return 0;
}

int tamLista(Lista *li){
    if(li == NULL){
        return 0;
    }
    int acum = 0;
    ELEM *no = *li;
    while(no != NULL){
        acum++;
        no = no->prox;
    }
    return acum;
}

int salva_bin(Lista *li){
    if(li == NULL){
        return 0;
    }
    FILE* fp = fopen("contatos", "wb");//abre o arquivo contatos cuja a extensão wb representa um arquivo binario
    if(fp == NULL){
        printf("\nErro na leitura");
        return 0;
    }
    ELEM *no = *li;
    while(no != NULL){
        fwrite(&no->dados,sizeof(CLIENTE),1,fp); //salva os dados do nó dentro do arquivo
        no = no->prox;
    }
	fclose(fp);
	return 1;
}

Lista leitura_bin(){
	CLIENTE cli;
	Lista *li;
	li = criaLista();
    FILE* fp = fopen("contatos", "rb"); //Abre e le o arquivo
    if (!fp){
		return 0;
	}
    while (1) {
		fread(&cli, sizeof(cli), 1, fp);//Le o tamanho da estrutura cliente e joga na variavel cad
		if(feof(fp)) {//verifica se o arquivo acabou
			break;
		}
		insere_lista_ordenada(li,cli);//Insere os contatos na lista
  	}
  	fclose(fp);
	return li;//Retorna a lista com todos os contatos que estavam no arquivo
}

int insere_lista_ordenada(Lista *li, CLIENTE cli){
    if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL){
        return 0;
    }
    no->dados = cli;
    if(listaVazia(li)){
        no->prox = (*li);
        *li = no;
        return 1;
    }else{
        ELEM *ant, *atual = *li;
        while(atual != NULL && atual->dados.cod < cli.cod){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li){
            no->prox = (*li);
            *li = no;
        }else{
            no->prox = ant->prox;
            ant->prox = no;
        }
        return 1;
    }
}
