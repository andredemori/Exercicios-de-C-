#include <iostream>


//prototipar funções

void potencia(int b, int ex);


int main(){
	
	int base,exp;
	
		std::cout << "Digite a base." << "\n";
		std::cin >> base;
		
		std::cout << "\n";
		
		std::cout << "Digite o expoente." << "\n";
		std::cin >> exp;
		
		std::cout << "\n";
		
	//Chamar funções

	potencia(base,exp);
	
	system("pause");
	return 0;
}

//Área de funções

void potencia(int b, int ex){ 
	
	int result;
	int mult;
	
	mult = b; 
	
	for(int i = 1; i < ex; i++){ 
	
	mult = b*mult; 
	
	}
	
	
	
	std::cout << "Resultado = " << mult << "\n";
	
}
