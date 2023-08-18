#include <stdio.h>

int main(){
int i, j, matriz [3][3];



for (i=0; i<3; i++)
for (j=0; j<3; j++){
	
	printf("Elemento [%d][%d]:", i, j);
	scanf("%d", &matriz [i][j]);
}

printf("\n MATRIZ 3x3: \n");
 
 
 for (i=0; i<3; i++){
 for (j=0; j<3; j++)
	
	printf("%d ", matriz[i][j]);
	printf("\n");
	
}

 for (i=0; i<3; i++)
 for (j=0; j<3; j++)
	
	matriz [i][j] = matriz [i][j]*5;
	
	
	
	printf("\n Matriz 3x3 multiplicada por 5: \n");
	
	for (i=0; i<3; i++){
 	for (j=0; j<3; j++)
	
	printf("%d ", matriz[i][j]);
	printf("\n");
	
	}	
}
	
	

