/*
Instruction:
Using NetBeans or Java compiler, create a class named:
greatestValue.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will determine which is the greatest value
among the three integers.

Use the data and conditions given below:

1. Use variables:
   num1 = 1000;
   num2 = 113;
   num3 = 1599;

2. Use Logical and Conditional Operator.

3. Make sure to display the numbers during runtime before evaluating.

Expected Output:

Printing variables...
number 1 = 1000
number 2 = 113
number 3 = 1599

Evaluating...
1599 is the greatest value!
*/

public class greatestValue {

public static void main(String[] args) {

    int num1 = 1000;
    int num2 = 113;
    int num3 = 1599;

    System.out.println("Printing variables...");
    System.out.println("number 1 = " + num1);
    System.out.println("number 2 = " + num2);
    System.out.println("number 3 = " + num3);

    System.out.println();

    System.out.println("Evaluating...");

    int greatest = (num1 > num2 && num1 > num3) ? num1
                 : (num2 > num1 && num2 > num3) ? num2
                 : num3;

    System.out.println(greatest + " is the greatest value!");
}


}
