/*
Instruction:
Using NetBeans or Java compiler, create a class named:
incrementDecrementOperators.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will display the operation of Increment
and Decrement Operators.

Use the following variables:

boolean x;
int y = 5;
int a = 3;
int b;

Expected Output:

true
18
false
2
5
*/

public class incrementDecrementOperators {


public static void main(String[] args) {

    boolean x;
    int y = 5;
    int a = 3;
    int b;

    x = y > a;
    System.out.println(x);

    b = ++y * a;
    System.out.println(b);

    x = a > y;
    System.out.println(x);

    System.out.println(--a);

    System.out.println(--y);
}


}
