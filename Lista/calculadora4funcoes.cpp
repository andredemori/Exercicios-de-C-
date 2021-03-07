#include <iostream>

void soma(double n1, double n2);
void sub(double nu1, double nu2);
void mult(double nume1, double nume2);
void div(double numero1, double numero2);


int main(){
	
	double num1,num2;
	
	std::cout << "Digite o primeiro numero:\n";
	std::cin >> num1;
	
	std::cout << "Digite o segundo numero:\n";
	std::cin >> num2;	
	std::cout << "\n";
	
	// Chamada das funções

	soma(num1,num2);
	sub(num1,num2);
	mult(num1,num2);
	div(num1,num2);
	
	system("pause");
	return 0;
}


//Área de funções

void soma(double n1, double n2){
	
	double soma = n1 + n2;
	
	std::cout << "Soma = " << soma << "\n";
	
}

void sub(double nu1, double nu2){
	
	double subtracao = nu1 - nu2;
	
	std::cout << "Subtracao = " << subtracao << "\n";
	
}

void mult(double nume1, double nume2){
	
	double multiplicacao = nume1 * nume2;
	
	std::cout << "Multiplicacao = " << multiplicacao << "\n";
	
}

void div(double numero1, double numero2){
	
	if(numero2 == 0){
		std::cout << "Nao existe divisao por zero.\n";
	}else{
	
	double divisao = numero1 / numero2;
	
	std::cout << "Divisao = " << divisao << "\n";

	}
}

