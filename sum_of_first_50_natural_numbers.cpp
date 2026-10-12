/* 
   Title: Sum of First 50 Natural Numbers
   Name: Muhammad Harmain
   Reg No: L1S26BSCS0079
   Assignment: Assignment 1
*/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 50; i++) {
        sum += i;
    }
    cout << "Sum of first 50 natural numbers (loop): " << sum << endl;
    return 0;
}
