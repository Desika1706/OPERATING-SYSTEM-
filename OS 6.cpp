#include <iostream>
using namespace std;
class Overload
 {
 public:
 		int operator ++(int count)
 		{
 			count = count + 1 ;
 			return count;
 		};
 		int operator --(int count)
 		{
 			count = count + 1 ;
 			return count;
 		};
 };
                     
 int main()
 {
 	int a1 = 0 ;
 	char choice;
 	while ( 1 )
 	{
 		cout << "Enter your choice : 1. PRODUCER ( E )  2. CONSUMER( L)  3. EXIT(X) 4. Print (P) ."<<endl;
	
 		cin >> choice;

 		switch ( choice )
 		{
 			case 'E' :
 				a1 = ++(a1);
 				cout << "Total number of PRODUCER is: ";
 				cout << a1;
 				cout << endl;
 				break;
 			case 'L' : 
 			    if(a1==0)
				 cout<<"there is no producer so no consumer \n";
				else
				a1= --(a1);
 				cout << "\n Total number of CONSUMER is: ";
 				cout << a1;
 				cout << endl;
 				break;
 			case 'P' :
 				cout << "Total number of person in PERSONS is: ";
 				cout << a1;
 				cout << endl;
 				break;

 			case 'X' :
 				cout << "THEY ENTER EXIT"<< endl;
 				exit(0);
 			default :
 				cout << "Enter a correct choice."<< endl;
 				break;
 		}
 	}
 	return 0;
 }
