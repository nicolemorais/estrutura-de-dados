typedef struct cliente{
    int cod;
    char nome[40];
    char empresa[40];
    char departamento[20];
    int telefone;
    int celular;
    char email[40];
}CLIENTE;

typedef struct elemento* Lista;

int menu(opc);

Lista *criaLista();

int insere_ini_lista(Lista *li, CLIENTE cli);

int insere_final_lista(Lista *li, CLIENTE cli);

int remove_lista(Lista *li, int cod);

int consulta_lista_cod(Lista *li, int cod, CLIENTE *cli);

int consulta_lista(Lista *li);

int consulta_lista_nome(Lista *li, char nome[40], CLIENTE *cli);

int listaVazia(Lista *li);

void apagaLista(Lista *li);

int edita_lista_cod(Lista *li, int cod, CLIENTE *cli);

int salva_bin(Lista *li);

Lista leitura_bin();

int insere_lista_ordenada(Lista *li, CLIENTE cli);
