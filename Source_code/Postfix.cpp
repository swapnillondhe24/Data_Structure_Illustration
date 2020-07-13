#include <iostream>
#include <stack>
#include <string>
#include<conio.h>
 using namespace std;

   bool isOperator(char character) {
  if (character == '+' || character == '-' || character == '*' || character == '/') {

      return true;

  }

  return false;

    }
   bool isOperand(char character) {

  if (!isOperator(character) && character != '(' && character != ')') {

      return true;

  }

  return false;

   }

  int compareOperators(char op1, char op2) {

  if ((op1 == '*' || op1 == '/') && (op2 == '+' || op2 == '-')) { return -1; }

  else if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/')) { return 1; }

  return 0;

   }



 int main()

 {
stack<char> opStack;

  string postFixString = "";

   

  char input[100];
    cout << "Enter an expression: ";

  cin >> input;
  char *cPtr = input;
  while (*cPtr != '\0') {
      if (isOperand(*cPtr)) { postFixString += *cPtr; }

      else if (isOperator(*cPtr)) {

          while (!opStack.empty() && opStack.top() != '(' && compareOperators(opStack.top(),*cPtr) <= 0) {

              postFixString += opStack.top();

              opStack.pop();

          }

          opStack.push(*cPtr);

      }
      else if (*cPtr == '(') { opStack.push(*cPtr); } 
      else if (*cPtr == ')') {
          while (!opStack.empty()) {
              if (opStack.top() == '(') { opStack.pop(); break; }
              postFixString += opStack.top();
              opStack.pop();
          }
      }
      cPtr++;
  }
  while (!opStack.empty()) {

      postFixString += opStack.top();

      opStack.pop();

    }
    cout << "Postfix is: " << postFixString << endl;
    getch();
    system("..\\final_syn.exe");
     }
