// C++ program to demonstrate constructors 

#include <bits/stdc++.h> 
using namespace std; 
class FootMeasure 
{ 
	public: 
  
	float length(){
      float totalInches = feet*12;
      totalInches += inches;
      return totalInches;

    };
  	
	
	//Default Constructor 
	FootMeasure() 
	{ 
		cout << "Default Constructor called" << endl; 
		feet=1;
      	inches = 6.5;
	} 
	
	//Parametrized Constructor 
	FootMeasure(int x,float y) 
	{ 
		cout << "Parametrized Constructor called" << endl; 
		feet=x;
      	inches =y;
	} 

  		int feet;
  		float inches;
 
}; 
int main() { 
	
	// obj1 will call Default Constructor 
	FootMeasure obj1; 
	cout << " feet is: " << obj1.feet << "inches is: " << obj1.inches <<  endl; 
	cout << "total " << obj1.length() << endl;
	// obj1 will call Parametrized Constructor 
	FootMeasure obj2(2,6); 
	cout << "feet is: " << obj2.feet << "  inches is: " << obj2.inches <<  endl; 
  return 0; 
} 
