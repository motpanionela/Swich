#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
int main() {

	srand(time(0));
//sa se creaze un test cu 10 intrebari  de la 3 pana la ce numar doriti si N
//sa se afiseze nota si numarul de raspunsuri corecte si gresite;
cout <<"********************** TESTARE LA INFORMATICA ********************** "<<endl; 
int x,RC=0,RG=0;
bool l=false;
cout << " Ce este litera c din tabela ascii"<<endl;
cout <<"a. 97"<<endl;
cout <<"b.98"<<endl;
cout <<"c.99"<<endl; 
E:
switch ( _getch()) {
	
	case 97:
		cout << "error"<<endl;
		l=false;
		RG++; 
	break;
	case 98:
		cout <<"error"<<endl;
		l= false;
		RG++;
	break;
	case 99: 
		cout << " ok"<<endl; 
		l=false;
		RC++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto E;






cout << " Ce este litera a din tabela ascii"<<endl;
cout <<"a. 97"<<endl;
cout <<"b.98"<<endl;
cout <<"c.99"<<endl; 
Q:
switch ( _getch()) {
	
	case 97:
		cout << "ok"<<endl;
		l=false;
		RC++; 
	break;
	case 98:
		cout <<"error"<<endl;
		l= false;
		RG++;
	break;
	case 99: 
		cout << " error"<<endl; 
		l=false;
		RG++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto Q;






cout << " cate tipuri de date simple sunt in C++;"<<endl;
cout <<"a. 4 tipuri"<<endl;
cout <<" b.5 tipuri"<<endl;
cout <<" c.6 tipuri" <<endl;
A:
switch ( _getch()) {
	
	case 97:
		cout << "error"<<endl;
		l=false;
		RG++; 
	break;
	case 98:
		cout <<"error"<<endl;
		l= false;
		RG++;
	break;
	case 99: 
		cout << " ok"<<endl; 
		l=false;
		RC++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto A;










cout <<" cate continete sunt pe plneta?"<<endl;
cout <<" a.10 continente"<<endl;
cout <<"b.7 continente"<< endl;
cout <<"c. 6 continente"<< endl;
W:
switch ( _getch()) {
	
	case 97:
		cout << "error"<<endl;
		l=false;
		RG++; 
	break;
	case 98:
		cout <<"ok"<<endl;
		l= false;
		RC++;
	break;
	case 99: 
		cout << " error"<<endl; 
		l=false;
		RG++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto W;











cout <<" cate lietere are tipul de date simple char"<<endl;
cout <<"a.4 litere"<<endl;
cout <<"b.3 litere"<< endl;
cout <<"c.10 litere"<< endl;
R:
switch ( _getch()) {
	
	case 97:
		cout << "ok "<<endl;
		l=false;
		RC++; 
	break;
	case 98:
		cout <<" error"<<endl;
		l= false;
		RG++;
	break;
	case 99: 
		cout << " error"<<endl; 
		l=false;
		RG++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto R;

cout <<" citi ani sunt de cand a  inventat C++"<<endl;
cout <<"a.42 de ani"<<endl;
cout <<"b.39 de ani"<< endl;
cout <<"c.52 de ani"<< endl;
T:
switch ( _getch()) {
	
	case 97:
		cout << " error"<<endl;
		l=false;
		RG++; 
	break;
	case 98:
		cout <<" ok"<<endl;
		l= false;
		RC++;
	break;
	case 99: 
		cout << " error"<<endl; 
		l=false;
		RG++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto T;



cout <<"Cum se numeste biblioteca principala in C++ ?"<<endl;
cout <<"a.#include <iomanip>"<<endl;
cout <<"b.#include <iostream>"<<endl;
cout <<" c.#include <cmath>  "<<endl;
U:
switch ( _getch()) {
	
	case 97:
		cout << "ok "<<endl;
		l=false;
		RC++; 
	break;
	case 98:
		cout <<" error"<<endl;
		l= false;
		RG++;
	break;
	case 99: 
		cout << " error"<<endl; 
		l=false;
		RG++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto U;






cout <<" ce numar este b din tabela ascii?"<<endl;
cout <<"a. 99"<<endl;
cout <<"b. 98"<<endl;
cout <<" c. 97"<<endl;
I:
switch ( _getch()) {
	
	case 97:
		cout << " error"<<endl;
		l=false;
		RC++; 
	break;
	case 98:
		cout <<" ok"<<endl;
		l= false;
		RG++;
	break;
	case 99: 
		cout << " error"<<endl; 
		l=false;
		RG++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto I;



cout<<"cate oceane sunt pe lume?"<<endl;
cout <<" a. 5 oceane"<<endl;
cout <<"b. 4 oceane"<<endl;
cout <<"c. 6 oceane"<< endl;
O:
switch ( _getch()) {
	
	case 97:
		cout << "ok "<<endl;
		l=false;
		RC++; 
	break;
	case 98:
		cout <<" error"<<endl;
		l= false;
		RG++;
	break;
	case 99: 
		cout << " error"<<endl; 
		l=false;
		RG++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto O;



cout <<" Cate semne are cuvantul C++"<<endl;
cout <<" a. 2 semne"<<endl;
cout <<" b.0 semne"<<endl;
cout <<"c.1 semn";
P:
switch ( _getch()) {
	
	case 97:
		cout << "ok "<<endl;
		l=false;
		RC++; 
	break;
	case 98:
		cout <<" error"<<endl;
		l= false;
		RG++;
	break;
	case 99: 
		cout << " error"<<endl; 
		l=false;
		RG++;
	break;
	default:
		l = true;
	cout <<"Alegeti una din variantele de mai sus"<<endl;
	
}
if(l ==true) goto P;

cout <<"Dvs aveti "<<RC<<" raspunsuri corecte si "<<RG<<" raspunsuri gresite."<<endl;






	return 0;
}
