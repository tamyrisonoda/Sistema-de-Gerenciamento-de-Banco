/*********************************************************************/
/**   ACH2001 - Introducao a Programacao                            **/
/**   EACH-USP - Primeiro Semestre de 2021                          **/
/**   <94> - <Luciano Digiampietri>                                 **/
/**                                                                 **/
/**   Terceiro Exercicio-Programa                                   **/
/**                                                                 **/
/**   <Tamyris Ayumy Nascimento Onoda>          <12731401>          **/
/**                                                                 **/
/*********************************************************************/

#include <stdio.h>


#define pecaX 'X'
#define pecaY 'O'
#define espacoVazio ' '

#define true 1
#define false 0




int verificaStatus(char tabuleiro[][3]) {

    int status = -1;

	if (tabuleiro[0][0]==' ' && tabuleiro[0][1]==' ' && tabuleiro[0][2]==' ' && 
	tabuleiro[1][0]==' ' && tabuleiro [1][1]==' ' && tabuleiro [1][2]==' ' &&
	tabuleiro [2][0]==' ' && tabuleiro [2][1]==' ' && tabuleiro [2][2]==' '){
		return 0;
	}
	if (tabuleiro [0][0]=='X' && tabuleiro [0][1]== 'X' && tabuleiro [0][2]== 'X' || 
	tabuleiro [1][0]=='X' && tabuleiro [1][1]=='X'&& tabuleiro  [1][2]=='X' ||
	tabuleiro [2][0]=='X' && tabuleiro [2][1]=='X' && tabuleiro [2][2]=='X' ||
	tabuleiro [0][0]=='X' && tabuleiro [1][1]=='X' && tabuleiro [2][2]=='X' ||
	tabuleiro [0][2]=='X' && tabuleiro [1][1]=='X' && tabuleiro [2][0]=='X' ||
	tabuleiro [0][0]=='X' && tabuleiro [1][0]=='X' && tabuleiro [2][0]=='X' ||
	tabuleiro [0][1]=='X' && tabuleiro [1][1]=='X' && tabuleiro [2][1]=='X' ||
	tabuleiro [0][2]=='X' && tabuleiro [1][2]=='X' && tabuleiro [2][2]=='X'){ 
		return 1;
	}
    if (tabuleiro [0][0]=='O' && tabuleiro [0][1]== 'O' && tabuleiro [0][2]== 'O' || 
	tabuleiro[1][0]== 'O' && tabuleiro [1][1]=='O' && tabuleiro [1][2]=='O' ||
	tabuleiro [2][0]=='O' && tabuleiro [2][1]=='O' && tabuleiro [2][2]=='O' ||
	tabuleiro [0][0]=='O' && tabuleiro [1][1]=='O' && tabuleiro [2][2]=='O' ||
	tabuleiro [0][2]=='O' && tabuleiro [1][1]=='O' && tabuleiro [2][0]=='O' ||
	tabuleiro [0][0]=='O' && tabuleiro [1][0]=='O' && tabuleiro [2][0]=='O' ||
	tabuleiro [0][1]=='O' && tabuleiro [1][1]=='O' && tabuleiro [2][1]=='O' ||
	tabuleiro [0][2]=='O' && tabuleiro [1][2]=='O' && tabuleiro [2][2]=='O'){
		return 2;
	}
	if (tabuleiro[0][0]!=' ' && tabuleiro[0][1]!=' ' && tabuleiro[0][2]!=' ' && 
	tabuleiro[1][0]!=' ' && tabuleiro [1][1]!=' ' && tabuleiro [1][2]!=' ' &&
	tabuleiro [2][0]!=' ' && tabuleiro [2][1]!=' ' && tabuleiro [2][2]!=' '){
	
		return 3;
		
		
	} else 
	return 4;
	
	return status;
	}




int main(){
	char tab0[][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	char tab1[][3] = {{'X','X','X'},{'O','O',' '},{' ',' ',' '}};
	char tab2[][3] = {{'O','X','X'},{'X','O','O'},{' ',' ','O'}};
	char tab3[][3] = {{'O','X','X'},{'X','O','O'},{'O','X','X'}};
	char tab4[][3] = {{' ',' ',' '},{'X','O','X'},{' ',' ',' '}};

	printf("Status calculado: %i\n", verificaStatus(tab0));
	printf("Status esperado para o tabuleiro0: 0\n\n");

	printf("Status calculado: %i\n", verificaStatus(tab1));
	printf("Status esperado para o tabuleiro1: 1\n\n");

	printf("Status calculado: %i\n", verificaStatus(tab2));
	printf("Status esperado para o tabuleiro2: 2\n\n");
	
	printf("Status calculado: %i\n", verificaStatus(tab3));
	printf("Status esperado para o tabuleiro1: 3\n\n");
	
	printf("Status calculado: %i\n", verificaStatus(tab4));
	printf("Status esperado para o tabuleiro4: 4\n\n");
	
	return 0;
}


/* SAIDA ESPERADA:
Status calculado: 0
Status esperado para o tabuleiro0: 0

Status calculado: 1
Status esperado para o tabuleiro1: 1

Status calculado: 2
Status esperado para o tabuleiro2: 2

Status calculado: 3
Status esperado para o tabuleiro1: 3

Status calculado: 4
Status esperado para o tabuleiro4: 4
*/
