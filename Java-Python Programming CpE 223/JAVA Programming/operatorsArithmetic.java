/*
Instruction:
Using NetBeans or Java compiler, create a class named:
operatorsArithmetic.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will display all the operation of Arithmetic.

Use the following variables:

a = 5
b = 8
x = 3
y = 10

Expected Output:

Variables...

a= 8
b= 5
x= 10
y= 3

Exponention...

a^b= 32768.0
x^y= 1000.0

Multiplying...

a*b= 40
x*y= 30

Dividing...

a/b= 1
x/y= 3

Adding...

a+b= 13
x+y= 13

Subtracting...

a-b= 3
x-y= 7

Finding the remainder...

a%b= 3
x%y= 1
*/

public class operatorsArithmetic {

    public static void main(String[] args) {

        int a = 8;
        int b = 5;
        int x = 10;
        int y = 3;

        double exponentAB = Math.pow(a, b);
        double exponentXY = Math.pow(x, y);

        System.out.println("Variables...");
        System.out.println();
        System.out.println("a= " + a);
        System.out.println("b= " + b);
        System.out.println("x= " + x);
        System.out.println("y= " + y);

        System.out.println();
        System.out.println("Exponention...");
        System.out.println();
        System.out.println("a^b= " + exponentAB);
        System.out.println("x^y= " + exponentXY);

        System.out.println();
        System.out.println("Multiplying...");
        System.out.println();
        System.out.println("a*b= " + (a * b));
        System.out.println("x*y= " + (x * y));

        System.out.println();
        System.out.println("Dividing...");
        System.out.println();
        System.out.println("a/b= " + (a / b));
        System.out.println("x/y= " + (x / y));

        System.out.println();
        System.out.println("Adding...");
        System.out.println();
        System.out.println("a+b= " + (a + b));
        System.out.println("x+y= " + (x + y));

        System.out.println();
        System.out.println("Subtracting...");
        System.out.println();
        System.out.println("a-b= " + (a - b));
        System.out.println("x-y= " + (x - y));

        System.out.println();
        System.out.println("Finding the remainder...");
        System.out.println();
        System.out.println("a%b= " + (a % b));
        System.out.println("x%y= " + (x % y));
    }
}

