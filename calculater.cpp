#include <iostream> 
using namespace std;
 int add(int a, int b); 
 int subtract(int a, int b);
  int multiply(int a, int b); 
  int divide(int a, int b);
  
int main() { 
    int num1, num2; 
    char operation; 
 
    cout << "Enter two numbers: "; 
    cin >> num1 >> num2; 
 
    cout << "Choose operation (+, -, *, /): "; 
    cin >> operation; 