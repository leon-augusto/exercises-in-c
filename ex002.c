#include <stdio.h>
#include <stdlib.h>

void resultadofinal(float t_minimo,float t_maximo){
    float v_minima,v_maxima,quilometros;
    int minimo_nos,maximo_nos;
    do {
 	   
    printf("\n Informe o m�nimo de n�s que o navio alcan�a: ");
    scanf("%d",&minimo_nos);
    
    printf("Informe o m�ximo de n�s que o navio alcan�a: ");
    scanf("%d",&maximo_nos);
    
    printf("\n Digite quantos QUILOMETROS o navio ir� percorreR ou '0' para SAIR: ");
    scanf("%f",&quilometros);
    
    v_minima=minimo_nos*1.852;
    v_maxima=maximo_nos*1.852;
    
    t_minimo=quilometros/v_minima;
    t_maximo=quilometros/v_maxima;
    
    printf("\n Seu navio termin�ra esta viagem em %.2f horas em MINIMA velocidade",t_minimo);
    printf("\n Seu navio termin�ra esta viagem em %.2f horas em MAXIMA velocidade\n",t_maximo);
    
	}while(quilometros!=0);
   }
   
int main(){
    float v_minima,v_maxima,quilometros,t_minimo,t_maximo;
    int minimo_nos,maximo_nos;
    resultadofinal(t_minimo,t_maximo);
    return 0;
} 
