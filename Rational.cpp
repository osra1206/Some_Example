#include<iostream>
#include<iomanip>
#include"Rational.h"

using namespace std;

int main(){
	
	
	Rational a(2,6);
	Rational b(1,2);
	Rational c;
	
    
    //	a.Add(b);
	//a.Multiple(b);
	//a.Divide(b);
    //a.Subb(b);

	a.print();
	cout << endl;
	a.print_float();

	
	
	
	
	system("pause");
	return 0 ;
}
