#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter marks: ";
    cin >> n;

    if (n >= 91) {
        cout << "Excellent\n";
    } 
    else if (n >= 81) {
        cout << "Very Good\n";
    } 
    else if (n >= 71) {
        cout << "Good\n";
    } 
    else if (n >= 61) {
        cout << "Can do better\n";
    } 
    else if (n >= 51) {
        cout << "Average\n";
    } 
    else if (n >= 41) {
        cout << "Below Average\n";
    } 
    else {
        cout << "Fail\n";
    }

    return 0;
}
