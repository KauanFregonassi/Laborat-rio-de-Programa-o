#include <stdio.h>
#include <string.h>

int main() {

	char nome[5][50];
	int qnt_paciente;
	float dados[5][13];
	char resposta[10];

	printf("Quantidade de pacientes que ira armazenar (1 a 5): ");
	scanf("%d", &qnt_paciente);

	if (qnt_paciente < 1 || qnt_paciente > 5) {
		printf("Quantidade invalida! Digite de 1 a 5.\n");
		return 0;
	}

	for (int i = 0; i < qnt_paciente; i++) {

		printf("\n========== PACIENTE %d ==========\n", i + 1);

		printf("Qual seu nome: ");
		scanf("%49s", nome[i]);

		printf("Informe sua idade: ");
		scanf("%f", &dados[i][0]);

		printf("Informe sua pressao arterial sistolica: ");
		scanf("%f", &dados[i][1]);

		for (;;) {
			printf("Informa se fuma (Sim ou Nao): ");
			scanf("%9s", resposta);

			if (strcmp(resposta, "Sim") == 0) {
				dados[i][2] = 1;
				break;
			}
			else if (strcmp(resposta, "Nao") == 0) {
				dados[i][2] = 0;
				break;
			}
			else {
				printf("Digite apenas Sim ou Nao!\n");
			}
		}

		for (;;) {
			printf("Informa se tem diabetes (Sim ou Nao): ");
			scanf("%9s", resposta);

			if (strcmp(resposta, "Sim") == 0) {
				dados[i][3] = 1;
				break;
			}
			else if (strcmp(resposta, "Nao") == 0) {
				dados[i][3] = 0;
				break;
			}
			else {
				printf("Digite apenas Sim ou Nao!\n");
			}
		}

		for (;;) {
			printf("Possui historico de doenca cardiaca (Sim ou Nao): ");
			scanf("%9s", resposta);

			if (strcmp(resposta, "Sim") == 0) {
				dados[i][4] = 1;
				break;
			}
			else if (strcmp(resposta, "Nao") == 0) {
				dados[i][4] = 0;
				break;
			}
			else {
				printf("Digite apenas Sim ou Nao!\n");
			}
		}

		printf("Informe seu colesterol LDL: ");
		scanf("%f", &dados[i][5]);

		printf("Informe seu peso: ");
		scanf("%f", &dados[i][6]);

		printf("Informe sua altura: ");
		scanf("%f", &dados[i][7]);

		for (;;) {
			printf("Informa se tem sedentarismo (Sim ou Nao): ");
			scanf("%9s", resposta);

			if (strcmp(resposta, "Sim") == 0) {
				dados[i][8] = 1;
				break;
			}
			else if (strcmp(resposta, "Nao") == 0) {
				dados[i][8] = 0;
				break;
			}
			else {
				printf("Digite apenas Sim ou Nao!\n");
			}
		}

		for (;;) {
			printf("Alimentacao rica em ultraprocessados (Sim ou Nao): ");
			scanf("%9s", resposta);

			if (strcmp(resposta, "Sim") == 0) {
				dados[i][9] = 1;
				break;
			}
			else if (strcmp(resposta, "Nao") == 0) {
				dados[i][9] = 0;
				break;
			}
			else {
				printf("Digite apenas Sim ou Nao!\n");
			}
		}

		for (;;) {
			printf("Possui estresse cronico elevado (Sim ou Nao): ");
			scanf("%9s", resposta);

			if (strcmp(resposta, "Sim") == 0) {
				dados[i][10] = 1;
				break;
			}
			else if (strcmp(resposta, "Nao") == 0) {
				dados[i][10] = 0;
				break;
			}
			else {
				printf("Digite apenas Sim ou Nao!\n");
			}
		}

		for (;;) {
			printf("Possui sono inadequado (Sim ou Nao): ");
			scanf("%9s", resposta);

			if (strcmp(resposta, "Sim") == 0) {
				dados[i][11] = 1;
				break;
			}
			else if (strcmp(resposta, "Nao") == 0) {
				dados[i][11] = 0;
				break;
			}
			else {
				printf("Digite apenas Sim ou Nao!\n");
			}
		}

		for (;;) {
			printf("Sexo biologico masculino (Sim ou Nao): ");
			scanf("%9s", resposta);

			if (strcmp(resposta, "Sim") == 0) {
				dados[i][12] = 1;
				break;
			}
			else if (strcmp(resposta, "Nao") == 0) {
				dados[i][12] = 0;
				break;
			}
			else {
				printf("Digite apenas Sim ou Nao!\n");
			}
		}

		printf("\nPaciente %d cadastrado com sucesso!\n", i + 1);
	}

	printf("\n========== PACIENTES CADASTRADOS ==========\n");

	for (int i = 0; i < qnt_paciente; i++) {

		printf("\nPaciente %d\n", i + 1);
		printf("Nome: %s\n", nome[i]);
		printf("Idade: %.0f\n", dados[i][0]);
		printf("Pressao sistolica: %.0f\n", dados[i][1]);
		printf("Tabagismo: %.0f\n", dados[i][2]);
		printf("Diabetes: %.0f\n", dados[i][3]);
		printf("Historico cardiaco: %.0f\n", dados[i][4]);
		printf("Colesterol LDL: %.2f\n", dados[i][5]);
		printf("Peso: %.2f\n", dados[i][6]);
		printf("Altura: %.2f\n", dados[i][7]);
		printf("Sedentarismo: %.0f\n", dados[i][8]);
		printf("Alimentacao ultraprocessada: %.0f\n", dados[i][9]);
		printf("Estresse cronico: %.0f\n", dados[i][10]);
		printf("Sono inadequado: %.0f\n", dados[i][11]);
		printf("Sexo biologico masculino: %.0f\n", dados[i][12]);
	}

	int numerica[5][12] = {0};
    int pontuacao_risco[5] = {0};

    float imc;

    for (int i = 0; i < qnt_paciente; i++) {
    

        if(dados[i][0] >= 65){
            numerica[i][0] = 3;
        }
    
    
    
        if(dados[i][1] >= 160){
            numerica[i][1] = 3;
        }
    
    
        if(dados[i][2] == 1){
            numerica[i][2] = 3;
        }
    
    
        if(dados[i][3] == 1){
            numerica[i][3] = 2;
        }
    
    
        if(dados[i][4] == 1){
            numerica[i][4] = 2;
        }
    
    
        if(dados[i][5] >= 160){
            numerica[i][5] = 2;
        }
    
    
        if (dados[i][7] > 0) {
            imc = dados[i][6] / (dados[i][7] * dados[i][7]);

            if (imc >= 30) {
            numerica[i][6] = 2;
            }
        }
    
        if(dados[i][8] == 1){
            numerica[i][7] = 1;
        }
    
    
        if(dados[i][9] == 1){
            numerica[i][8] = 1;
        }
    
    
        if(dados[i][10] == 1){
            numerica[i][9] = 1;
        }
    
    
        if(dados[i][11] == 1){
            numerica[i][10] = 1;
        }
    
    
        if(dados[i][12] == 1){
            numerica[i][11] = 1;
        }
        
        for (int j = 0; j < 12; j++) {
        pontuacao_risco[i] += numerica[i][j];
        }
    }
    
    printf("\n===================================\n");
    printf("       SISTEMA DE ANALISE DE RISCO\n");
    printf("===================================\n\n");
    
    printf("Quantidade de pacientes: %d\n\n", qnt_paciente);
    
    for (int i = 0; i < qnt_paciente; i++) {
        printf("Paciente %d: %s\n", i + 1, nome[i]);
    }
    
    printf("\n\n===================================\n");
    printf("             RELATORIO DE RISCO\n");
    printf("===================================\n\n");
    
    for (int i = 0; i < qnt_paciente; i++) {
    
        printf("Paciente: %s\n", nome[i]);
    
        if (pontuacao_risco[i] <= 4) {
            printf("Classificacao: Menor de 10%%\n");
        }
        else if (pontuacao_risco[i] <= 9) {
            printf("Classificacao: Entre 10%% e 20%%\n");
        }
        else if (pontuacao_risco[i] <= 14) {
            printf("Classificacao: Entre 20%% e 30%%\n");
        }
        else if (pontuacao_risco[i] <= 18) {
            printf("Classificacao: Entre 30%% e 50%%\n");
        }
        else if (pontuacao_risco[i] <= 22) {
            printf("Classificacao: Acima de 50%%\n");
        }
        else {
            printf("Classificacao: Fora das faixas estabelecidas\n");
        }
    
        printf("\n\n");
    }
    


	return 0;
}