/*
Instruction:
Using NetBeans or Java compiler, create a class named:
logicalXorOperators.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will display the truth table of XOR Operators.

Variables:
boolean val1;
boolean val2;
boolean test;
*/

public class logicalXorOperators {


public static void main(String[] args) {

    boolean val1;
    boolean val2;
    boolean test;

    System.out.println("Displaying the TRURTH TABLE for XOR");
    System.out.println("x1\t\tx2\t\tRESULT");

    val1 = true;
    val2 = true;
    test = val1 ^ val2;
    System.out.println("TRUE\t\tTRUE\t\t" + test);

    val1 = true;
    val2 = false;
    test = val1 ^ val2;
    System.out.println("TRUE\t\tFALSE\t\t" + test);

    val1 = false;
    val2 = true;
    test = val1 ^ val2;
    System.out.println("FALSE\t\tTRUE\t\t" + test);

    val1 = false;
    val2 = false;
    test = val1 ^ val2;
    System.out.println("FALSE\t\tFALSE\t\t" + test);
}


}
