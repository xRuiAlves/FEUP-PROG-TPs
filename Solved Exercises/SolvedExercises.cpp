#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>


using namespace std;

const double PI = 3.14159265359;

int rmes(long long int n);
int dmes(long long int n);
int rmas(long long int n);
int dmas(long long int n);
int sizeOfNum(long long int n);
bool capicua(int n);
int fac(int n);
double distance(double x1, double y1, double x2, double y2);
double area(double x1, double y1, double x2, double y2, double x3, double y3);
bool isPrime(int n);
int casasDecimais(long double n);
double raiz(double n, int nMaxIter, double delta);
double round(double x, int n);
bool readFracc(int &numerator, int &denominator);
void writeFracc(int numerator, int denominator);
void reduceFracc(int &numerator, int &denominator);
void somaFracc(int n1, int d1, int n2, int d2);
void subFracc(int n1, int d1, int n2, int d2);
void multFracc(int n1, int d1, int n2, int d2);
void divFracc(int n1, int d1, int n2, int d2);
bool bissexto(int n);
int ndias(int mes, int ano);
int diasemana(int d, int m, int a);
string returndia(int ds);
void returnmes(int mes);
int factorial_ite(int n);
int factorial_rec(int n);
unsigned int euclides(unsigned int m, unsigned int n);
double integrateTR(double (f)(double), double a, double b, int n);
double gx(double n);
double hx(double n);
bool isHydroxide(char compound[]);
bool isHydroxide(string compound);
bool sequenceSearch(string s, int nc, char c);
void decompose(string compound);
string normalizeName(string name);
void readIntArray(int a[], int nElem);
void displayArray(const int a[], int nElem);
int searchValueInIntArray(const int a[], int nElem, int value);
int searchMultValuesInIntArray(const int a[], int nElem, int value, int index[]);
void readIntVector(vector<int> &v, int nElem);
void readIntVector(vector<int> &v);
void displayVector(const vector<int> &v);
int searchValueInVector(const vector<int> &v, int value);
vector<int> searchMultValuesInIntVector(const vector<int> &v, int value);
void intbubblesort(vector<int> &v);
void bubblesort(vector<string> &v);
void readStringVector(vector<string> &v);
void displayVector(const vector<string> &v);
void removeDuplicates(vector<int> &v);
bool findElem(const vector<int> &v, int n);
vector<string> readFile(string FileName);
void writeFile(vector<string> &data, string fileName);
vector<int> vecunion(const vector<int> &v1, const vector<int> &v2);
vector<int> vecintersection(const vector<int> &v1, const vector<int> &v2);
double executeOperation(string op);
int binarySearch(const vector<string> &v, string value);

struct Fraction {
	int numerator;
	int denominator;
};

Fraction readFraccS(int n1, int n2);
void writeFraccS(Fraction f);
void reduceFraccS(Fraction &f);
void somaFraccS(Fraction f1, Fraction f2);
void subFraccS(Fraction f1, Fraction f2);
void multFraccS(Fraction f1, Fraction f2);
void divFraccS(Fraction f1, Fraction f2);


int main() {

	/*
	Exercicio 4.13
	vector<string> fileData;
	string fileName;

	cout << "Insira o nome do ficheiro(ex: 'file_name.txt'): " << endl;
	cin >> fileName;

	cout << "\n\nData in the file: " << endl;
	fileData = readFile(fileName);
	displayVector(fileData);

	bubblesort(fileData);

	cout << "\n\nData sorted: " << endl;
	displayVector(fileData);

	writeFile(fileData, fileName);
	*/

	/*
	Exericio 4.12
	double res;
	string op;

	cout << "Insira uma operacao : " << endl;
	getline(cin, op);

	res = executeOperation(op);
	cout << "\nRESULTADO: " << res << "\n\n";*/



	/*
	Exercicio 4.11
	vector<int> v1, v2, vu, vi;

	//Input para os vetores
	cout << "Insira os valores para v1: " << endl;
	readIntVector(v1);
	cin.clear();
	cout << "\nInsira os valores para v2: " << endl;
	readIntVector(v2);


	//Processar reunião e interseção
	vu = vecunion(v1, v2);
	vi = vecintersection(v1, v2);

	//Display da reunião e interseção
	cout << "\nReuniao: " << endl;
	displayVector(vu);
	cout << "\nIntersecao: " << endl;
	displayVector(vi);

	cout << "\n\n";
	*/




	/*
	Exercicio 4.10
	vector<int> vec;

	cout << "Insira numero ('ctrl + z' para terminar): " << endl;
	readIntVector(vec);

	removeDuplicates(vec);
	intbubblesort(vec);

	cout << "Result: " << endl;
	displayVector(vec);
	
	cout << "\n\n";*/

	/*
	Exericio 4.9
	vector<string> vec;
	string s;

	//Construir vetor
	cout << "Insira o vetor de nomes:\n";
	readStringVector(vec);
	cout << "\nO vetor que inseriu:\n";
	displayVector(vec);

	//Ordenar vetor
	bubblesort(vec);
	cout << "\n\nO vetor ordenado:\n";
	displayVector(vec);

	//Pedir elemento
	cout << "\n\nInsira um elemento para procurar no vetor: ";
	cin >> s;

	//Display do resultado
	cout << "Resultado: " << binarySearch(vec, s) << "\n\n";
	*/
	
	/*
	Exercicio 4.8
	vector<string> s;
	
	cout << "Insira nomes ('ctrl+z' para terminar): " << endl;
	readStringVector(s);

	bubblesort(s);

	cout << "\nResultado: ";
	displayVector(s);
	cout << endl << endl;*/

	/*
	Exercicio 4.7 A e B
	vector<int> vec, ind;
	int n, n2, v;

	cout << "Insira o numero de elementos do vector: ";
	cin >> n;
	readIntVector(vec, n);

	cout << "\nInsira um elemento para saber a posicao: ";
	cin >> v;
	n2 = searchValueInVector(vec, v);
	cout << "Result: " << n2 << '\n';


	cout << "\nInsira um elemento para saber as posicoes: ";
	cin >> v;
	ind = searchMultValuesInIntVector(vec, v);
	displayVector(ind);
	cout << '\n';*/
	

	
	/*
	Exercicio 4.6 E
	int arr[100], ind[100];
	int n, c, v;

	cout << "Ola! Insira quantos elementos quer no seu array: ";
	cin >> n;

	readIntArray(arr, n);

	cout << "\nInsira um numero para pesquisar no array: ";
	cin >> v;

	c = searchMultValuesInIntArray(arr, n, v, ind);

	displayArray(ind, c);*/
	

	/*
	Exercicio 4.6 C
	int arr[100], n, v;

	cout << "Ola! Insira quantos elementos quer no seu array: ";
	cin >> n;

	readIntArray(arr, n);

	cout << "\nInsira um numero para pesquisar no array: ";
	cin >> v;
	
	cout << "\nPosicao no array: " << searchValueInIntArray(arr, n, v) << endl << endl;*/

	/*
	Exercicio 4.5
	int n1, n2, op;
	char c;
	Fraction f1,f2;

	while (true) {
		cout << "Insira a fracao 1 (n/d): ";
		cin >> n1 >> c >> n2;
		if (c == '/') {
			f1 = readFraccS(n1, n2);
			break;
		}
	}

	while (true) {
		cout << "Insira a fracao 2 (n/d): ";
		cin >> n1 >> c >> n2;
		if (c == '/') {
			f2 = readFraccS(n1, n2);
			break;
		}
	}

	do {
		cout << "Enter an operation: \n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n";
		cin >> op;
	} while (op < 1 || op>4);

	switch (op) {
	case 1:
		somaFraccS(f1, f2);
		break;
	case 2:
		subFraccS(f1, f2);
		break;
	case 3:
		multFraccS(f1, f2);
		break;
	case 4:
		divFraccS(f1, f2);
	}
	cout << endl;*/
	

	/*
	Exercicio 4.4
	string s1;
	
	cout << "Introduza um nome para normalizar:" << endl;
	getline(cin, s1);

	cout << "\nResultado: " << normalizeName(s1) << endl << endl;
	*/

	/*
	Exercicio 4.3
	string s1 = "H2O";
	string s2 = "KOH";
	string s3 = "H2O2";
	string s4 = "NaCl";
	string s5 = "NaOH";
	string s6 = "C9H8O4";
	string s7 = "MgOH";

	decompose(s1);
	decompose(s2);
	decompose(s3);
	decompose(s4);
	decompose(s5);
	decompose(s6);
	decompose(s7);

	cout << endl;*/


	/*
	Exercicio 4.2
	string frase;
	char c;
	int nc;

	while (true) {
		cout << "Frase ? ";
		getchar();
		getline(cin, frase);
		cout << "Carater ? ";
		cin >> c;
		cout << "Numero carateres ? ";
		cin >> nc;

		cout << endl;

		if (sequenceSearch(frase, nc, c))
			cout << "Yap!" << endl << endl;
		else
			cout << "Nope!" << endl << endl;
	}*/



	/*
	Exercicio 4.1 B
	string s1 = "KOH";
	string s2 = "H2O2";
	string s3 = "NaCL";
	string s4 = "NaOH";
	string s5 = "C9H8O4";
	string s6 = "MgOH";

	cout << "KOH: " << isHydroxide(s1) << endl;
	cout << "H2O2: " << isHydroxide(s2) << endl;
	cout << "NaCL: " << isHydroxide(s3) << endl;
	cout << "NaOH: " << isHydroxide(s4) << endl;
	cout << "C9H8O4: " << isHydroxide(s5) << endl;
	cout << "MgOH: " << isHydroxide(s6) << endl << endl;*/ 


	/*
	Exercicio 4.1 A
	char c1[] = "KOH";
	char c2[] = "H2O2";
	char c3[] = "NaCL";
	char c4[] = "NaOH";
	char c5[] = "C9H8O4";
	char c6[] = "MgOH";


	cout << "KOH: " << isHydroxide(c1) << endl;
	cout << "H2O2: " << isHydroxide(c2) << endl;
	cout << "NaCL: " << isHydroxide(c3) << endl;
	cout << "NaOH: " << isHydroxide(c4) << endl;
	cout << "C9H8O4: " << isHydroxide(c5) << endl;
	cout << "MgOH: " << isHydroxide(c6) << endl << endl;*/



	/*
	Exercicio 3.9
	double a, b;
	int n;

	cout << "g(x)\n\n";
	a = 0;
	b = 10;
	n = 2;
	for (n = 2; n <= 128; n *= 2) {
		cout << "N = " << n << " :  " << integrateTR(gx, a, b, n) << endl;
	}

	cout << "\n\nh(x)\n\n";
	a = -2;
	b = 2;
	n = 2;
	for (n = 2; n <= 128; n *= 2) {
		cout << "N = " << n << " :  " << integrateTR(hx, a, b, n) << endl;
	}*/

	/*
	Exercicio 3.8
	int a, b;
	while (true) {
		cout << "> ";
		cin >> a >> b;
		cout << "\nEuc: " << euclides(a, b) << endl;
	}*/


	/*
	Exercicio 3.7 A e B
	long int n;
	
	cout << "N: ";
	cin >> n;

	cout << "\nIte: " << factorial_ite(n) << endl;
	cout << "\nRec: " << factorial_rec(n) << endl;*/

	
	
	
	/*
	Exercicio 3.6 D e E
	int ano;

	cout << "Insira um ano: ";
	cin >> ano;

	cout << "\n ***************************" << endl;
	cout << " ********** " << ano << " ***********" << endl;
	cout << " ***************************\n\n" << endl;


	for (int j = 1; j <= 12; j++) {
		int d = 2;
		int dt = ndias(j, ano), primeirodia = diasemana(1, j, ano);


		cout << "\n";
		returnmes(j);
		
		cout << "\tDom\tSeg\tTer\tQua\tQui\tSex\tSab" << endl;

		switch (primeirodia) {
		case 0:
			cout << "\t\t\t\t\t\t\t";
			break;
		case 1:
			cout << "\t";
			break;
		case 2:
			cout << "\t\t";
			break;
		case 3:
			cout << "\t\t\t";
			break;
		case 4:
			cout << "\t\t\t\t";
			break;
		case 5:
			cout << "\t\t\t\t\t";
			break;
		case 6:
			cout << "\t\t\t\t\t\t";
		}

		cout << "1";

		while (d <= dt) {
			if (diasemana(d, j, ano) == 1)
				cout << "\n\t" << d;
			else
				cout << "\t" << d;
			d++;
		}
		cout << endl << endl;
	}*/

	/*
	Exercicio 3.6 C
	int d, m, a;
	string s;

	cout << "Insira o dia mes e ano, separados por um espaco: ";
	cin >> d >> m >> a;
	
	int ds = diasemana(d, m, a);
	s = returndia(ds);

	cout << "\nO dia da semana: " << s << endl << endl;*/



	/*
	Exercicio 3.5
	int n1, d1, n2, d2, op;

	cout << "Insira a primeira fracao: ";
	readFracc(n1, d1);
	cout << "Insira a segunda fracao: ";
	readFracc(n2, d2);
	

	do {
		cout << "Que operacao deseja efetuar?\n1.Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n";
		cin >> op;
	} while (op <= 0 || op > 4);

	cout << endl << "Resposta: ";
	switch (op) {
	case 1:
		somaFracc(n1, d1, n2, d2);
		break;
	case 2:
		subFracc(n1, d1, n2, d2);
		break;
	case 3:
		multFracc(n1, d1, n2, d2);
		break;
	case 4:
		divFracc(n1, d1, n2, d2);
	}
	cout << endl << endl;*/
	
	

	/*Exercicio 3.4
	double x, result;
	int n;

	cout << "Insira um valor 'x' para arredondar e a quantidade 'n' de casas \ndecimais do arredondamento, separados por um espaco: ";
	cin >> x >> n;

	result = round(x, n);

	cout << "\nResultado do arredondamento: " << result << endl << endl;*/



	/*Exercicio 3.3 A e B
	double n, delta;
	int nMaxIter;

	cout << "Indique o valor de n(raiz a calcular): ";
	cin >> n;
	cout << "Indique a quantidade de iteracoes: ";
	cin >> nMaxIter;
	cout << "Indique o delta de paragem: ";
	cin >> delta;

	cout << "\nResultado: " << raiz(n, nMaxIter, delta) << endl << endl;

	cout << "Diferença para a raiz quadrada original: " << abs(sqrt(n) - raiz(n, nMaxIter, delta)) << endl << endl;*/
	
	/*
	Exercicio 3.2
	
	int num;

	cout << "Insira um numero para testar se e primo: ";
	cin >> num;

	if (isPrime(num)) {
		cout << endl << "Primo!!" << endl << endl;
	}
	else {
		cout << endl << "Nao e primo... " << endl << endl;
	}*/


	/*
	Exercicio 3.1
	double x1, y1, x2, y2, x3, y3;
	cout << "Insira as coordenadas do ponto 1: ";
	cin >> x1 >> y1;
	cout << "Insira as coordenadas do ponto 2: ";
	cin >> x2 >> y2;
	cout << "Insira as coordenadas do ponto 3: ";
	cin >> x3 >> y3;

	cout << endl << "A area do triangulo e " << area(x1, y1, x2, y2, x3, y3) << " ." << endl << endl;*/


	/*
	Exercicio 2.15
	srand(time(NULL));


	int n1 = rand()%8 + 2;
	int n2 = rand() % 8 + 2;
	int guess, rw = n1*n2;



	long long int ti = time(0);
	
	cout << n1 << " * " << n2 << " ? ";
	cin >> guess;

	long long int tf = time(0) - ti;

	cout << endl << "Tempo da resposta: " << tf << " segundos!!" << endl << endl;

	if (guess != rw) {
		cout << "Muito mau! " << endl << endl;
	}
	else if (tf < 5) {
		cout << "Bom! " << endl << endl;
	}
	else if (tf <= 10) {
		cout << "Satisfaz! " << endl << endl;
	}
	else {
		cout << "Insuficiente...! " << endl << endl;
	}*/


	/*Exercicio 2.14 A e B

	double n, delta, diff, rq=1, rqn;
	int c=0, nMaxIter;
	
	

	cout << "Indique o valor de n(raiz a calcular): ";
	cin >> n;
	cout << "Indique a quantidade de iteracoes: ";
	cin >> nMaxIter;
	cout << "Indique o delta de paragem: ";
	cin >> delta;

	int resultprecision = casasDecimais(delta);
	cout.precision(resultprecision);
	cout << fixed;

	do {
		rqn = (rq + n / rq) / 2;
		rq = rqn;
		diff = abs( n - (rq*rq));
		c++;
	} while (c < nMaxIter && diff >= delta);

	cout << "\nSolucao: " << rq << endl << endl;*/





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
	cout << endl << "->  " << (int) c << endl;*/
	
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

double distance(double x1, double y1, double x2, double y2){
	double resultado = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

	return resultado;
}
double area(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a = distance(x1, y1, x2, y2);
	double b = distance(x1, y1, x3, y3);
	double c = distance(x2, y2, x3, y3);
	double s = (a + b + c) / 2;
	double area = sqrt(s*(s - a)*(s - b)*(s - c));

	return area;
}

bool isPrime(int n) {
	for (int i = 2; i < n/2 ; i++) {
		if (n%i == 0)
			return false;
	}
	return true;
}

int casasDecimais(long double n) {
	
	int c = 0;


	while (n - (int)n != 0) {
		c++;
		n *= 10;
	}

	return c;

}

double raiz(double n, int nMaxIter, double delta) {

	double diff, rq=1, rqn;
	int c=0;


	int resultprecision = casasDecimais(delta);
	cout.precision(resultprecision);
	cout << fixed;

	do {
	rqn = (rq + n / rq) / 2;
	rq = rqn;
	diff = abs( n - (rq*rq));
	c++;
	} while (c < nMaxIter && diff >= delta);

	return rq;
}

double round(double x, int n) {
	
	double result;
	
	x = x * pow(10, n);
	
	double temp = x * 10;
	int casa = (int)temp % 10;
	
	x = (int)x;

	if (casa % 10 >= 5)
		x++;
	result = x / (pow(10, n));

	return result;
}

bool readFracc(int &numerator, int &denominator) {
	
	int num, den;
	char c;
	
	cin >> num >> c >> den;
	
	if (c == '/') {
		numerator = num;
		denominator = den;
		return true;
	}
	else {
		numerator = 0;
		denominator = 0;
		return false;
	}
}

void writeFracc(int numerator, int denominator) {
	cout << numerator << "/" << denominator;
}



void reduceFracc(int &numerator, int &denominator) {
	int gcd = euclides(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
}

void somaFracc(int n1, int d1, int n2, int d2) {
	int temp = d1;
	n1 *= d2;
	d1 *= d2;
	n2 *= temp;
	d2 *= temp;
	int denom = d2;
	int num = n1 + n2;
	reduceFracc(num, denom);
	writeFracc(num, denom);

}

void subFracc(int n1, int d1, int n2, int d2) {
	int temp = d1;
	n1 *= d2;
	d1 *= d2;
	n2 *= temp;
	d2 *= temp;
	int denom = d2;
	int num = n1 - n2;
	reduceFracc(num, denom);
	writeFracc(num, denom);
}

void multFracc(int n1, int d1, int n2, int d2) {
	int num = n1*n2;
	int denom = d1*d2;
	reduceFracc(num, denom);
	writeFracc(num, denom);
}

void divFracc(int n1, int d1, int n2, int d2) {
	int num = n1*d2;
	int denom = d1*n2;
	reduceFracc(num, denom);
	writeFracc(num, denom);
}

bool bissexto(int n) {
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		return true;
	else 
		return false;
}

int ndias(int mes, int ano) {
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
		return 31;
	}
	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		return 30;
	}
	else {
		if (bissexto(ano))
			return 29;
		return 28;
	}

}

int diasemana(int d, int m, int a) {
	
	int c;
	int s = a / 100;
	int ano = a % 100;
	int floor = (5 * ano) / 4;

	switch (m) {
	case 1:
		if (bissexto(a))
			c = 6;
		else
			c = 0;
		break;
	case 2:
		if (bissexto(a))
			c = 2;
		else
			c = 3;
		break;
	case 3:
		c = 3;
		break;
	case 4:
		c = 6;
		break;
	case 5:
		c = 1;
		break;
	case 6:
		c = 4;
		break;
	case 7:
		c = 6;
		break;
	case 8:
		c = 2;
		break;
	case 9:
		c = 5;
		break;
	case 10:
		c = 0;
		break;
	case 11:
		c = 3;
		break;
	case 12:
		c = 5;
	}

	return ((floor + c + d - 2 * (s % 4) + 7) % 7);
}

string returndia(int ds) {
	switch (ds) {
	case 0:
		return "Sabado";
		break;
	case 1:
		return "Domingo";
		break;
	case 2:
		return "Segunda-Feira";
		break;
	case 3:
		return "Terca-Feira";
		break;
	case 4:
		return "Quarta-Feira";
		break;
	case 5:
		return "Quinta-Feira";
		break;
	case 6:
		return "Sexta-Feira";
	}
}

void returnmes(int mes) {
	switch (mes) {
	case 1:
		cout << "Janeiro" << endl;
		break;
	case 2:
		cout << "Fevereiro" << endl;
		break;
	case 3:
		cout << "Marco" << endl;
		break;
	case 4:
		cout << "Abril" << endl;
		break;
	case 5:
		cout << "Maio" << endl;
		break;
	case 6:
		cout << "Junho" << endl;
		break;
	case 7:
		cout << "Julho" << endl;
		break;
	case 8:
		cout << "Agosto" << endl;
		break;
	case 9:
		cout << "Setembro" << endl;
		break;
	case 10:
		cout << "Outubro" << endl;
		break;
	case 11:
		cout << "Novembro" << endl;
		break;
	case 12:
		cout << "Dezembro" << endl;
		break;
	}
}

int factorial_ite(int n) {
	long int result = n;
	
	if (n == 0 || n==1)
		return 1;
	
	for (long int i = (n - 1); i >= 2; i--) {
		result *= i;
	}
	
	return result;
}

int factorial_rec(int n) {
	long int result;

	if (n == 0) {
		result = 1;
		return result;
	}
	else {
		result = n * factorial_rec(n - 1);
		return result;
	}
}

unsigned int euclides(unsigned int m,unsigned  int n) {

	if (m < n) {
		m += n;
		n = m - n;
		m -= n;
	}

	while (m%n != 0) {
		m += n;
		n = m - n;
		m -= n;
		n %= m;
	}

	return n;
}

double integrateTR(double (f)(double), double a, double b, int n) {
	
	double h = (b - a) / n;
	double resultado = 0;

	for (int i = 1; i <= n; i++) {
		resultado += h / 2 * (f(a + (i - 1)*h) + f(a + i*h));
	}

	return resultado;
}

double gx(double n) {
	return (n*n);
}

double hx(double n) {
	return (sqrt(4 - (n*n)));
}

bool isHydroxide(char compound[]) {

	int n = 0;

	while (true) {
		if (compound[n] == '\0') {
			n++;
			break;
		}
		n++;
	}

	if (n < 3)
		return false;

	if (compound[n - 2] == 'H' && compound[n - 3] == 'O')
		return true;
	else
		return false;
}

bool isHydroxide(string compound) {
	int n = compound.size();

	if (n < 2)
		return false;
	if (compound.at(n - 1) == 'H' && compound.at(n - 2) == 'O')
		return true;
	else
		return false;
}

bool sequenceSearch(string s, int nc, char c) {
	int n = s.size();
	bool ret = false;

	for (int i = 0; i < n; i++) { // tantas iteracoes quanto carateres
		if (s.at(i) == c) {   // se o carater atual for o desejado
			for (int j = i; j < i + nc; j++) {   //ver se ha nc carateres seguidos iguais a c
				if (s.at(j) == c) {   //se o carater atual for o desejado, ret fica a true temporariamente
					ret = true;
				}
				else {       // mal encontra um carater nao desejado nos "nc" carateres a seguir a um desejado, sai do loop
					ret = false;
					break;
				}
			}
		}
		if (ret)   // se ja tiver encontrado uma sequencia de nc carateres iguais a c, retorna true
			return ret;
	}

	return ret; // nao encontrou a sequencia
}

void decompose(string compound) {
	int n = compound.size();

	if (n > 0) {
		cout << compound.at(0);
		for (int i = 1; i < n; i++) {
			char c = compound.at(i);
			if (c >= 'A' && c <= 'Z')
				cout << " " << compound.at(i);
			else if (c >= 'a' && c <= '<')
				cout << compound.at(i);
		}
	}

	cout << endl << endl;
}

string normalizeName(string name) {

	string arr[6] = { " DE ", " DO ", " DA ", " DAS ", " DOS " , " E " };

	int n = name.size();
	
	while (name.at(0) == ' ') {    // limpar espacos no inicio
		name.erase(name.begin());
	}

	n = name.size();

	for (int i = (n - 1); i >= 0; i--) {   // limpar espacos no fim
		if (name.at(i) == ' ')
			name.erase(name.begin() + i);
		else
			break;
	}


	n = name.size();

	for (int i = 0; i < n; i++) {   // trocar minusculas para maiusculas
		char c1 = name.at(i);
		int temp = (int)c1;
		char c2 = (char)(c1 - 32);
		string stemp = "";
		stemp += c2;

		if (c1 >= 'a' && c1 <= 'z')
			name.replace(i, 1, stemp);
	}


	for (int i = 0; i <= 5; i++) {   // limpas elemetos no array
		while (true) {
			n = name.size();
			if (n > 0) {
				int temp = name.find(arr[i]);
				if (temp >= 0 && temp < n)
					name.erase(temp, (arr[i].size() - 1));
				else
					break;
			}
		}
	}

	while (true) {    // limpar duplos espacos
		n = name.size();
		if (n > 0) {
			int temp = name.find("  ");
			if (temp >= 0 && temp < n)
				name.erase(temp, 1);
			else
				break;
		}
	}

	return name;
}



Fraction readFraccS(int n1, int n2) {

	Fraction f1 = { n1,n2 };

	return f1;
}

void writeFraccS(Fraction f) {
	cout << f.numerator << '/' << f.denominator;
}

void reduceFraccS(Fraction &f){
	int gcd = euclides(f.numerator, f.denominator);
	f.numerator /= gcd;
	f.denominator /= gcd;
}

void somaFraccS(Fraction f1, Fraction f2) {
	int temp = f2.denominator;
	f2.numerator *= f1.denominator;
	f2.denominator *= f1.denominator;
	f1.denominator *= temp;
	f1.numerator *= temp;
	Fraction result = { f1.numerator + f2.numerator,f1.denominator };
	reduceFraccS(result);
	writeFraccS(result);
}

void subFraccS(Fraction f1, Fraction f2) {
	int temp = f2.denominator;
	f2.numerator *= f1.denominator;
	f2.denominator *= f1.denominator;
	f1.denominator *= temp;
	f1.numerator *= temp;
	Fraction result = { f1.numerator + f2.numerator,f1.denominator };
	reduceFraccS(result);
	writeFraccS(result);
}

void multFraccS(Fraction f1, Fraction f2) {
	Fraction result;
	result.numerator = f1.numerator * f2.numerator;
	result.denominator = f1.denominator * f2.denominator;
	reduceFraccS(result);
	writeFraccS(result);
}

void divFraccS(Fraction f1, Fraction f2) {
	Fraction result;
	result.numerator = f1.numerator * f2.denominator;
	result.denominator = f1.denominator * f2.numerator;
	reduceFraccS(result);
	writeFraccS(result);
}

void readIntArray(int a[], int nElem) {
	for (int i = 0; i < nElem; i++) {
		cout << "Elemento " << i << ": ";
		cin >> a[i];
	}
}

int searchValueInIntArray(const int a[], int nElem, int value) {
	for (int i = 0; i < nElem; i++) {
		if (a[i] == value)
			return i;
	}
	return -1;
}

int searchMultValuesInIntArray(const int a[], int nElem, int value, int index[]) {
	int c = 0;
	for (int i = 0; i < nElem; i++) {
		if (a[i] == value) {
			index[c] = i;
			c++;
		}
	}

	return c;
}

void displayArray(const int a[], int nElem) {
	for (int i = 0; i < nElem; i++) {
		cout << "Elem. " << i << " :  " << a[i] << endl;
	}
}

void readIntVector(vector<int> &v, int nElem) {
	int n;

	for (int i = 0; i < nElem; i++) {
		cout << "Elemento " << i << ": ";
		cin >> n;
		v.push_back(n);
	}
}
int searchValueInVector(const vector<int> &v, int value) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == value)
			return i;
	}

	return -1;
}

vector<int> searchMultValuesInIntVector(const vector<int> &v, int value) {
	vector<int> v2;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == value) {
			v2.push_back(i);
		}
	}

	return v2;
}

void displayVector(const vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

void intbubblesort(vector<int> &v) {
	bool flag = true;
	int size = v.size(), temp;
	while (flag) {
		flag = false;
		for (int i = 0; i < (size - 1) ; i++) {
			if (v[i + 1] < v[i]) {
				flag = true;
				v[i] += v[i + 1];
				v[i + 1] = v[i] - v[i + 1];
				v[i] -= v[i + 1];
			}
		}
	}
}

void readIntVector(vector<int> &v) {
	int n;

	while (true) {
		cout << "Elemento " << v.size() << ": ";
		cin >> n;
		if (cin.eof())
			break;
		v.push_back(n);
	}
}

void bubblesort(vector<string> &v) {
	bool flag = true;
	int c;
	string temp;

	while (flag) {
		flag = false;
		for (int i = 0; i < (v.size() -1); i++) {
			c = v[i+1].compare(v[i]);
			if (c < 0) {
				flag = true;
				temp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = temp;
			}
		}
	}
}

void readStringVector(vector<string> &v) {
	string s;

	while (true) {
		cout << "Elemento " << v.size() << ": ";
		cin >> s;
		if (cin.eof()) {
			cin.clear();
			break;
		}
		v.push_back(s);
	}
}

void displayVector(const vector<string> &v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

void removeDuplicates(vector<int> &v) {
	vector<int> aux;

	for (int i = 0; i < v.size(); i++) {
		if (!findElem(aux, v[i])) {
			aux.push_back(v[i]);
		}
	}

	v = aux;
}

vector<string> readFile(string FileName) {

	string linha;
	vector<string> FileData;
	ifstream inFile;
	inFile.open(FileName);

	while (!inFile.eof()) {
		inFile >> linha;
		FileData.push_back(linha);
	}

	inFile.close();

	return FileData;



}

void writeFile(vector<string> &data, string fileName) {

	string sorted = "_sorted";
	for (int i = 0; i < sorted.size(); i++) {
		fileName.insert(fileName.begin() + fileName.size() - 4, sorted.at(i));
	}

	ofstream outFile;
	outFile.open(fileName);

	for (int i = 0; i < data.size(); i++) {
		outFile << data[i] << '\n';
	}

	outFile.close();


}

vector<int> vecunion(const vector<int> &v1, const vector<int> &v2) {
	vector<int> vec;
	
	for (int i = 0; i < v1.size(); i++) {
		vec.push_back(v1[i]);
	}
	for (int i = 0; i < v2.size(); i++) {
		vec.push_back(v2[i]);
	}

	removeDuplicates(vec);
	intbubblesort(vec);
	
	return vec;
}
vector<int> vecintersection(const vector<int> &v1, const vector<int> &v2) {
	vector<int> vec2;

	for (int i = 0; i < v1.size(); i++) {
		if (findElem(v2, v1[i])) {
			vec2.push_back(v1[i]);
		}
	}

	removeDuplicates(vec2);
	intbubblesort(vec2);

	return vec2;
}


bool findElem(const vector<int> &v, int n) {
	if (v.size() == 0)
		return false;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == n)
			return true;
	}

	return false;
}

double executeOperation(string op) {

	double a, b, res = 1;
	char c;
	int p;

	while (true) {
		p = op.find(' ');

		if (p < 0 || p >= op.size())
			break;

		op.erase(op.begin() + p);
	}

	stringstream ss;
	ss << op;
	ss >> a;
	ss >> c;
	ss >> b;
	if (ss.eof())
		cout << "zsofhjpous";

	if (c != '+' && c != '-' && c != '*' && c != 'x' && c != '/' && c != ':' && c != '^') {
		cout << "\nOperacao Invalida!! \n\n";
		return 0;
	}

	switch (c) {
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
	case 'x':
		return a * b;
		break;
	case '^':
		return pow(a, b);
		break;
	case '/':
	case ':':
		return a / b;
	}
	
}

int binarySearch(const vector<string> &v, string value) {
	int bottom = 0, top = (v.size() - 1), middle;

	while (bottom <= top) {
		
		middle = (top + bottom) / 2;

		
		if (v[middle] == value) {
			return middle;
		} else if (v[middle].compare(value) < 0) {
			bottom = middle + 1;
		} else {
			top = middle - 1;
		}
	}

	return -1;
}
