# include <stdio.h> // biblioteca de comunicação com usuário
# include <stdlib.h> // biblioteca de alocação de espaço e memória
# include <locale.h> // biblioteca de alocações de textos por região
# include <string.h> // biblioteca responsável por cuidar das strings

int registre() // Respon´svel por cadastrar o Usuário no sistema
{
	setlocale(LC_ALL, "Portuguese"); // Definindo o idioma utilizado no código
	printf("Você escolheu o registro de nomes!\n\n\n");
	
	//inicio criação de variáveis/strings
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
	//final criação de variáveis/strings
	
		printf("Digite o CPF que deseja cadastrar "); // coletando informações do usuário
		scanf("%s", cpf); // o "s" serve para utilizar a string como armazenamento
		
		strcpy(arquivo, cpf); // Responsável por copiar os valores das strings
		
		FILE *file; // cria o arquivo
		file = fopen(arquivo, "w"); // cria o arquivo (w é para escrever o arquivo)
		fprintf(file,cpf); // salvo o valor da variável
		fclose(file); // fecha o arquivo
		
		file= fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o nome que deseja cadastrar ");
		scanf("%s", nome); // o "s" serve para utilizar a string como armazenamento
		
		file = fopen(arquivo, "a");
		fprintf(file, nome);
		fclose(file);
		
		file= fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o sobrenome a ser cadastrado: ");
		scanf("%s", sobrenome);
		
		file = fopen(arquivo, "a");
		fprintf(file,sobrenome);
		fclose(file);
		
		file= fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o cargo a ser cadastrado: ");
		scanf("%s", cargo);
		
		file = fopen(arquivo, "a");
		fprintf(file,cargo);
		fclose(file);
		
	system("pause"); // responsável por limpar a tela
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese"); // Definindo o idioma utilizado no código
	
	printf("Você escolheu consultar nomes!\n");
	
	char cpf[100];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file= fopen(cpf, "r"); // r é para ler o arquivo
	
	if(file == NULL)
	{
		printf("\nArquivo não localizado! Tente novamente\n\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}	
	
	
	system("pause");
}

int delete()
{
		setlocale(LC_ALL, "Portuguese");
	printf("Você escolheu deletar nomes!\n");
	
	char cpf[100];
	char conteudo[200];
	printf("Digite o CPF a ser deletado: ");
	scanf("%s", cpf);
	

	
	remove(cpf);
	FILE *file;
	file= fopen(cpf, "r"); // r é para ler o arquivo
	printf("Usuário deletado com suceso\n");
	
	

	system("pause");
	

}

int main () // Definindo as variáveis

{ 


int opcao=0;
int laco=1;

for(laco=1;laco=1;)
{

	system("cls");
	
	setlocale(LC_ALL, "Portuguese"); // Definindo o idioma utilizado no código
   
    	printf("### Cartório da EBAC ###\n\n"); // Início do Menu
    	printf("Escolha a opção desejada no menu abaxo:\n\n");
    	printf("\t1 - Registre seu nome\n"); 
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n"); 
    	printf("Opção: "); // Fim do Menu
    
    	scanf("%d", &opcao);   // Armezenado as informações e opções do usuário
    
    	system("cls"); // comando de limpar a tela
    	
    	switch(opcao) // inicio da seleção do menu
    	{
    		case 1:
    		registre(); // colocar apenas o nome da função, sem colocar o int
    		break; // break serve para mostrar ao sistema quando o case acaba
    		
    		case 2:
    		consultar();
	    	break;
	    	
	    	case 3:
	    	delete();
			break;
			
			
			default:
			printf("Essa opção não existe!\n");
			system("pause");
			break;
		} // fim da seleção
    	
    
		}
    
	
	
	}
    
