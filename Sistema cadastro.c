#include <stdio.h>
#include <string.h>

int main()
{
   int aluno[5];
   char nome[5][15];
   int opcao;
   int opcaocadastro;
   int total = 0;
   int consulta;
    int encontrado = 0;
   
   
   
   do{
   	printf("\nSelecione uma opcao:");
   	printf("\nCadastro de Aluno: 1");
   	printf("\nConsultar: 2");
   	printf("\nListar: 3 ");
   	printf("\nAlterar: 4");
   	printf("\nExcluir: 5");
   	printf("\nSair: 0");
   	printf("\nSelecione uma opcao: ");
   	scanf("%d", &opcao);
   	
   	switch(opcao){
	case 1:
	    printf("\nCadastro de Aluno");
	
	    for (int contador = 0; contador < 5; contador++) {
	        printf("\nDigite o codigo: ");
	        scanf("%d", &aluno[contador]);
	        getchar();
	
	        printf("Digite o nome: ");
	        fgets(nome[contador], 15, stdin);
	
	        total++;
			      
	        printf("\nDeseja cadastrar um novo? 1 - Sim  0 - Nao\n");
	        scanf("%d", &opcaocadastro);
	        getchar();
	
	        if (opcaocadastro == 0) {
	            break;
	        }
	        	if (total >= 5) {
	            printf("\nMemoria Cheia!\n");
	            break;
	        }
	    }
	
	    break;




   		case 2:
   		printf("\n=================Consultar=================\n");
   		if(total == 0){
   			printf("nada cadastrado");
		}
		else{
			printf("Digite o codigo de busca: ");
			scanf("%d", &consulta);
			
		   	for(int contador = 0; contador < total; contador++){
		   		if(consulta == aluno[contador]){
				   
		   		printf("\nCodigo do aluno: %d", aluno[contador]);
		   		printf("\nNome do aluno: %s\n", nome[contador]);
		   		
		   		encontrado = 1;
		   		break;
			   	}	
			   }
			    if (encontrado == 0) {
                    printf("Registro nao encontrado.\n");
                }
		   }
   		
		break;	




   		case 3:
   		printf("\n=================Listar=================\n");
   		if(total == 0){
   			printf("nada cadastrado");
		   }else{
		   	for(int contador = 0; contador < total; contador++){
		   		printf("\nCodigo do aluno: %d", aluno[contador]);
		   		printf("\nNome do aluno: %s\n", nome[contador]);
			   }
		   }
   		break;
   		
   		
   		
   		case 4:
   			printf("\n=================Alterar=================\n");
   			if(total == 0){
   			printf("nada cadastrado");
		}
		else{
			printf("Digite o codigo de busca: ");
			scanf("%d", &consulta);
			
		   	for(int contador = 0; contador < total; contador++){
		   		if(consulta == aluno[contador]){
		   		printf("\nDigite o novo codigo: ");
		   		scanf("%d", &aluno[contador]);
		   		getchar();
		   		
		   		printf("\nDigite o novo nome: ");
		   		fgets(nome[contador], 15, stdin);
		   		
		   		encontrado = 1;
		   		break;
			   	}	
			   }
			    if (encontrado == 0) {
                    printf("Registro nao encontrado.\n");
                }
		   }
   		break;



   		case 5:
   		printf("\n=================Excluir=================\n");
   				if(total == 0){
   					printf("Nada cadastrado");
				}else{
					printf("Digite o codigo de busca: ");
					scanf("%d", &consulta);
			
		  		 	for(int contador = 0; contador < total; contador++){
		   				if(consulta == aluno[contador]){
		   					aluno[contador] = aluno[contador + 1];
		   				
		   					for(int j = 0; j < 15; j++){
		   						nome[contador][j] = nome[contador][j + 1];
		   					}

		   					total--;
						   	encontrado = 1;
						   	break;
			   	}	
			   }
			    if (encontrado == 0) {
                    printf("Registro nao encontrado.\n");
               
				}
		   }
   		break;




   		case 0:
   		printf("\n=================Saindo=================\n");
   		break;





   		default:
            printf("Opcao invalida!\n");
            break;




	   }
   }while(opcao != 0);

    return 0;
}
