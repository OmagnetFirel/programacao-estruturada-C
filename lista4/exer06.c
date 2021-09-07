#include<stdio.h>

int oposto (int n) {
   int oposto = 0, i = n;
   if( n > 0 ) {
	   while( i != 0 ) {
	   	oposto--;
		i--;
	   }
   } else {
	   while( i != 0 ) {
	   	oposto++;
		i++;
	   }
   }
   return oposto;
}

int absoluto (int n) {
   int absoluto = 0, i = n;
   if( n > 0 ) return n;
   while( i != 0 ) {
   	absoluto++;
	i++;
   }
   return absoluto;
}

int subtracao (int n1, int n2) {
   int i = 0, cont = n2;

   if ( n2 < 0 ) cont = n2 * -1;

   for(; i < cont; i++) {
	   n1--;
   }
   return n1;
}
int adicao (int n1, int n2) {
   int i = 0, cont = n2;

   if ( n2 < 0 ) cont = n2 * -1;

   for(; i < cont; i++) {
	   n1++;
   }
   return n1;
}
int multiplicacao (int n1, int n2) {
	int resultado = 0;
	int cont1 = n1, cont2 = n2;

	if ( n1 < 0  ) cont1 = n1 * -1;
	if ( n2 < 0  ) cont2 = n2 * -1;

	if ( n1 < 0 || n2 < 0 ) {
        for(int i = 0; i < cont1; i++) {
            for(int j = 0; j < cont2; j++) {
                resultado--;
            }
        }
	} else {
	    for(int i = 0; i < cont1; i++) {
            for(int j = 0; j < cont2; j++) {
                resultado++;
            }
        }
	}

	return resultado;
}
int divisao (int n1, int n2) {
	int resultado = 0;
	int cont1 = n1, cont2 = n2;

    if( n1 < 0 ) cont1 *= -1;
    if( n2 < 0 ) cont2 *= -1;

    if ( n1 < 0 || n2 < 0 ) {
        while ( cont2 <= cont1 ) {
            resultado--;
            cont1 -= cont2;
        }
    } else {
        while ( cont2 <= cont1 ) {
            resultado++;
            cont1 -= cont2;
        }
    }

	return resultado;
}


int restoDivisao(int n1, int n2) {
    int div = divisao(n1, n2);
    int mult = multiplicacao(div, n2);
    int resto = subtracao(n1, mult);
    return resto;
}

int main ( void ) {
	int n1 = 0, n2 = 0;

	printf("Digite dois numeros: ");
	scanf("%d%d", &n1, &n2);

	printf("Oposto: %d", oposto(n1));
	printf("\nAbsoluto: %d", absoluto(n1));
	printf("\nSubtracao: %d", subtracao(n1, n2));
	printf("\nAdicao: %d", adicao(n1, n2));
	printf("\nMultiplicacao: %d", multiplicacao(n1, n2));
	printf("\nDivisao: %d", divisao(n1, n2));
	printf("\nResto divisao: %d", restoDivisao(n1, n2));

	return 0;
}









