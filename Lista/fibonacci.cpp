#include <iostream>

//prototipar funções

long long int fibonacci(int n);
long long int fibonacci2(int n);


int main(){
	

    long long int n;
    
    std::cout << "Escolha o termo da sequencia de fibonnaci: " << "\n";
    std::cin >> n;
    
    std::cout << "\n";
    
    std::cout << "Funcao iterativa: " << "\n";
    std::cout << "Posicao "<< n << " da sequencia de fibonnaci = " << fibonacci(n) << "\n";
    
    std::cout << "\n";
    
    std::cout << "Funcao Recursiva: " << "\n";
    std::cout << "Posicao "<< n << " da sequencia de fibonnaci = " << fibonacci2(n) << "\n";


}

//Área de funções

//Função Iterativa

long long int fibonacci(int n){
	
    long long int cont;
    long long int x = 0, y = 1;
    
    if(n % 2 == 0){ //se n for par
    
        for(cont = 2; cont != n; cont = cont + 2){
        
		    x = x + y; 
            y = x + y;
        
		}
		
        return y;
        
    }else{
    	
        for(cont = 1; cont != n; cont = cont + 2){ // se n for ímpar
            
			x = x + y;
            y = x + y;
        
		}
		
            return x;
    }
}


//Função Recursiva

long long int fibonacci2(int n){
	
    if(n == 1){
    
        return 0;
        
    }else if(n == 2){
    	
        return 1;
        
    }else{
    	
        return fibonacci(n-1) + fibonacci(n-2);
        
    }
}
