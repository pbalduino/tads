#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include <locale.h>

struct voo
{
int numvoo;
int datavoo;
int horario;
char saida[40];
char chegada[40];
char rota[60];
int passabordo;
};


void consultaVoo();
void cadastrarVoo();
void removeVoo();
struct voo *inf;

int main() {
    
    setlocale(LC_ALL, "Portuguese"); //Para incluir caracteres do Português
    system ("color 1E");
    
    unsigned op;
    
    do {
        printf("\n\n");
        printf("\t | CONTROLE LISTA DE VOOS |\n");
        printf("\t |  --------VOEBEM------- |\n");
        printf("\n\n");
        printf(" ==================================================");
        printf("\n\n i - Inclui (Cadastra) Voo");
        printf("\n\n c - Consulta Dados de Voo");
        printf("\n\n e - Exclui o Voo");
        printf("\n\n s - Sair");
        printf("\n\n ==================================================\n");
        op = getche(); 
        
        switch (op){
               
              case 's':
                        {
                         printf("\n\t Programa terminado!\n\n\n");
                         break;   
                        }                          
              case 'i':
                        {
                         cadastrarVoo();
                         break;   
                        }
              case 'c':
                        {
                         consultaVoo();
                         break;   
                        }  
              case 'e':
                        {
                         removeVoo();
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

//FUNÇÃO CADASTRAR
void cadastrarVoo(){
     int num;
     system("cls");
     do{
     inf = (struct voo *) malloc(sizeof(struct voo));

     printf("\n\n*****CADASTRO DE VOO*****\n");

     printf("\nNumero do voo: ");
     scanf("%d", &inf->numvoo);
     fflush(stdin);

     printf("\nData do voo: ");
     scanf("%d", &inf->datavoo);

     printf("\nHorario do voo: ");
     scanf("%d", &inf->horario);

     printf("\nAeroporto de saida: ");
     fflush(stdin);
     gets(inf->saida);

     printf("\nAeroporto de chegada: ");
     fflush(stdin);
     gets(inf->chegada);

     printf("\nRota do voo: ");
     fflush(stdin);
     gets(inf->rota);

     printf("\nPassageiros a bordo: ");
     fflush(stdin);
     scanf("%d", &inf->passabordo);

     printf(" ___________________________________\n");
     printf("| Escolha uma opcao abaixo |\n");
     printf("|-----------------------------------|\n");
     printf("| 1 - Cadastrar outra Passagem |\n");
     printf("| 0 - Voltar ao menu |\n");
     printf("|___________________________________|\n");

     printf("Opcao: ");
     scanf("%d",&num);
     }while(num!=0);
     system("cls");
}

void removeVoo(){
     free(inf);
     return;

}

//FUNÇÃO CONSULTAR
void consultaVoo(){

     system("cls");
     int consult;
     printf("Digite o numero do voo: ");
     scanf("%d", &consult);

     if(inf->numvoo!=consult){
         printf("Numero nao encontrado\n");
         printf("Tente Novamente");
         getch();
         system("cls");
         consultaVoo();
         }
     else{
          printf("\n-----------------------------");
          printf("\nNumero do voo encontrado");
          printf("\nNumero do Voo: %d ", inf->numvoo);
          printf("\n\nData do voo: %d ", inf->datavoo);
          printf("\nHorario do voo: %d", inf->horario);
          printf("\nAeroporto de saida: %s ", &inf->saida);
          printf("\nAeroporto de chegada: %s", &inf->chegada);
          printf("\nRota: %s", &inf->rota);
          printf("\nPassageiros a bordo: %d", inf->passabordo);
          getch();
          system("cls");
          return;

          }
}
