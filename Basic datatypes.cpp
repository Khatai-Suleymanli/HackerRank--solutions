#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    // Complete the code.

    //variables
    int a;
    long b;
    char c;
    float d;
    double e;

    //get input
    cin >> a >> b >> c >> d >> e;

    //print variables in different lines using new line(\n)
    cout << a << "\n" << b << "\n" << c << "\n";

    //setprecision is used to set the maximum number of decimal places after the point
    cout << fixed << setprecision(3) << d << '\n';
    cout << fixed << setprecision(9) << e << '\n';;





    return 0;
}
