#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <conio.h>

struct bagagem
{
int codigoBag;
int numeroPassagem;
int numeroVoo;
int dataEmbarque;
int horaEmbarque;
int portaoEmbarque;

struct bagagem* prox; // ponteiro para o próximo
}; 
struct bagagem* inicio = NULL,*fim, *novo,*aux,*imprime; // ponteiro para a struct voo
int opcao = 0;

void cadastraBagagem();
void recuperaBagagem();


int main (int argc, char *argv[])
{

    setlocale(LC_ALL, "Portuguese"); //Para incluir caracteres do Português
    system ("color 1E");
    
    unsigned op;
    
    do {
        printf("\n\n");
        printf("\t | CONTROLE DE BAGAGENS |\n");
        printf("\t |  ------VOEBEM------- |\n");
        printf("\n\n");
        printf(" ==================================================");
        printf("\n\n c - Cadastra Bagagem");
        printf("\n\n r - Recupera Bagagem");
        printf("\n\n s - Sair");
        printf("\n\n ==================================================\n");
        op = getche(); 
        
        switch (op){
               
              case 's':
                        {
                         printf("\n\t Programa terminado!\n\n\n");
                         break;   
                        }                          
              case 'c':
                        {
                         cadastraBagagem();
                         break;   
                        }
              case 'r':
                        {
                         recuperaBagagem();
                         break;   
                        }  

              default:
                        {
                              printf("\n\nAtenção! Opção Inválida!\n");
                              break;
                              getchar ();
                        }                            
    
    
                    }        
               system ("pause");
               system ("cls");                                                                                    
          
        
    }  while (op != 's');    

    return 0;


}

//----funcao cadastra Bagagem------

void cadastraBagagem (){
     
     // aloca memória
     novo = (struct bagagem*)malloc(sizeof(struct bagagem));
     // atualiza fim do ponteiro
     novo->prox = (struct bagagem*)NULL;

     printf("\n");
     printf("Digite codigo da bagagem: ");
     scanf("%d", &novo->codigoBag);
     printf("Digite o numero da passagem: ");
     scanf("%d", &novo->numeroPassagem);
     printf("Digite o numero do Voo: ");
     scanf("%d", &novo->numeroVoo); 
     printf("Data do embarque: ");
     scanf("%d", &novo->dataEmbarque); 
     printf("Horario de Embarque: ");
     scanf("%d", &novo->horaEmbarque); 
     printf("Portao de embarque: ");
     scanf("%d", &novo->portaoEmbarque); 

     if(inicio==(struct bagagem*)NULL) {
        inicio = novo;
        fim = inicio;	
     }


     else {
          
          //atribuindo o apontamento do primeiro registro para o ultimo da pilha
          novo->prox = inicio;
          //apontando o novo registro para o primeiro da pilha 
          inicio = novo;
          }
         
}


//-----funcao recupera-------------------

void recuperaBagagem() { 

     // proximo_voo->prox = NULL;
     // proximo_ponto aponta para o mesmo de ini_ponto, começa do início
     imprime = inicio;
     printf("\n");

     // mostra todos os dados
     // enquanto proximo_ponto for diferente de NULL
     while(imprime != NULL) {

                   printf(" Recuperar bagagem :\n");
                   printf("Codigo: %d, Numero da Passagem: %d, Numero do Voo: %d, Data de Embarque: %d, Horario de Embarque: %d, Portao de Embarque: %d \n", imprime->codigoBag, imprime->numeroPassagem,imprime->numeroVoo, imprime-> dataEmbarque, imprime->horaEmbarque, imprime->portaoEmbarque);
                   imprime = imprime->prox; // aponta para o próximo
                   }
                   
}


