// The Fibonacci sequence is a series of numbers in which each number is the sum 
// of the two that precede it. Starting at 0 and 1, the sequence looks like this: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on forever. 
// The Fibonacci sequence can be described using a mathematical equation: XN+2 = XN+1 + XN

// Write a program that will prompt the user for an integer that will define how many values in the Fibonacci sequence to print to the screen.

#include <iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 1, num3, fibNumber, index = 0;
    cout << "Enter the number of Fibonacci terms to generate: ";
    cin >> fibNumber;
    for (index = 1; index <= fibNumber; index++) {
        if (index == 1) {
            cout << num1 << ", ";
            continue;
        }
        if (index == 2) {
            cout << num2 << ", ";
            continue;
        }
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        cout << num3 << ", ";
    }
    return 0;
}
