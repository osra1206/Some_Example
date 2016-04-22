#include<iostream>
#include<iomanip>
using namespace std;

class Rational{
	
  public:
  	
	Rational();
	Rational(int a, int b );
	void Add(Rational a);
	void Subb(Rational a);
	void Divide(Rational a);
	void Multiple(Rational a);
	int Get_Dividend();
	int Get_Divisor();
	void Euclid(int a1, int b1);
	void print();
	void print_float();
		
	private:
	  int n;
	  int m;
	  
	  int Euclid_Divide;
	  int Euclid_Dividend;
	  
	 
}; 







Rational::Rational(){
	n = 0;
	m = 1;   //  n/m = 0
	
}

Rational::Rational(int a , int b ){
	try{
	  if(b==0){
	  	throw -1;
	  }	
	  else{
	  	n = a;
		m = b;
	  }	
		
	}
	
	catch(int err){
	cout <<"The Divisor is 0 !! "<<endl;
	exit(0);
		
		
	}	
	
	
	
	Euclid(n , m);
	m = Euclid_Divide;
	n =  Euclid_Dividend;
}

int Rational::Get_Divisor(){

	return m;
	}

int Rational::Get_Dividend(){

	return n;
	} 
	
	
void Rational::Add(Rational a){
	
	int k = a.Get_Dividend();
	int l = a.Get_Divisor();
//	cout << k <<"a" << "b" <<l<<endl; 
	int temp = 0;
	int temp2 = 0;
	
// Check the same Divide or not	
	if( l!= m ){
		
		//cout << "l:"<<l<<endl;
	//	cout << "m:"<<m<<endl;
		 temp = l*m;
	//	cout << "l*m:"<<temp<<endl; 
	    temp2 = k*m +l*n;
	  //  cout << "l*m+k*m:"<<temp2<<endl; 
		 
		
		n = temp2;
		m = temp;
			
	}
	if( l==m){
		
		temp2= k+n;
		n = temp2;		
	}
	
	Euclid(n , m);
	m = Euclid_Divide;
	n =  Euclid_Dividend;
	
}

void Rational::Subb(Rational a){
	
	
	int k = a.Get_Dividend();
	int l = a.Get_Divisor();
	int temp = 0;
	int temp2 = 0;
	
// Check the same Divide or not	
	if( l!= m ){
		
		 temp = l*m;
		 temp2 = l*n - k*m ;
		
		n = temp2;
		m = temp;
			
	}
	else{
		
		temp2= n-k;
		k = temp2;		
	}
	
	Euclid(n , m);
	m = Euclid_Divide;
	n =  Euclid_Dividend;	
	
}
void Rational::Divide(Rational a){
	
	int k = a.Get_Dividend();
	int l = a.Get_Divisor();
		
	n = n*l;
	m = m*k;
	
	Euclid(n , m);
	m = Euclid_Divide;
	n =  Euclid_Dividend;
	
	
}
void Rational::Multiple(Rational a){
	
	int k = a.Get_Dividend();
	int l = a.Get_Divisor();
		
	n = k*n;
	m = l*m;	
	
	Euclid(n , m);
	m = Euclid_Divide;
	n =  Euclid_Dividend;
	
	
	
}


void Rational::Euclid(int c1, int d1){
	
	int a1 ;
	int b1;
	

	
	
	int temp = 0;
	int r = 0;
	bool test = true;
	
	
while(test){
	a1 = c1;
	b1 = d1;
	
//	cout << "a1 = " <<a1<<endl;
//	cout << "b1 ="<<b1<<endl;
	if(a1<b1){
		temp = b1;
		b1 = a1;
		a1 = temp;		
	}
	
		
	
	while(b1!=0){
		
		r = a1 % b1;
		a1 = b1;
		b1 = r;
	
	}
	
	if(a1!=1){
	   d1 = d1/a1;
	   c1 = c1/a1;		
		
	}
    if(a1==1){
    	test = false;
	}
   	
}
	Euclid_Divide = d1;
	Euclid_Dividend = c1;
	
	
}


void Rational::print(){
	
	cout << "The Divisor is "<< m <<endl;
	cout << "The Dividend is " << n <<endl;
	cout << "The number is " << n << "/" <<m <<endl;

}


void Rational::print_float(){
	float present = 0 ;
	present = n/m;
	
	cout << "The number is "<<setprecision(6)<< n/m <<endl;
	

}
