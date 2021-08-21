#include <iostream>

using namespace std;

int factorial(int n){ // function header, takes argument n, which is an int
 // n, the argument is the number we want to work out the factorial of

    int result = 1; // a result variable to store our answer at every iteration
    for (int j = 1; j <= n; ++j){
        result = result * j; // multiply that number by our result at the current iteration (j) - n times
    }
    return result; // our return statement which gives us our result as output
}

int main(){

    int n; // declaring n as an unassigned integer
    n = 6; // assigning 4 to n
    int m = 8; // declaring and assigning 5 to m

    int sum_result = factorial(n) + factorial(m); // calling the function on two different ints and adding the result and assigning it to sum_result which is our final answer
    cout << "The sum of the factorials of " << n;
    cout << " and " << m << " is: " << sum_result << endl;
    return 0;
}