#include <stdio.h>
#include <math.h>


int main() 
{



// Questao 1

	int n1;
	int n2;
	int n3;
	int n4;
	float soma;
	
	printf("Insira o valor de n1 ");
	scanf("%d", &n1);

	printf("Insira o valor de n2 ");
	scanf("%d", &n2);
	
	printf("Insira o valor de n3 ");
	scanf("%d", &n3);

	printf("Insira o valor de n4 ");
	scanf("%d", &n4);

	soma = n1 + n2 + n3 + n4;
	
	printf("Soma dos valores%2.f", soma);


// Questao 2	
	int n1,n2,n3;
	float media_aritimetica;
	
	printf("digite o valor de n1 ");
	scanf("%d",&n1);
	
	printf("digite o valor de n2 ");
	scanf("%d",&n2);
	
	printf("digite o valor de n3 ");
	scanf("%d",&n3);
	
	
	
	media_aritimetica = (n1 + n2 + n3)/3;
	
	printf("%.2f",media_aritimetica);
	
	
// Questao 3
	
	//declaracao das variaveis
	
	float nota1,nota2,nota3;
	float peso1,peso2,peso3;
	float media_ponderada
	
	//captura dos valores
	
	printf("digite a nota1 ");
	scanf("%f",& nota1);
	printf("digite o peso1");
	scanf("%f",& peso1);
	
	
	printf("digite a nota2 ");
	scanf("%f",& nota2);
	printf("digite o peso2");
	scanf("%f",& peso2);
	
	
	printf("digite a nota3 ");
	scanf("%f",& nota3)
	printf("digite o peso3");
	scanf("%f",& peso3);
	
	//calculo da media
	
	media_ponderada = (nota1 * peso1) + (nota 2 * peso2) + (nota3 * peso3)/(peso1 + peso2 + peso3);
	
	
// Questao 4
	
	
	float Salario;
	float percentual;
	float Salario_pos_Aumento;
	float Novo_Salario;
	float Aumento;
	
	printf("Insira o Salario:\n");
	scanf("%f", & Salario);
	printf("Insira o percentual:\n");
	scanf("%f", & percentual);
	
	Aumento = Salario * (percentual/100);
	Novo_Salario = Salario + Aumento;
	
	printf("Valor pos aumento:\n%2.f",Novo_Salario);
	
	
// Questao 5	
		
	float Salario;
	float Novo_Salario;
	float Aumento;
	
	printf("Insira o Salario:\n");
	scanf("%f", & Salario);

	
	Aumento = Salario * 25/100;
	Novo_Salario = Salario + Aumento;
	
	printf("Valor pos aumento:\n%2.f",Novo_Salario);
	
	
// Questao 6	
	
	float Salario;
	float imposto;
	float gratificacao;
	float Salario_liquido;
	
	printf("Insira seu Salario:\n");
	scanf("%f", & Salario);
	
	gratificacao = Salario * 5/100;

	imposto = Salario * 7/100;

	Salario_liquido = Salario + gratificacao - imposto;
	
	printf("Salario liquido:\n%2.f", Salario_liquido);
	

// Questao 7 
	
	float Salario;
	float imposto;
	float gratificacao;
	float Salario_liquido;
	
	printf("Insira seu Salario:\n");
	scanf("%f", & Salario);
	

	imposto = Salario * 10/100;

	Salario_liquido = Salario + 50 - imposto;
	
	printf("Salario liquido:\n%2.f", Salario_liquido);
	
	
// Questao 8 

	float Deposito;
	float juros;
	float rendimento, valor_total;
	
	printf("Insira o valor do deposito:\n");
	scanf("%f",& Deposito);
	
	printf("Insira a taxa de Juros:\n");
	scanf("%f", & juros);
	
	
	rendimento = Deposito * (juros/100);
	valor_total = rendimento + Deposito;
	
	printf("Rendimento:%2.f", rendimento);
	
	printf("\nValor total:%2.f", valor_total);
	
	
// Questao 9

	float area;
	float base;
	float altura;
	
	printf("Insira a base:\n");
	scanf("%f", &base);
	
	printf("Insira a altura:\n");
	scanf("%f", & altura);
	
	area = (base * altura)/2;
	
	printf("Area do triangulo:%2.f", area);
	
	
// Questao 10


	float raio;
	float area;
	
	printf("Insira o raio:\n");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	
	printf("Area do circulo:\n%2.f", area);
	
	
	
// Questao 11


	float numero;
	float quadrado;
	float cubo;
	
	printf("Insiro o numero:\n");
	scanf("%f",&numero);
	
	
	quadrado = numero * numero;
	
	cubo = numero * numero * numero;
	
//a)
	printf("Quadrado:%2.f", quadrado);
	
	
	
//b)	
	printf("\nCubo: %2.f", cubo);

	
//c) : d)
	
	double numero_raizq;
	double numero_raizc;

	printf("Insira o numera da raiz quadrada:\n");
	scanf("%lf", &numero_raizq);
	
	printf("Insira o numera da raiz cubica:\n");
	scanf("%lf", &numero_raizc);
	
	
	double raiz_quadrada = sqrt(numero_raizq);
	
	double raiz_cubica = pow(numero_raizc,3);
	
	printf("Resultado:\n %.lf", raiz_quadrada);
	
	printf("\nResultado:\n %.lf", raiz_cubica);
	

// Questao 12 

	float numero;
	float elevador;


	printf("Insira o valor:\n");
	scanf("%f", &numero);
	
	elevador = numero * numero;
	
	printf("valor elevado ao quadrado:\n%2.f",elevador);
	
	
// Questao 13

	float pe;
	float jarda;
	float milha;
	float medida;
	float polegada;
	
	printf("Insira a medida\n");
	scanf("%f", & medida);
	
	polegada = 12 * medida;
	
	jarda = medida/3;
	
	milha = (medida/3)/1760; 
	
	printf("Medida em Polegadas:%2.f",polegada);
	
	printf("\nMedida em Jardas:%2.f", jarda);
	
	printf("\nMedida em Milhas:%f", milha);
	
	
// Questao 14

	float ano;
	float idade;
	float idade_futura;
	
	printf("Insira o ano de nascimento:\n");
	scanf("%f", &ano);
	
	idade = 2026 - ano;
	idade_futura = 2050 - ano;
	
	printf("Idade atual:\n%2.f", idade);
	
	printf("\nIdade em 2050:\n%2.f",idade_futura);
	

// Questao 15 

	float preco_fabrica;
	float lucro;
	float imposto;
	float vendedor_lucro;
	float preco_final;
	float valor_imposto;
	
	printf("Insira o preco de fabrica:\n");
	scanf("%f", & preco_fabrica);

	printf("Insira o imposto:\n");
	scanf("%f", & imposto);

	printf("Insira o lucro:\n");
	scanf("%f", & lucro);
	
	valor_imposto = (imposto/100 * preco_fabrica);

	vendedor_lucro = preco_fabrica * lucro/100;
	
	preco_final =  valor_imposto + vendedor_lucro + preco_fabrica;

	printf("Valor correspondente ao lucro do distribuidor\n%2.f", vendedor_lucro);

	printf("\nValor correspondente aos impostos\n%2.f",valor_imposto);
	
	printf("\nPreco final do veiculo\n%2.f",preco_final);



// Questao 16

	
	
	float horas;
	float valor_h;
	float salario_bruto;
	float imposto;
	float salario_liquido;




	printf("Insira a quantidade de horas trabalhadas:\n");
	scanf("%f", &horas);

	printf("Insira o valor da hora de trabalho:\n");
	scanf("%f", &valor_h);

	salario_bruto = horas * valor_h;

	printf("Salario bruto:\n%2.f", salario_bruto);

	imposto = salario_bruto * 3/100;

	printf("\nImposto pago:\n%2.f", imposto);

	salario_liquido = salario_bruto - imposto;

	printf("\nSalario liquido:\n%2.f", salario_liquido);


// Questao 17


	float deposito;
	float taxa1;
	float taxa2;
	float cheque1;
	float cheque2;
	
	printf("Insira o valor do deposito:\n");
	scanf("%f", &deposito);
	
	taxa1 = deposito * 0.38/100;
	
	cheque1 = deposito - taxa1;
	
	printf("Saldo apos o 1 cheque:\n%2.f",cheque1);
	
	
	taxa2 = cheque1 * 0.38/100;
	
	cheque2 = cheque1 - taxa2;
	
	
	printf("\nSaldo atual:\n%2.f",cheque2);


// Questao 18

	float saco;
	float racao;
	float quantidade;
	
	printf("Insira o peso do saco de racao em kg:\n");
	scanf("%f", &saco);
	
	printf("Insira a quantidade de racao que 1 gato come diariamente em gramas:\n");
	scanf("%f", &racao);
	
	
	quantidade = (saco * 1000) - (racao * 10);
 
	printf("Quantidade restante de racao apos 5 dias\n%2.f", quantidade);





	
	return 0;


}
