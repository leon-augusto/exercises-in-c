#include <stdio.h>
#include <stdlib.h>

void final(float peso_atual,float peso_desejado){
	float met,tempo,semanas,peso_kalorias;
	float peso_perder,queima_semana;
	
	printf("\n Informe seu peso atual:\t");
	scanf("%f",&peso_atual);
	printf("\n Informe seu peso desejado:\t");
	scanf("%f",&peso_desejado);
	printf("\n Informe o MET desejado para o exercicio:\t");
	scanf("%f",&met);
	printf("\n Informe o tempo desejado para o exercicio:\t");
	scanf("%f",&tempo);
	
	peso_perder= (peso_atual - peso_desejado)*1000;
	queima_semana=met*peso_atual*tempo;
	semanas=peso_perder/queima_semana;
	printf("\n Voce precisa se exercitar com esse tempo e MET durante %.1f semanas",semanas);

}
int main(){
	float peso_atual,peso_desejado,met,tempo,semanas,peso_kalorias;
	float peso_perder,queima_semana;
	
	final(peso_atual,peso_desejado);

    return 0;
}