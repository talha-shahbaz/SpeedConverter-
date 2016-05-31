#include <iostream>
#include <string.h>
#include<tchar.h>
#include<ctime>
using namespace std;

int K_to_M()
{
string input = "" ;
	short int choice = 0;
	
    cout << endl << "This converter will convert from knots to miles per hour." << endl;
     
		getline(cin, input);
		if (choice != 0.0000001)
		{
			goto Knots;
		}
	

Knots:
	
	
		float k = 0;

		cout << endl << "Please enter a speed in knots: ";
		cin >> k;
		float m = k * 1.15078;
		system("color 2f");
		cout << endl << "The speed in miles per hour is: " << m << endl;
		
}

int Ki_to_Kn()
{
	string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from kilometers per hour to knots." << endl;

   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Kilometers;
		}
	
	
	Kilometers:
          
                float ki = 0;
                
                cout << endl << "Please enter a speed in kilometers per hour: ";
                cin >> ki;
                float kn = ki * 0.868976;
                system("color 2f");
                cout << endl << "The speed in knots is: " << kn << endl;
                
}

int Ki_to_M()
{
	string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from kilometers per hour to miles per hour." << endl;
     
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Knots;
		}
	
	
	Knots:
          
                float k = 0;
                
                cout << endl << "Please enter a speed in kilometers per hour: ";
                cin >> k;
                float m = k * 0.621371192;
                system("color 2f");
                cout << endl << "The speed in miles per hour is: " << m << endl;
                
}

int Kn_to_ki()
{
	
    string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from knots to kilometers per hour." << endl;

   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Knots;
		}
	
	
	Knots:
          
                float kn = 0;
                
                cout << endl << "Please enter a speed in knots: ";
                cin >> kn;
                float ki = kn * 1.85200;
                system("color 2f");
                cout << endl << "The speed in kilometers per hour is: " << ki << endl;
}

int M_to_k()
{
	string input = "";
    short int choice = 0;

   cout << endl << "This converter will convert from miles per hour to knots." << endl;

   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Knots;
		}
	
	
	Knots:
         
                float m = 0;
                
                cout << endl << "Please enter a speed in miles per hour: ";
                cin >> m;
                float k = m * 0.868976242;
                system("color 2f");
                cout << endl << "The speed in knots is: " << k << endl;
                
}

int M_to_Ki()
{
	 string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from miles per hour to kilometers per hour." << endl;
   
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Knots;
		}
	
	
	Knots:
          
                float m = 0;
                
                cout << endl << "Please enter a speed in miles per hour: ";
                cin >> m;
                float k = m * 1.609344;
                system("color 2f");
                cout << endl << "The speed in kilometers per hour is: " << k << endl;
                
}
int main() 
{
  
  cout<<"***Enter 1 to convert from knots to miles per hour***"<<endl;
  cout<<"***Enter 2 to convert from kilometers per hour to knots***"<<endl;  
  cout<<"***Enter 3 to convert from kilometers per hour to miles per hour***"<<endl;		
  cout<<"***Enter 4 to convert from knots to kilometers per hour***"<<endl;
  cout<<"***Enter 5 to convert from miles to miles per hour to knots***"<<endl;
  cout<<"***Enter 6 to convert from miles per hour to kilometers per hour***"<<endl;
  int A=0;
  cout<<"Enter your conversion : ";
  cin>>A;
  switch(A)
  {
  	case 1:
  		 K_to_M();
  	break;
  	
  	case 2:
  		 Ki_to_Kn();
    break;
    
    case 3:
    	 Ki_to_M();
    break;
    
    case 4:
    	 Kn_to_ki();
    break;
    
    case 5:
    	 M_to_k();
    break;
    
    case 6:
    	M_to_Ki();
    break;
    
    default:
    	system("color 47");
		cout<<"Invalad Input";
	
	 	
    break;
    	
    }
  
  return 0;
}

