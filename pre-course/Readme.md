# Pre-course Introduction to programming concepts

There are many programming languages around, each with their own strengths and weaknesses. These languages may seem different and some are indeed more suited for different tasks, but the underlying programming are usually shared between them. Such differences between languages may include:
* Syntax
* Typing (Strongly Typed and Weakly/Loosely Typed)
* Execution

## Data Types
At the centre of all computer programs is some data, or collections of data (Data Structures) which is being manipulated by the program logic to give a desired result. Data structures can be very complex and abstract, in this section, we will consider simple data types which are present in almost all programming languages. We will first identify what they are, and look at what operations can be used to manipulate them.

- int
- float
- string
- boolean


### Integers
An int (integer) is a number data type that allows a computer to represent a whole number in memory. By default, in C++ the type 
```int``` can be any whole number from −2,147,483,648 to 2,147,483,647 and will use 32-bits of space in memory.

### floats
a `float` is also a number data type that is 32-bit in size by default. It can reperesent any real number that is not an integer (e.g. 3.14). Floats can also be whole numbers however it is important to note that floats sacrifice accuracy and are only precise to ~7 digits, where as ints are exact. How precise a real number type is, is known as its **precision**. In C++ (and other languages) there is a more precise data type for real numbers known as a `double`.

### String
A `string` is a data type that allows the computer to represent text. In most languages it can be denoted by wrapping the text in quotes:
```
"Hello World!"
```
This text can then be manipulated, or used to construct longer strings according to your program logic.

### Booleans
A Boolean or `bool` is a binary type that can only take one of two possible values: `true` or `false`. It is heavily used accross many languages, particularly within conditional logic (See below).

## Data Operations and Strongly Typed Languages
For each of these types there is a set of **operations** that can be performed on them to be able to manipulate them. These operations are specific to each type. For example, with the number types we have the standard maths operands: `+, -, *, /`. It is important to note however, because operands are type specific, operations between different types can cause errors or unexpected results. For example, you may want to add or subtract an int and a float, or even divide two ints together to end up with a number that is not whole. Since these are different types, and C++ is a strongly typed language - where each item type must be explicitly declared, you may experience unexpected behaviour (We will cover this more in class).

## Variables
We have now covered the three basic data types present in almost all programming languages: numbers (of several kinds), strings and booleans; as well as some operations specific to each type.

Another language element common to all programming languages is variables. Variables allow us to store the result of specific operations in memory or store constants for later use, making it easier to write programs. In other words, variables are just places in memory that your program can access and can store data of different types in. Below is a simple C++ program that assigns two integers to memory, anything after a `//` is known as a comment and is used to annotate code without affecting it. Commenting code is an important practise and comments are available across all languages with varying syntax.

```C++
int main() // main function header (see functions section below)
{
    int x; // declaring x as an unassigned integer
    x = 4; // assigning 4 to x

    int y = 5; //declaring and assigning 5 to y ('=' is known as the assignment operator)
    return 0; // return for the main function (see functions section below)
}
```

for more examples regarding variables in C++, please refer to the Variables section in the distance learning videos [here](https://youtu.be/wGOPWMY80lw?t=1295)

## Conditionals: making decisions
Life is full of decision making. The same applies to any minimally versatile program. In most scenarios, your program will need to execute different instructions depending on some criteria/**conditions** that must be met, if they're not, then execute something *else*. An example from daily life would be: if you are hungry, grab a snack; if you are not hungry, don't! All programming languages provide mechanisms to conditionally execute a piece of code. In C++ it takes the form:

```C++
int main()
{
    int x; // declaring x as an unassigned integer
    x = 4; // assigning 4 to x
    int y = 5; //declaring and assigning 5 to y

    if (x<y){
        // only run the code inside here if the value stored in x is less than y
    } 
    else {
        // only run the code inside here if the value stored in x is not less than y (x is greater than, or equal to y)
    }
    return 0;
}
```
In many languages, when your program is running and it reaches a conditional (an **if** statement), the variables (x and y) and the operand (<) are evaluated into a **boolean** (True or False). In other words your expression must be reduced to either `true` or `false` such that the statement becomes either:

```C++
if (true){
    // only run the code inside here if conditional is true - the code runs
} 
```
or
```C++
if (false){
    // only run the code inside here if conditional is true - the code does not run
} 
```
for more examples regarding if statements in C++, please refer to the conditionals section in the distance learning videos [here](https://youtu.be/wGOPWMY80lw?t=3590)

## Loops: repeating instructions
The main use of computers is to do things people cannot do, or to repeat the same task many times over. Computers are particularly suited to repeat logical tasks, and can do this in a much more efficient way than people. When programming a computer, repeating tasks is achieved through **loops**, which are a corner stone of many programming languages.

In most languages there are two main types of loops: **for** loops are used when the number of repetitions is known *a priori*; and **while** loops where the instructions within the *scope* are repeated until a specific test condition fails (see section above on conditionals). We will look at how these two types of loops work in more detail in pseudo-code below.

### for loops
Suppose you want to find the factorial of a number. Since a factorial is the product of all positive integers less than or equal to a given positive integer, we can use a **loop** to *iterate* through all the integers below a given value - n. Since we know the number of repititons/**iterations** we will be using the idea of a for loop.

```C++
int n = 12; // the number we want to work out the factorial of

int factorial = 1; // a result variable to store our answer at every iteration

for (every number, j, from 1 to n){
    factorial = factorial * j; // multiply that number by our result at the current iteration (j) - n times
}
```
A fully worked example of this in C++ is given in the `for_example.cpp` file.

### while loops
An alternative style of looping in a program is by using a **while** loop. Instead of repeating a piece of code a fixed number of times. like a **for** loop, a **while** repeats the code within its scope until a given condition ceases to evaluate to `true`.

A *while* loop can be thought of as a hybrid between an **if** statement and a **for** loop: an **if** statement executes a block of code **if** the result of a given test is True; a **while** loop repeatedly executes a block of code **while** the result of the test is True.

We will look at an example where we are summing powers of 0.5 from 0 to 10 to see how the *while* loop works.

Suppose we want to know how many times a given number, n, can be divided by 2 before it is less than or equal to 1. We can use a **while** loop with this condition to compute it. The pseudo-code will be something like this:

```C++
int n = 32; // our number
int counter = 0; // a counter to keep track of how many iterations we did (our answer variable)
while (n>1){
    n = n/2; //divide the number by 2
    counter = counter + 1; //increase our counter every iteration
}
```
A fully worked example of this in C++ is given in the `while_example.cpp` file.

for more examples regarding loops in C++, please refer to the for and while loops section in the distance learning videos [here](https://youtu.be/wGOPWMY80lw?t=4240)

## Functions: splitting our logic into chunks
We now know some of the major tools we have to be able to program and build complex programs from the relatively simple pieces of language we covered. However, it is convenient, and in practical terms even essential, to provide some structure to our programs by grouping bits of code together in order to achieve a more complex task when combined.

To perform more complex operations on data we will be using the main code structuring mechanism available in most languages: **functions**.
So far we have already encountered one core C++ function, `main()`. This function is known as the *entry-point* of a C++ program. i.e. 'the bit of code' that runs first when you open your program. Within this `main()` function, you can have all your code, or you can *call* other functions that contain your code. 

Functions can be thought of similarly to mathematical functions. It takes an input (say, x) and *returns* an output (say, y or f(x)). Inputs are known as *function arguments* and a *return statement* is the function's output. 

Let's consider our factorial for loop example. Suppose you wanted to create a program that tells you the sum of the factorials of two numbers, n and m. We have already written some code to work out the factorial of a number, let's wrap it in a function which we'll *define*/call it `factorial`. We will be using pseudo-code that is close to C++.

```C++
int factorial(int n){ // function header, takes argument n, which is an int

 // n, the argument is the number we want to work out the factorial of

    int result = 1; // a result variable to store our answer at every iteration

    for (every number, j, from 1 to n){
        result = result * j; // multiply that number by our result at the current iteration (j) - n times
    }
    return result; // our return statement which gives us our result as output
}
```
Now that we have our factorial function we can *call* it (use it) twice within our main function to then work out the sum of two factorials.

```C++
int main()
{
    int n; // declaring n as an unassigned integer
    n = 4; // assigning 4 to n
    int m = 5; // declaring and assigning 5 to m

    int sum_result = factorial(n) + factorial(m); // calling the function on two different ints and adding the result and assigning it to sum_result which is our final answer
    return 0;
}
```
The main idea here is that we used the same code/logic on different inputs through our function. If we did not have a factorial function, we would've had to write our for loop twice, once for m and once for n. There is a common principle in software development known as *Don't repeat yourself (DRY)* which states that if possible, code should not be repeated but should be seperated in chunks such that things remain in one place for easier maintenance. In other words, if we now want to modify our factorial function, we only need to edit it in one place rather than twice.

This full example can be found in `factorial_prod_example.cpp`
