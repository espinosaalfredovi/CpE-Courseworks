/*
Instruction:
Using NetBeans or Java compiler, create a class named:
oddOrEven.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will determine if the integer is odd or even.

Use the variables and conditions below:

1. Use variable:
   num1 = 1778;

2. Use Conditional Operator.

3. Make sure to display the number during runtime before evaluating.

Expected Output:

Printing integer...
1778

Evaluating...
Results: EVEN
*/

public class oddOrEven {


public static void main(String[] args) {

    int num1 = 1778;

    System.out.println("Printing integer...");
    System.out.println(num1);

    System.out.println();

    System.out.println("Evaluating...");

    String result = (num1 % 2 == 0) ? "EVEN" : "ODD";

    System.out.println("Results: " + result);
}


}
