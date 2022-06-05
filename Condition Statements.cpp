#include <iostream>
#include <string>
using namespace std;

int main()
{
    // create a variable 
    int n;
    //get input number
    cin >> n;
    //create array that stores english version of the numbers
    string int_list[] = { "one", "two", "three", "four", "five", "six", "seven",
    "eight", "nine" };


    //condition statements
    if (n > 9)
    {
        cout << "Greater than 9";
    }
    else
    {
        cout << int_list[n - 1] << endl;
    }

    return 0;
}

/*Because we start counting from zero in array lists, and 5 is the 4th element, 
int list[n - 1] indicates that if the user inputs 5, this code will discover 
the 4th(5 - 1) element of the code*/
