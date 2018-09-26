#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
unisigned long factorial (unsigned long);
int main(int argc, char** argv) {
	int =5;
	unsigned long resultado = factorial(i);
	cout <<i<<"!="<< resultado<<endl;
	
	return 0;
}
unsigned long factorial(unsigned long numero){
	if(numero<=0){//caso base
	return 1;
}else {
	return numero+factorial(numero - 1 );
}
}
