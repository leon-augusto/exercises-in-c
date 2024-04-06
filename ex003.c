#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>		

 typedef struct unidade{ 
 unsigned long int cod; 
char nome[40]; 
int item[40];
struct lista_uni* prox_uni;   
} Uni;


 typedef struct produto{
     char nome[40];
     char quantidade[40];
     unsigned long int codigo;
     char  preco[40];
     struct lista* prox;   
   }PROD;
   
   PROD* adicionar_produto(PROD* primeiro);
   void listar_produto(PROD* primeiro);
   PROD* excluir_produto(PROD* primeiro);
   void modificar_produto(PROD* primeiro);

   Uni* inserir_unidade(Uni* primeiro_uni);
   void listar_unidade(Uni*primeiro_uni);
   Uni* excluir_unidade(Uni* primeiro_uni);
   void alterar_unidade(Uni*primeiro_uni);

int main() 
{ 
  PROD *primeiro= NULL;
   int opcao;
  Uni *primeiro_uni= NULL;
   while(opcao!='0')
   {
   	   }
    
   	      
      printf("Cadastro de produtos\n ");
      printf("1 - Novo cadastro\n");
      printf("2 - Listar\n");      
      printf("3 - Excluir cadastro\n");      
      printf("4 - Alterar cadastro\n"); 
      printf("5 - Cadastrar Unidades\n"); 
      printf("6 - Buscar Unidades\n"); 
      printf("7 - Deletar Unidades\n"); 
      printf("8 - Atualizar Unidades\n"); 
      printf("0 - Sair\n");      
      fflush(stdin);
      opcao= getch(); 
      
	  	
	  
      switch(opcao)
      {
         case '1':    
         	
              fflush(stdin);
              system("cls");
              printf("Novo cadastro\n");
              primeiro= adicionar_produto(primeiro);
         getch();
         system("cls"); 
         break;
         
         case '2':         
         	
              system ("cls");
              printf(" Produtos cadastrados\n");
              
              listar_produto(primeiro);
         getch();
         system("cls");
         break;
         
         case '3':    
         	
              system ("cls");
              printf(" Excluir cadastro \n");
              primeiro= excluir_produto(primeiro);
         getch();
         system("cls");
         break;

         case '4':   
              system ("cls");
              printf("Alterar produtos\n");
               modificar_produto(primeiro);
         getch();
         system("cls");
         break;
     
      switch(opcao)
      {
         case '5':    
         	
              fflush(stdin);
              system("cls");
              printf("Novo unidade\n");
              primeiro_uni= inserir_unidade(primeiro_uni);
         getch();
         system("cls"); 
         break;
      case '6':         
         	
              system ("cls");
              printf("Unidades cadastradas\n");
              listar_unidade(primeiro_uni);
         getch();
         system("cls");
         break;
         
         case '7':    
         	
              system ("cls");
              printf(" Excluir unidade \n");
              primeiro_uni= excluir_unidade(primeiro_uni);
         getch();
         system("cls");
         break;
      case '8':   
   
              system ("cls");
              printf("Atualizar unidade\n");
               alterar_unidade(primeiro_uni);
         getch();
         system("cls");
         break;
     

         
         case '0':        
              
              opcao='0';
         break;
         
         default:     

              system("cls");        
         break; 
      } 
   }  
   return 0;
}

PROD* adicionar_produto (PROD *primeiro ){ 
     PROD produto;
     PROD*atual= primeiro;
     char identificador= 'F';
     
     
     printf("  \n Nome: ");
     fflush (stdin); fgets(produto.nome, 40, stdin); printf ("\n");
     printf(" Quantidade de produtos: ",135);
     fflush (stdin); fgets(produto.quantidade, 40, stdin); printf ("\n");
     printf("  Preco: ",135);
     fflush (stdin); fgets(produto.preco, 40, stdin); printf ("\n");
     printf("Codigo:",162);
     scanf("%u",&produto.codigo);printf ("\n");
     
   
     for(atual=primeiro; atual!=NULL; atual=atual->prox){
        if(atual->codigo==produto.codigo){
            identificador= 'V'; 
            break;
        }    
     }

     if(identificador!='V' && (strlen(produto.nome)!=1 && strlen(produto.quantidade)!=1 && strlen(produto.preco)!=1)){
         
       PROD* NovoProduto=(PROD*) malloc (sizeof(PROD));       
         strcpy(NovoProduto->nome, produto.nome);
         strcpy(NovoProduto->quantidade, produto.quantidade);
         strcpy(NovoProduto->preco, produto.preco);
         NovoProduto->codigo= produto.codigo;
         NovoProduto->prox= primeiro;
         printf("  Cadastro realizado com sucesso.");
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
         return NovoProduto;    
     }else{
         printf("  Cadastro invalido.",160);
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
         return primeiro;
     }
}

void listar_produto (PROD* primeiro){
     PROD* atual;
     
     
     for(atual= primeiro ; atual!= NULL; atual= atual->prox){
        printf("\n  Nome: ");
        printf("%s", atual->nome);
        printf("\n  quantidade de produtos: ",135);
        printf("%s", atual->quantidade);
        printf("\n  Preco: ", 135);
        printf("%s", atual->preco);
        printf("\n  Codigo: ",162 );
        printf("%d", atual->codigo);
        printf("\n\n");
     }
     if(primeiro==NULL)
        printf("  Nenhum produto cadastrado.");
     printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
}

PROD* excluir_produto(PROD *primeiro){
     
    PROD *anterior= NULL;
     PROD *atual= primeiro;
     int codigo=0;
     
     
     printf("Codigo do produto a ser excluido:", 162,161);
     fflush(stdin);
     scanf("%d",&codigo);
     
     
     while(atual!= NULL && atual->codigo!=codigo){
        anterior= atual;
        atual= atual->prox;
     }
     
    
     if(atual==NULL){
        printf("\n  produto nao encontrado.", 198); 
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
        return primeiro;
     }
     
      
     if(anterior==NULL){
        printf("\n  Conteudo excluido com sucesso.", 163,161); 
        primeiro= atual->prox;
   
     }else{
        printf("\n  Produto a ser excluido com sucesso.", 163,161);
        anterior->prox= atual->prox;
     }
     
     
     free(atual);
     printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
     return primeiro;     
}


void modificar_produto(PROD* primeiro){     
     char nome_substituto[40], quantidade_substituto[40], preco_substituto[500];
     int codigo;  
     PROD* atual=primeiro;
     
     
     printf("  Codigo do produto a ser alterado: ", 162);
     fflush(stdin);
     scanf("%d",&codigo);
     
   
     while(atual!= NULL && atual->codigo!=codigo){
        atual= atual->prox;
     }
     
     if(atual!=NULL){
        printf("\n  Novo nome: ");
        fflush (stdin); fgets(nome_substituto, 40, stdin); 
        strcpy(atual->nome,nome_substituto);
        printf("\n  Nova quantidade : ",135); 
        fflush (stdin); fgets(quantidade_substituto, 40, stdin); printf ("\n");
        strcpy(atual->quantidade,quantidade_substituto);
        printf("\n  Nova preco : ",135); 
        fflush (stdin); fgets(preco_substituto, 40, stdin);
        strcpy(atual->preco,preco_substituto);
        printf("  Dados alterados com sucesso.");
     }else{
        printf("\n  Produto nao encontrado",198);
     }
     printf("\n\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");   
	 }     
	 
    Uni* inserir_unidade(Uni *primeiro_uni){ 
    Uni unidade;
    Uni  *atual_uni= primeiro_uni;
     char identificador_uni= 'F';
     
     printf("  \n Nome: ");
     fflush (stdin); fgets(unidade.nome, 40, stdin); printf ("\n");
     printf("  item: ",135);
     fflush (stdin); fgets(unidade.item, 40, stdin); printf ("\n");
     printf("Codigo:",162);
     scanf("%u",&unidade.cod);printf ("\n");
     
	 
     for(atual_uni= primeiro_uni; atual_uni!=NULL; atual_uni=atual_uni->prox_uni){
        if(atual_uni->cod==unidade.cod){
            identificador_uni= 'V'; 
            break;
        }    
     }


     if(identificador_uni!='V' && (strlen(unidade.nome)!=1 && strlen(unidade.item)!=1)){
         
        Uni* Novauni=(Uni*) malloc (sizeof(Uni));       
         strcpy(Novauni->nome, unidade.nome);
         strcpy(Novauni->item, unidade.item);
         Novauni->cod= unidade.cod;
         Novauni->prox_uni= primeiro_uni;
         printf("  Cadastro realizado com sucesso.");
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
         return Novauni;    
     }else{
         printf("  Cadastro invalido.",160);
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
         return primeiro_uni;
     }
}


void listar_unidade(Uni* primeiro_uni){
    Uni* atual_uni;
     
     
     for(atual_uni= primeiro_uni ; atual_uni!= NULL; atual_uni= atual_uni->prox_uni){
        printf("\n  Nome: ");
        printf("%s", atual_uni->nome);
        printf("\n  item: ", 135);
        printf("%s", atual_uni->item);
        printf("\n  Codigo: ",162 );
        printf("%d", atual_uni->cod);
        printf("\n\n");
     }
     if(primeiro_uni==NULL)
        printf("  Nenhum produto cadastrado.");
     printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
}

Uni* excluir_unidade(Uni *primeiro_uni){
     
     Uni *anterior_uni= NULL;
    Uni *atual_uni= primeiro_uni;
     int cod=0;
     
     
     printf("Codigo da unidade a ser excluido:", 162,161);
     fflush(stdin);
     scanf("%d",&cod);
     
     
     while(atual_uni!= NULL && atual_uni->cod!=cod){
        anterior_uni= atual_uni;
        atual_uni= atual_uni->prox_uni;
     }
     
    
     if(atual_uni==NULL){
        printf("\n  produto nao encontrado.", 198); 
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
        return primeiro_uni;
     }
     
      
     if(anterior_uni==NULL){
        printf("\n  Conteudo excluido com sucesso.", 163,161); 
        primeiro_uni= atual_uni->prox_uni;
   
     }else{
        printf("\n  Produto a ser excluido com sucesso.", 163,161);
        anterior_uni->prox_uni= atual_uni->prox_uni;
     }
     
     
     free(atual_uni);
     printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
     return primeiro_uni;     
}

void alterar_unidade(Uni* primeiro_uni){     
     char nome_substituto[40], item_substituto[500];
     int cod;  
     Uni* atual_uni=primeiro_uni;
     
     
     printf("  Codigo do unidade a ser alterado: ", 162);
     fflush(stdin);
     scanf("%d",&cod);
     
   
     while(atual_uni!= NULL && atual_uni->cod!=cod){
        atual_uni= atual_uni->prox_uni;
     }
     
     if(atual_uni!=NULL){
        printf("\n  Novo nome: ");
        fflush (stdin); fgets(nome_substituto, 40, stdin); 
        strcpy(atual_uni->nome,nome_substituto);
        printf("\n  Nova item : ",135); 
        fflush (stdin); fgets(item_substituto, 40, stdin);
        strcpy(atual_uni->item,item_substituto);
        printf("  Dados alterados com sucesso.");
     }else{
        printf("\n  Produto nao encontrado",198);
     }
     printf("\n\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");              
}






	 
	       


