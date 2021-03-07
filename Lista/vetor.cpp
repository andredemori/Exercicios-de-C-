#include <iostream>

void zeravetor(int v[10]);
void alteravalor(int vet[10]);

int main(){
	
	int vetor[10];
	int vetor2[10];
	
	
	//Chamar funções
	zeravetor(vetor);
	std::cout  << "\n";
	zeravetor(vetor2);
	std::cout  << "\n";
	alteravalor(vetor);
	
	system("pause");
	return 0;
}

//Área de funções

void zeravetor(int v[10]){
	

		for(int i = 0; i <= 9; i++){
				
			v[i] = 0;
				
		}
			
		for(int i = 0; i <= 9; i++){
				
			std::cout  << v[i] << "\n";
				
		}
	
}

void alteravalor(int vet[10]){
	
		int x = 0;
	
		for(int i = 0; i <= 9; i++){
				
			vet[i] = x;
			x++;
				
		}
		
		for(int i = 0; i <= 9; i++){
				
			std::cout  << vet[i] << "\n";
				
		}
	
}

