#include <stdio.h>
#include <math.h>

mensagem(){
	printf("\nCalculo realizado");
}

float trocaValor(float valor){
	valor = 30.5;
	return valor;
}

void trocaValorReferencia(float *n){
	*n = 50.5;
}

double raiz(double n){
	int res = sqrt(n);
	mensagem();
	return res;
}


main(){

	float n = 3.0;
	float r;
	double numero = 4.0;
	double resultadoRaiz;
	
	r = trocaValor(n);
	
	printf("%f", n);
	
	trocaValorReferencia(&n);
	printf("\n%f", n);
	
	resultadoRaiz = raiz(numero);
	printf("\n%lf", resultadoRaiz);
	
	
	return 0;
}
