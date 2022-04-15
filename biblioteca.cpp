#include"biblioteca.hpp"

double factorial(double n){
	if n==0{ 
	return= 1;
	}
	else {	
	n= n*factorial(n-1);		
	}
	return n;
}

