#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159265359;

int rmes(long long int n);
int dmes(long long int n);
int rmas(long long int n);
int dmas(long long int n);
int sizeOfNum(long long int n);
bool capicua(int n);
int fac(int n);

int main() {




	/*Exercicio 2.13
	int n;

	cout << "Insira um numero para obter a sua decomposicao em fatores primos: ";
	cin >> n;

	do {
		for (int i = 2; i <= n; i++) {
			if (i == n) {
				cout << n;
				n = n / i;
				break;
			}
			if (n%i == 0) {
				cout << i << "x";
				n = n / i;
				break;
			}
		}
	} while (n != 1);

	cout << endl << endl;*/

	/*Exercicio 2.11 B)
	int n;
	long double result = 0;
	cout << "Insira n: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		result += (long double)1 / fac(i - 1);
	}

	cout << endl << "Result: " << result << endl << endl;*/


	/*
	Exericio 2.11 A)
	cout.precision(10);

	long long int n, d = 1;
	double result = 0;

	cout << "Insira o n: ";
	cin >> n;

	for (long long int i = 1; i <= n; i++,d+=2) {
		if (i % 2 == 0) {
			result -= (float)4 / d;
		}
		else {
			result += (float)4 / d;
		}
	}

	cout << endl << "Result: " << result << endl << endl;

	/*Exercicio 2.10
	long long int num;

	cout << "Insira um numero para testar se e capicua: ";
	cin >> num;


	if (capicua(num)) {
		cout << "\nCapicua! " << endl << endl;
	}
	else {
		cout << "Nao capicua..." << endl;
	}*/




	

	/*Exercio 2.9 B)
	int soma = 0, max, min, comp, n;
	
	cout << "Indique o comprimento da sequencia: " << endl;
	cin >> comp;

	for (int i = 1; i <= comp; i++) {
		cout << "Introduze um valor: ";
		cin >> n;
		if (i == 1) {
			max = n;
			min = n;
		}
		if (n > max)
			max = n;
		if (n < min)
			min = n;
		soma += n;
	
	}

	cout << "\nMinimo: " << min << endl;
	cout << "Maximo: " << max << endl;
	cout << "Media: " << (float)soma / comp << endl << endl;*/




	/*
	Exercicio 2.9 A)

	int menor = 999999 , maior = -999999, c = 0, soma = 0 , n;

	while(true){
		cout << "Insira um numero: ";
		cin >> n;
		if (n == 0)
			break;
		c++;
		soma += n;
		if (n < menor)
			menor = n;
		if (n > maior)
			maior = n;
	} 

	cout << "Cumprimento da sequêcia: " << c;
	cout << endl << "Maximo: " << maior << endl;
	cout << "Minimo: " << menor << endl;
	cout << "Media: " << (float)soma / c << endl;
*/


	/*
	Exercicio 2.8

	double q, j;
	int n;

	cout << "Quantia a depositar(euros): ";
	cin >> q;
	cout << "Taxa de juros(%): ";
	cin >> j;
	cout << "Ao fim de quantos anos: ";
	cin >> n;

	double m = q;

	for (int i = 1; i <= n; i++) {
		m += 0.01*j*m;
	}

	cout << endl << "Montante: " << m << endl << endl;


	/*
	Exercicio 2.7

	cout.precision(6);
	cout << fixed;

	double n1, n2;
	int inc;
	
	

	cout << "Insira o intervalo de valores que deseja, separados por um espaco: ";
	cin >> n1 >> n2;
	cout << "Insira o incremento: ";
	cin >> inc;
	cout << endl;

	cout << "ang\t\tsen\t\tcos\t\ttan" << endl;
	
	for (double i = n1; i <= n2; i += inc) {
		cout << i << "\t" << sin(i*PI/180) << "\t" << cos(i*PI/180) << "\t";
		if (i == 90 || i == 270) {
			cout << "infinito" << endl;
		}
		else {
			cout << tan(i*PI/180) << endl;
		}
	}


	/*
	Exercicio 2.6

	int n;
	bool prime;

	cout << "1 " << "\t";

	for (int i = 2; i < 10000; i++) {
		prime = true;
		n = sqrt(i);
		for (int j = 2; j <= n; j++) {
			if (i%j == 0) {
				prime = false;
				break;
			}
		}
			
		if (prime)
			cout << i << "\t";
	}

	/*
	alinea a)

	int p;
	bool prime = true;

	cout << "Prime ? ";
	cin >> p;

	int n = sqrt(p);

	for (int i = 2; i <= n; i++) {
		if (p%i == 0) {
			prime = false;
			break;
		}
	}

	cout << endl << (prime ? "E primo!" : "Nao e primo...") << endl;



	/*
	Exercicio 2.5

	double a, b, c;

	cout << "*** FORMULA RESOLVENTE ***" << endl;
	
	cout << "Insira A, B e C separados por um espaco: ";
	cin >> a >> b >> c;

	cout << endl << "Resultado: ";

	if (b*b - 4*a*c == 0) {
		cout << (-b + sqrt(b*b - 4 * a*c)) / 2 * a << endl;
	}
	else if (b*b - 4 * a*c < 0) {
		cout << -b / 2 * a << "+" << sqrt(abs(b*b - 4 * a*c)) << "i";
		cout << " e ";
		cout << -b / 2 * a << "-" << sqrt(abs(b*b - 4 * a*c)) << "i" << endl;
	}
	else {
		cout << (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
		cout << " e ";
		cout << (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
	}

	/*
	Exercicio 2.4

	int m;
	double preco;

	cout << "Insira a massa da mercadoria (gramas) :  ";
	cin >> m;

	if (m < 500) {
		preco = 5;
	}
	else if (m <= 1000) {
		preco = 5 + ((m - 500) / 100)*1.5;
		if ((m - 500) % 100 != 0)
			preco += 1.5;
	}
	else {
		preco = 12.5 + ((m - 1000) / 250) * 5;
		if ((m - 1000) % 250 != 0) {
			preco += 5;
		}
	}

	cout << endl << "Preco a pagar: " << preco << " euros." << endl;





	/*
	Exercicio 2.3

	double n1, n2;
	char c;

	cout << "Insira a operacao que deseja fazer: ";
	cin >> n1 >> c >> n2;

	cout << endl << "Resultado: ";

	switch (c) {
	case '+':
		cout << n1 + n2 << endl << endl;
		break;
	case '-':
		cout << n1 - n2 << endl << endl;
		break;
	case '*':
		cout << n1 * n2 << endl << endl;
		break;
	case '/':
		cout << n1 / n2 << endl << endl;
		break;
	default:
		cout << "-------\n !! OPERACAO INVALIDA !! " << endl << endl;
	}




	/*
	Exercicio 2.2

	double n1, n2, n3, maior, pequeno1, pequeno2;
	cout << "Insira 3 numeros separados por um espaco: ";
	cin >> n1 >> n2 >> n3;

	//a)
	if (n1 > n2 && n1 > n3) {
		maior = n1;
		pequeno1 = n2;
		pequeno2 = n3;
		cout << "maior: " << n1 << endl;
	}
	else if (n2 > n3) {
		maior = n2;
		pequeno1 = n1;
		pequeno2 = n3;
		cout << "maior: " << n2 << endl;
	}
	else {
		maior = n3;
		pequeno1 = n1;
		pequeno2 = n2;
		cout << "maior: " << n3 << endl;
	}

	//b)
	cout << endl << "Numero em ordem decrescente: ";
	if (n1 >= n2 && n2 >= n3) {
		cout << n1 << " " << n2 << " " << n3 << endl;
	}
	else if (n1 >= n3 && n3 >= n2) {
		cout << n1 << " " << n3 << " " << n2 << endl;
	}
	else if (n2 >= n1 && n1 >= n3) {
		cout << n2 << " " << n1 << " " << n3 << endl;
	}
	else if (n2 >= n3 && n3 >= n1) {
		cout << n2 << " " << n3 << " " << n1 << endl;
	}
	else if (n3 >= n1 && n1 >= n2) {
		cout << n3 << " " << n1 << " " << n2 << endl;
	}
	else
	{
		cout << n3 << " " << n2 << " " << n1 << endl;
	}

	//c)
	if ((pequeno1 + pequeno2) <= maior) {
		cout << endl << "Nao e possivel construir triangulo." << endl << endl;
	}
	else {
		cout << endl << "E possivel contruir triangulo." << endl << endl;
	}




	/*
	Exericio 2.1

	double a, b, c, d, e, f, x, y;

	cout << "a*x + b*y = c" << endl << "d*x + e*y = f" << endl << endl;
	cout << "Este programa resolve o sistema de equacoes." << endl;
	cout << "A ? "; cin >> a;
	cout << "B ? "; cin >> b;
	cout << "C ? "; cin >> c;
	cout << "D ? "; cin >> d;
	cout << "E ? "; cin >> e;
	cout << "F ? "; cin >> f;

	x = (c*e - b*f) / (a*e - b*d);
	y = (a*f - c*d) / (a*e - b*d);



	if ((a == 0 && b == 0 && c != 0) || (d == 0 && e == 0 && f != 0)) {
		cout << "Sistema impossivel!" << endl;
	} else if ((int)(a*e - b*d) == 0) {
		cout << "Sistema indeterminado!" << endl;
	} else {
		cout << endl << "X: " << x << endl << "Y: " << y << endl;
	}






	/*
	Exercicio 1.6

	double x1, y1, x2, y2, x3, y3, a, b, c, sp, area;

	cout << "Insira as coordenadas do ponto 1: ";
	cin >> x1 >> y1;
	cout << "Insira as coordenadas do ponto 2: ";
	cin >> x2 >> y2;
	cout << "Insira as coordenadas do ponto 3: ";
	cin >> x3 >> y3;

	a = sqrt((x2 - x1)*(x2 - x1) - (y2 - y1)*(y2 - y1));
	b = sqrt((x3 - x2)*(x3 - x2) - (y3 - y2)*(y3 - y2));
	c = sqrt((x3 - x1)*(x3 - x1) - (y3 - y1)*(y3 - y1));

	sp = (a + b + c) / 2;

	area = sqrt(sp*(sp - a)*(sp - b)*(sp - c));

	cout << "Area: " << a << endl;




	/*
	Exercicio 1.5

	int h1, h2, m1, m2, s1, s2, df, hf, mf, sf;
	long long int total;


	cout << "Tempo 1 (horas minutos segundos) ? ";
	cin >> h1 >> m1 >> s1;
	cout << "Tempo 2 (horas minutos segundos) ? ";
	cin >> h2 >> m2 >> s2;

	total = s1 + s2 + 60 * m1 + 60 * m2 + 3600 * h1 + 3600 * h2;
	df = total / (3600 * 24);
	hf = (total % (3600 * 24)) / 3600;
	mf = ((total % (3600 * 24)) % 3600) / 60;
	sf = (((total % (3600 * 24)) % 3600) % 60);

	cout << "Soma dos tempos: " << df << " dias, " << hf << " horas, " << mf << " minutos e " << sf << " segundos" << endl;






	/*
	Exercicio 1.4

	double a, b, c, d, e, f, x, y;

	cout << "a*x + b*y = c" << endl << "d*x + e*y = f" << endl << endl;
	cout << "Este programa resolve o sistema de equacoes." << endl;
	cout << "A ? "; cin >> a;
	cout << "B ? "; cin >> b;
	cout << "C ? "; cin >> c;
	cout << "D ? "; cin >> d;
	cout << "E ? "; cin >> e;
	cout << "F ? "; cin >> f;

	x = (c*e - b*f) / (a*e - b*d);
	y = (a*f - c*d) / (a*e - b*d);

	cout << endl << "X: " << x << endl << "Y: " << y << endl;




	/*
	Exercicio 1.3

	double p, r, m;

	cout << "Insira a massa volumica (Kg/m^3) :  ";
	cin >> p;
	cout << "Insira o raio da esfera (m^3) :  ";
	cin >> r;

	m = 4 / 3 * (PI*p*r*r*r);

	cout << "Massa :  " << m << " Kg" << endl;



	/*
	Exercicio 1.2

	int a, b, c;

	cout.precision(3);

	cout << "A ? ";
	cin >> a;
	cout << "B ? ";
	cin >> b;
	cout << "C ? ";
	cin >> c;

	float media = (float)(a + b + c) / 3;

	cout << "media   = " << fixed << media << endl;
	cout << "A-media = " << fixed << a - media << endl;
	cout << "B-media = " << fixed << b - media << endl;
	cout << "C-media = " << fixed << c - media << endl;



	
	Exercício 1.1

	char c;

	cout << "Enter a char: ";
	cin >> c;
	cout << endl << "->  " << (int) c << endl;
	*/

	return 0;

}

int dmas(long long int n) {
	return n / pow(10, sizeOfNum(n)-1);
}

int dmes(long long int n) {
	return n % 10;
}

int rmas(long long int n) {
	int p = pow(10, sizeOfNum(n) - 1);
	return n  % p;
}

int rmes(long long int n) {
	return n / 10;
}


int sizeOfNum(long long int n) {
	int q = 0;
	while (n > 0) {
		q++;
		n /= 10;
	}

	return q;
}

bool capicua(int n) {
	if (n < 10) {
		return true;
	}
	else if (dmas(n) != dmes(n)) {
		return false;
	}
	else {
		n = rmas(n);
		n = rmes(n);
		capicua(n);
	}
}

int fac(int n) {
	double res = 1;

	if (n == 0) {
		return 1;
	}

	for (int i = 1; i <= n; i++) {
		res *= i;
	}

	return res;
}
