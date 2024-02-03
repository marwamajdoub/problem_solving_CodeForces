//C++ Output (Print Text)
//o insert a new line, you can use the \n character:
#include <bits/stdc++.h>
using namespace std; 

int main() {
  cout << "Hello World!";
  return 0;
}

//Declaring (Creating) Variables
type variableName = value;
int myNum = 15;
cout << myNum;

//other types
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

// exps
int myAge = 35;
cout << "I am " << myAge << " years old.";

//You have already learned that cout is used to output (print) values. Now we will use cin to get user input.

//cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

//In the following example, the user can input a number, which is stored in the variable x. Then we print the value of x://
int x; 
cout << "Type a number: "; // Type a number and press enter
cin >> x; // 
cout << "Your number is: " << x; // Display the input value

