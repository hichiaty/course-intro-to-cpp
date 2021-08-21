#include <iostream>

using namespace std;

int main(){
    int n = 32; // our number
    cout << "2 goes into " << n << ", ";

    int counter = 0; // a counter to keep track of how many iterations we did (our answer variable)
    while (n>1){
        n = n/2; //divide the number by 2
        counter = counter + 1; //increase our counter every iteration
    }
    cout << counter <<  " times" << endl;
}