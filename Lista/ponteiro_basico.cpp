#include <iostream>


int main(){
	
		double num = 5;
		double *x; 
			
		x=&num; 
			
		double **y; 
		y = &x;
		*(*y) = 10;
			
			std::cout << num << "\n";
	
	system("pause");
	return 0;
}

