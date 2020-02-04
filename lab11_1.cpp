#include<iostream>

using namespace std;

//Write prototype of function fibonacci() here

unsigned long long fibonacci(int);





int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}

unsigned long long fibonacci(int n){
	
	int sum=0 ;
	
	if (n==0){
		return 0 ;  
	}
	else if  (n==1){
		return 1;
	
	}
	else { 
		return fibonacci(n-1) + fibonacci(n-2) ;
	}
	
	
}
