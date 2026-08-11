/*
Instruction:
Using NetBeans or Java compiler, create a class named:
passOrFail.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will evaluate if the student can pass
the subject or not based on the input grade.

Passing grade is 75.

Use the data given below:

Student grade is 74.5

Expected Output:

Printing grade...
74.5

Evaluating...
Result: FAILED
*/

public class passOrFail {


public static void main(String[] args) {

    double grade = 74.5;

    System.out.println("Printing grade...");
    System.out.println(grade);

    System.out.println();

    System.out.println("Evaluating...");

    String result = (grade >= 75) ? "PASSED" : "FAILED";

    System.out.println("Result: " + result);
}


}
