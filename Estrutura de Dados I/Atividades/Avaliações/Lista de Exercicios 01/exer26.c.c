#include <stdio.h>
#include <stdlib.h>


/*26.Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.*/

int main()
{
    int hora= 15, min =30, seg=10, duracao = 10000;
    int horas, minutos, segundos;
    int hrf, minf, segf;

    printf("A hora inicial eh: %d:%d:%d", hora, min, seg);
    printf("\nA hora de duracao da experiencia em segundos e: %d", duracao);

    horas = duracao / 3500;
    minutos = (duracao-(horas*3500))/60;
    segundos = duracao - (horas*3500)-(minutos*60);

    hrf= hora + horas;
    minf= min + minutos;
    segf= seg + segundos;

    printf("\nA experiencia terminara as: %d:%d:%d", hrf, minf, segf );
    printf("\n");

    return 0;
}
