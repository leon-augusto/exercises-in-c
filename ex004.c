#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define NUM_LINHAS 15
#define NUM_COLUNAS 40

void imprimir(char mat[NUM_LINHAS][NUM_COLUNAS]){
	int i, j;
	for (i = 0; i < NUM_LINHAS; i++){
		for(j = 0; j < NUM_COLUNAS; j++){
			printf("%c", mat[i][j]);
		}
		printf("\n");
	}
}

void inimigo(char mat[NUM_LINHAS][NUM_COLUNAS], 
             char c, int posx, int posy,
			 int posx_a, int posy_a){
	mat[posy_a][posx_a] = 's';
    mat[posy][posx] = c;
	imprimir(mat);
	Sleep(50);
    system("cls");
}

void inimigo2(char mat[NUM_LINHAS][NUM_COLUNAS], 
             char c, int posx, int posy,
			 int posx_a, int posy_a){
	mat[posy_a][posx_a] = 's';
    mat[posy][posx] = c;
	imprimir(mat);
	Sleep(50);
    system("cls");
}

void inimigo3(char mat[NUM_LINHAS][NUM_COLUNAS], 
             char c, int posx, int posy,
			 int posx_a, int posy_a){
	mat[posy_a][posx_a] = 's';
    mat[posy][posx] = c;
	imprimir(mat);
	Sleep(50);
    system("cls");
}

void jogar(char mat[NUM_LINHAS][NUM_COLUNAS], 
             char c, int posx, int posy,
			 int posx_a, int posy_a){
	mat[posy_a][posx_a] = 's';
    mat[posy][posx] = c;
	imprimir(mat);
	Sleep(500);
    system("cls");
}

void tiro(char mat[NUM_LINHAS][NUM_COLUNAS], 
             char c, int posx, int posy,
			 int posx_a, int posy_a){
	mat[posy_a][posx_a] = 's';
    mat[posy][posx] = c;
	imprimir(mat);
	Sleep(500);
    system("cls");
}

int main(){
	int controle = 5,a=19,b=7,c=19,d=7,i,w=31,x=7,y=31,z=7,w2=22,x2=4,y2=22,z2=4,w3=2,x3=13,y3=2,z3=13,ninimigo1=1,ninimigo2=1,ninimigo3=1;
    int a1, b1, c1, d1,a2, b2, c2, d2, a3, b3, c3, d3, a4, b4, c4, d4;
	char mat[NUM_LINHAS][NUM_COLUNAS] = {
 	//    0    1    2    3	 4	  5	   6	7	8	 9	 10	  11  12   13   14   15   16   17   18  19
		{'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 0
        {'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 1
        {'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 2
		{'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 3
		{'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 4
        {'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 5
        {'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 6
		{'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 7	
		{'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 8
        {'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 9
        {'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 10
        {'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 11
		{'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 12
		{'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}, // 13
        {'s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's','s', 's', 's', 's', 's', 's', 's','s'}  // 14
        	
	};
	
	printf("8 - CIMA\n");
	printf("2 - BAIXO\n");
	printf("4 - ESQUERDA\n");
	printf("6 - DIREITA\n");
	printf("9 - ATIRA PARA CIMA\n");
	printf("7 - ATIRA PARA BAIXO\n");
	printf("1 - ATIRA PARA ESQUERDA\n");
	printf("3 - ATIRA PARA DIREITA\n");
	printf("0 - SAIR\n\n");

	for(i=0;i<=10000;++i){
		
		if(a == w && b == x || a == w2 && b == x2 || a == w3 && b == x3){
			printf("VOCE PERDEU!\n\n\t\tNOTICIA: Dois navies de guerra estao desaparecidos\n\n");
			break;
		}
		
		if(a1 == w && b1 == x){printf("Voce eliminou um!\n");ninimigo1 = 0;}
		if(a1 == w2 && b1 == x2){printf("Voce eliminou um!\n");ninimigo2 = 0;}
		if(a1 == w3 && b1 == x3){printf("Voce eliminou um!\n");ninimigo3 = 0;}
		
		if(a2 == w && b2 == x){printf("Voce eliminou um!\n");ninimigo1 = 0;}
		if(a2 == w2 && b2 == x2){printf("Voce eliminou um!\n");ninimigo2 = 0;}
		if(a2 == w3 && b2 == x3){printf("Voce eliminou um!\n");ninimigo3 = 0;}
		
		if(a3 == w && b3 == x){printf("Voce eliminou um!\n");ninimigo1 = 0;}
		if(a3 == w2 && b3 == x2){printf("Voce eliminou um!\n");ninimigo2 = 0;}
		if(a3 == w3 && b3 == x3){printf("Voce eliminou um!\n");ninimigo3 = 0;}
			
		if(a4 == w && b4 == x){printf("Voce eliminou um!\n");ninimigo1 = 0;}
		if(a4 == w2 && b4 == x2){printf("Voce eliminou um!\n");ninimigo2 = 0;}
		if(a4 == w3 && b4 == x3){printf("Voce eliminou um!\n");ninimigo3 = 0;}
	
		
	if(controle == 6){
		jogar(mat,'N', a+=1, b, c, d);
		if(ninimigo1 != 0){	inimigo(mat,'H', w, x+=1, y, z);}
		if(ninimigo2 != 0){	inimigo2(mat,'H', w2, x2-=1, y2, z2);}
		if(ninimigo3 != 0){	inimigo3(mat,'H', w3-=1, x3, y3, z3);}
	}
	
	if(controle == 8){
		jogar(mat,'N', a, b-=1, c, d);
		if(ninimigo1 != 0){	inimigo(mat,'H', w+=1, x, y, z);}
		if(ninimigo2 != 0){ inimigo2(mat,'H', w2-=1, x2, y2, z2);}
		if(ninimigo3 != 0){ inimigo3(mat,'H', w3, x3+=1, y3, z3);}
	}
	
	if(controle == 4){
		jogar(mat,'N', a-=1, b, c, d);
		if(ninimigo1 != 0){	inimigo(mat,'H', w, x-=1, y, z);}
		if(ninimigo2 != 0){ inimigo2(mat,'H', w2, x2+=1, y2, z2);}
		if(ninimigo3 != 0){ inimigo3(mat,'H', w3+=1, x3, y3, z3);}
	}
	
	if(controle == 2){
		jogar(mat,'N', a, b+=1, c, d);
		if(ninimigo1 != 0){	inimigo(mat,'H', w-=1, x, y, z);}
		if(ninimigo2 != 0){	inimigo2(mat,'H', w2+=1, x2, y2, z2);}
		if(ninimigo3 != 0){	inimigo3(mat,'H', w3, x3-=1, y3, z3);}
	}
	

	if(controle == 0){		printf("\n\n\t\tDESISTENTE\n\n");break;	}

	//tiros
	//cima
	if(controle == 9){
		tiro(mat,'!', a1=a, b1=b-1, c1=c, d1=d);
		tiro(mat,'!', a1, b1, c1=a1, d1=b1);
	}
	//baixo
	if(controle == 7){
		tiro(mat,'|', a2=a, b2=b+1, c2=c, d2=d);
		tiro(mat,'|', a2, b2, c2=a2, d2=b2);
	}
	//esquerda
	if(controle == 1){
		tiro(mat,'-', a3=a-1, b3=b, c3=c, d3=d);
		tiro(mat,'-', a3, b3, c3=a3, d3=b3);
	}
	//direita
	if(controle == 3){
		tiro(mat,'-', a4=a+1, b4=b, c4=c, d4=d);
		tiro(mat,'-', a4, b4, c4=a4, d4=b4);
	}
	
	if(ninimigo1 == 0 && ninimigo2 == 0 && ninimigo3 == 0){
		printf("VOCE GANHOU!\n\n\t\tNOTICIA: Tres navies de guerra estao desaparecidos\n\n");
			break;
	}
	
	jogar(mat,'N', a, b, c=a, d=b);
	
	inimigo(mat,'H', w, x, y=w, z=x);
	inimigo2(mat,'H', w2, x2, y2=w2, z2=x2);
	inimigo3(mat,'H', w3, x3, y3=w3, z3=x3);
	
	
	
	scanf("%d",&controle);
	}
	
				
    return 0;
}