#include <iostream>
using namespace std;

int main() {

	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	switch( grade )  // This is where the switch statement begins
  {
    case 'A':  
    case 'a': cout << "You Passed" << endl;
              cout << "an A - excellent work !" << endl;
               
  		       break;
  	case 'B':   
    case 'b': cout << "You Passed" << endl;
              cout << "you got a B - good job" << endl;
  		       break;
  	case 'C':  
    case 'c': cout << "You Passed" << endl;
              cout << "earning a C is satisfactory" << endl;
  		       break;
  	case 'D':  
    case 'd': cout << "You Passed" << endl;
              cout << "while  D is passing, there is a problem" << endl;
  	   	     break;          
    case 'F':  
    case 'f': cout << "you failed - better luck next time" << endl;
  		       break;
    default:   cout << "You did not enter an A, B, C, D, or F" << endl;
	}



}