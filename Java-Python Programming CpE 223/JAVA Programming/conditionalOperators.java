/*
Instruction:
Using NetBeans or Java compiler, create a class named:
conditionalOperators.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will compute the average of the student
grade in three subjects and will display "passed" if the average
is greater than or equal to 75 otherwise it will display "fail".

Grades:
English = 75
Science = 80
Math = 90
*/

public class conditionalOperators {


public static void main(String[] args) {

    int english = 75;
    int science = 80;
    int math = 90;

    int average = (english + science + math) / 3;

    System.out.println("Printing grade...");
    System.out.println("English " + english);
    System.out.println("Science " + science);
    System.out.println("Math " + math);

    System.out.println();

    System.out.println("Evaluating...");
    System.out.println("Average Grade: " + average);

    String status = (average >= 75) ? "Pass" : "Fail";

    System.out.println("Status: " + status);
}


}
