#include <iostream>
#include <conio.h>
#include <iomanip>
  
using namespace std;

void displaymenu()
{ 
	cout <<"MENU:\n" 
		 <<"\t1.Add\n"
		 <<"\t2.Subtract\n"
		 <<"\t3.Multiply\n"
		 <<"\t4.Divide\n"
		 <<"\t5.Modulus\n";
} 

int Add(int a, int b)
{ 
    return(a+b); 
} 
  
int Substract(int a, int b)
{ 
    return(a-b); 
} 
  
int Multiply(int a, int b)
{ 
    return(a*b); 
} 

float Divide(int a,int b)
{ 
      return(a/b); 
} 

int Modulus(int a, int b)
{ 
    return(a%b); 
} 
  
int main() 
{
	displaymenu(); 
	int choice, n1, n2; 
	char confirm;
	bool vien = false;

	do 
{ 
	cout << "Enter your choice (1-5):"; 
	cin >> choice; 

	cout << "Enter your two integer numbers: "; 
	cin >> n1 >> n2; 
	cout<<"\n"; 

	switch(choice)
	{ 
 		case 1:
		cout << "Result: " << Add (n1, n2); 
		break; 
 		
		case 2: 
		cout << "Result: " << Substract (n1, n2); 
		break; 
 		
		case 3:
		cout << "Result: " << Multiply (n1, n2);
		break; 
 		
		case 4:
		cout << "Result: " << Divide (n1,n2);
		break; 
 
 		case 5:
		cout << "Result: " << Modulus (n1, n2);
		break; 
 
 		default:
		cout << "Invalid ";
    }
	
	cout << "\nContinue?"; cin >> confirm;
	
	switch(confirm)
	{ 
 		case 'y':
 		case 'Y':
 		break;
 
 		default:
		vien = true;
		break;
    } 
       	
} while (!vien);
  
  	_getch();
	return 0;
}
