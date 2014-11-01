#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <conio.h>

struct taxiamento
{
int numeroVoo;
int horarioSaida;
char modeloAeronave[10]; 
char empresaAerea[10];

struct taxiamento * prox; // ponteiro para o próximo
}; 
struct taxiamento * inicio = NULL,*fim, *novo,*aux,*imprime; // ponteiro para a struct voo

void cadastrarTaxiamento();
void autorizaTaxiamento();

int main (int argc, char *argv[])
{

    setlocale(LC_ALL, "Portuguese"); //Para incluir caracteres do Português
    system ("color 1E");
    
    unsigned op;
    
    do {
        printf("\n\n");
        printf("\t | CONTROLE DE TAXIAMENTO |\n");
        printf("\t |  --------VOEBEM------- |\n");
        printf("\n\n");
        printf(" ==================================================");
        printf("\n\n c - Cadastra Taxiamento");
        printf("\n\n a - Autorização de Taxiamento");
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
                         cadastrarTaxiamento();
                         break;   
                        }
              case 'a':
                        {
                         autorizaTaxiamento();
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

//-------------------Funcao-------------------------------------------
void cadastrarTaxiamento() {
     // aloca memória
     novo = (struct taxiamento*)malloc(sizeof(struct taxiamento));
     // atualiza fim do ponteiro
     novo->prox = (struct taxiamento*)NULL;

     printf("\n");
     printf("Digite o numero do voo: ");
     scanf("%d", &novo->numeroVoo);
     printf("Modelo da aeronave: ");
     scanf("%s", &novo->modeloAeronave);
     printf("Empresa Aerea: ");
     scanf("%s", &novo->empresaAerea); 
     printf("Horario de Saida: ");
     scanf("%d", &novo->horarioSaida); 

     if(inicio==(struct taxiamento *)NULL) {
         inicio = novo;
         fim = inicio;	
     }


     else {
          //atribuindo o apontamento do ultimo registro para o novo
          fim->prox = novo;
          //apontando o ultimo registro como fim
          fim = novo;
          }
     return;
}


//-------------------Funcao---------------------------------------------

void autorizaTaxiamento() {

     // proximo_voo->prox = NULL;
     // proximo_ponto aponta para o mesmo de ini_ponto, começa do início
     imprime = inicio;
     printf("\n");

     // mostra todos os dados
     // enquanto proximo_ponto for diferente de NULL
     while(imprime != NULL) {
                   
            printf(" Ordem de decolagem: \n Voo n.: %d, Modelo Aeronave: %s, Empresa Aerea: %s, Horario de Saida: %d\n", imprime->numeroVoo, imprime->modeloAeronave,imprime->empresaAerea, imprime-> horarioSaida);
            imprime = imprime->prox; // aponta para o próximo
     }
}




