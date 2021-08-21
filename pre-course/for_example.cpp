#include <iostream>

using namespace std;

int main(){
    int n = 12; // the number we want to work out the factorial of

    int factorial = 1; // a result variable to store our answer at every iteration

    for (int j = 1; j <= n; ++j){
        factorial = factorial * j; // multiply that number by our result at the current iteration (j) - n times
    }

    cout << "The factorial of " << n << " is: " << factorial << endl;
}

// try changing n to 99, what behaviour do you expect given what you know about ints?
