typedef struct ponto Ponto;

Ponto* pto_cria(float x, float y);

void pto_libera(Ponto* p);

int pto_acessa(Ponto* p, float* x, float* y);

int pto_atribui(Ponto* p, float x, float y);

float pto_area(Ponto* p1, Ponto* p2);

float pto_diagonal(Ponto* p1, Ponto* p2);

float pto_perimetro(Ponto* p1, Ponto* p2);


