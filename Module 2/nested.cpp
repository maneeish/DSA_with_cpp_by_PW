#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    // if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0) {
    //     cout << "The Number is divisible by 5 or 3 but not 15.\n";
    // } else {
    //     cout << "Not Matching Condition.\n";
    // }

    // return 0;

    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
            cout<<"The Number is divisible by 5 or 3 but not 15.";
        }
    
    else{
        cout<<"not matching condition";
    }
}
else{
    cout<<"not matching condition";
}

}
