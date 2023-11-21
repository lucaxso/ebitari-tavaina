#include <stdio.h>
#include "exibir.h"

void ExibirQuadrado( short x, short y){
	for (short i = 0; i < y; i++){
		for (short j = 0; j < x; j++){
			printf("%c", '.' );
		}
		printf('\n');
	}
}
