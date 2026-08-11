/*
Instruction:
Using NetBeans or Java compiler, create a class named:
logicalOrOperators.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will display the operation of OR Operators.

Variables:
int i = 0;
int j = 10;
boolean test;
*/

public class logicalOrOperators {

public static void main(String[] args) {

    int i = 0;
    int j = 10;
    boolean test;

    System.out.println("Demonstrating ||...");

    test = (i == 0) || (++j > 10);

    System.out.println(i);
    System.out.println(j);
    System.out.println(test);

    System.out.println();

    System.out.println("Demonstrating |...");

    test = (i == 0) | (++j > 10);

    System.out.println(i);
    System.out.println(j);
    System.out.println(test);
}

}