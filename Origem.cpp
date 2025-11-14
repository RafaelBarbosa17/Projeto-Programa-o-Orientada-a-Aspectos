#include <string>
#include <iostream>

class Conta {
public:

	float saldo = 0.0;

	float Sacar(float valor) {
		if (saldo >= valor) {
			saldo -= valor;
			std::cout << "O valor de: " << "foi sacado com sucesso!";
		}
		else {
			std::cout << "Saldo insuficiente!";
		}
		return 0;
	}

	float Depositar(float valor) {
		saldo += valor;
		return 0;
	}
	
	public : void calcularValorTarifaManutencao() {
		int operation;
		std::cout << "Digite 1 para sacar ou 2 para depositar:";
		std::cin >> operation;

		if (operation == 1) {
			float valor;
			std::cout << "Digite um valor para o sacar: ";
			std::cin >> valor;
			Sacar(valor);
		}
		else if (operation == 2) {
			float valor;
			std::cout << "Digite um valor para o depositar: ";
			std::cin >> valor;
			Depositar(valor);
		}
		else {
			std::cout << "Operação desconhecida!";
		}
	}

};

int main() {

	Conta corrente{
		corrente.saldo = 1500.0
	};
	Conta poupanca{
		poupanca.saldo = 4500.0
	};

	std::cout << "Qual conta deseja acessar? \n Digite 1 para conta corrente e 2 para conta Poupança:";
	int operation;
	std::cin >> operation;
	if (operation == 1) {
		corrente.calcularValorTarifaManutencao();
	}
	if (operation == 2) {
		poupanca.calcularValorTarifaManutencao();
	}

	return 0;
}