#include <iostream>
#include <cmath>

	double soma(double q, double b) {
		return q + b;
	}

	double subtra(double q, double b) {
			return q - b;
		}

	double divisao(double q, double b) {
		return q / b;
	}

	double multiplica(double q, double b) {
		return q * b;
	}

	double pot(double q, double b) {
		return pow(q, b);
	}

	double expo(double q) {
	    return exp(q);
	}

int main(int argc, char** argv) {

	char operacao;
	double numeroA;
	double numeroB;

	double resultados;

	std::cout << "Escolha uma operação" << std::endl;
		std::cin >> operacao;



	switch (operacao) {
		case '+':
			std::cout << "Digite o primeiro número" << std::endl;
			std::cin >> numeroA;
			std::cout << "Digite o segundo número" << std::endl;
			std::cin >> numeroB;
			resultados = soma(numeroA, numeroB);
			break;
		case '/':
			std::cout << "Digite o primeiro número" << std::endl;
			std::cin >> numeroA;
			std::cout << "Digite o segundo número" << std::endl;
			std::cin >> numeroB;
			resultados = divisao(numeroA, numeroB);
			break;
		case '*':
			std::cout << "Digite o primeiro número" << std::endl;
			std::cin >> numeroA;
			std::cout << "Digite o segundo número" << std::endl;
			std::cin >> numeroB;
			resultados = multiplica(numeroA, numeroB);
			break;
		case '-':
			std::cout << "Digite o primeiro número" << std::endl;
			std::cin >> numeroA;
			std::cout << "Digite o segundo número" << std::endl;
			std::cin >> numeroB;
			resultados = subtra(numeroA, numeroB);
			break;
		case '^':
			std::cout << "Digite a base" << std::endl;
			std::cin >> numeroA;
			std::cout << "Digite o exponencial" << std::endl;
			std::cin >> numeroB;
			resultados = pot(numeroA, numeroB);
			break;
		case 'e':
			std::cout << "Digite o número" << std::endl;
			std::cin >> numeroA;
			resultados = expo(numeroA);
			break;
	}

	std::cout << resultados << std::endl;
}
