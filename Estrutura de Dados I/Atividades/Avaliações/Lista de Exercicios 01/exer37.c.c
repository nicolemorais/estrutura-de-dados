#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*37.Ler uma velocidade em 𝑚/𝑠 (metros por segundo) e apresenta-la convertida em
𝐾𝑚/ℎ (quilômetros por hora). A fórmula de conversão é: 𝐾 = 𝑀 ∗ 3,6 , sendo 𝐾 a velocidade
em 𝑘𝑚/ℎ e 𝑀 em 𝑚/𝑠.*/

int main()
{

    float mS, kmH;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &mS);

    kmH = mS * 3.6;

    printf("\nA velocidade convertida em km/h e: %.2f\n", kmH);

    return 0;
}
