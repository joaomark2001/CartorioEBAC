# include <stdio.h> // biblioteca de comunica��o com usu�rio
# include <stdlib.h> // biblioteca de aloca��o de espa�o e mem�ria
# include <locale.h> // biblioteca de aloca��es de textos por regi�o
# include <string.h> // biblioteca respons�vel por cuidar das strings

int registre() // Respon�svel por cadastrar o Usu�rio no sistema
{
	setlocale(LC_ALL, "Portuguese"); // Definindo o idioma utilizado no c�digo
	printf("Voc� escolheu o registro de nomes!\n\n\n");
	
	//inicio cria��o de vari�veis/strings
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
	//final cria��o de vari�veis/strings
	
		printf("Digite o CPF que deseja cadastrar "); // coletando informa��es do usu�rio
		scanf("%s", cpf); // o "s" serve para utilizar a string como armazenamento
		
		strcpy(arquivo, cpf); // Respons�vel por copiar os valores das strings
		
		FILE *file; // cria o arquivo
		file = fopen(arquivo, "w"); // cria o arquivo (w � para escrever o arquivo)
		fprintf(file,cpf); // salvo o valor da vari�vel
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
		
	system("pause"); // respons�vel por limpar a tela
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese"); // Definindo o idioma utilizado no c�digo
	
	printf("Voc� escolheu consultar nomes!\n");
	
	char cpf[100];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file= fopen(cpf, "r"); // r � para ler o arquivo
	
	if(file == NULL)
	{
		printf("\nArquivo n�o localizado! Tente novamente\n\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}	
	
	
	system("pause");
}

int delete()
{
		setlocale(LC_ALL, "Portuguese");
	printf("Voc� escolheu deletar nomes!\n");
	
	char cpf[100];
	char conteudo[200];
	printf("Digite o CPF a ser deletado: ");
	scanf("%s", cpf);
	

	
	remove(cpf);
	FILE *file;
	file= fopen(cpf, "r"); // r � para ler o arquivo
	printf("Usu�rio deletado com suceso\n");
	
	

	system("pause");
	

}

int main () // Definindo as vari�veis

{ 


int opcao=0;
int laco=1;

for(laco=1;laco=1;)
{

	system("cls");
	
	setlocale(LC_ALL, "Portuguese"); // Definindo o idioma utilizado no c�digo
   
    	printf("### Cart�rio da EBAC ###\n\n"); // In�cio do Menu
    	printf("Escolha a op��o desejada no menu abaxo:\n\n");
    	printf("\t1 - Registre seu nome\n"); 
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n"); 
    	printf("Op��o: "); // Fim do Menu
    
    	scanf("%d", &opcao);   // Armezenado as informa��es e op��es do usu�rio
    
    	system("cls"); // comando de limpar a tela
    	
    	switch(opcao) // inicio da sele��o do menu
    	{
    		case 1:
    		registre(); // colocar apenas o nome da fun��o, sem colocar o int
    		break; // break serve para mostrar ao sistema quando o case acaba
    		
    		case 2:
    		consultar();
	    	break;
	    	
	    	case 3:
	    	delete();
			break;
			
			
			default:
			printf("Essa op��o n�o existe!\n");
			system("pause");
			break;
		} // fim da sele��o
    	
    
		}
    
	
	
	}
    
