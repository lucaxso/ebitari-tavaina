#include <stdio.h>
#include <string.h>


void ExibirQuadrado( char** lenX, char** lenY){
	for (short i = 0; i < short(lenX); i++){
		for (short j = 0; j < short(lenY); j++){
			printf("%c", '.' );
		}
		printf("\n");
	}
}
