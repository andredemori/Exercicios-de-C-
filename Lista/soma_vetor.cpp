#include <iostream>

void somavetor(float v[10]);

int main(){
	
	float vetor[10];

			vetor[0] = 10;
			vetor[1] = 10;
			vetor[2] = 10;
			vetor[3] = 10;
			vetor[4] = 10;
			vetor[5] = 10;
			vetor[6] = 10;
			vetor[7] = 10;
			vetor[8] = 10;
			vetor[9] = 10;
			
		//chamar função
		
		somavetor(vetor);
	
	
	system("pause");
	return 0;
}

//Área de funções

void somavetor(float v[10]){
	
		float *p;
		p = v;
		float somavetor = 0;
	
		for(int i = 0; i <= 9; i++){
				
			somavetor = somavetor + *p;
			p++;
				
			}
			
			std::cout << somavetor << "\t" << "\n";
	
}










