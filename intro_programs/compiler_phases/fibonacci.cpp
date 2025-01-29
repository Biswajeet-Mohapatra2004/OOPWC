#include<iostream>
using namespace std;

void printFibonacci(int a, int b, int n) {
    if (a > n) return; 
    cout << a << " ";  
    printFibonacci(b, a + b, n);  
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci numbers up to " << n << ": ";
    printFibonacci(0, 1, n); 
    cout << endl;

    return 0;
}

