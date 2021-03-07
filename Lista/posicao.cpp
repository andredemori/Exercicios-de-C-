#include <iostream>

void posicao(double pi, double vi, double ac);

int main(){
	
	double s0,v0t,a;
	
	std::cout << "Digite a posicao inicial." << "\n";
	std::cin >> s0;
	
	std::cout << "\n";
	
	std::cout << "Digite a velocidade inicial." << "\n";
	std::cin >> v0t;
	
	std::cout << "\n";
	
	std::cout << "Digite a aceleracao." << "\n";
	std::cin >> a;
	
	std::cout << "\n";
	
	
	//chamar função
	
	posicao(s0,v0t,a);
	
	
	system("pause");
	return 0;
}


//Área de funções

void posicao(double pi, double vi, double ac){
	
		int t = 0;
	
		for(int i = 0; i <= 10; i++){
				
			double S = pi + vi*t + 1/2*ac*t*t;
				
			std::cout << "Posicao da particula com t = " << t << " = " << S << "\n";
			
			t++;
				
		}
	
	
}

