/*
Instruction:
Using NetBeans or Java compiler, create a class named: weightedAverage.
Using what you have learned in Arithmetic Operators and Variables,
create the program.

Problem:
Create a program that will compute the weighted average grade
of the students for the following subjects.
Use variables and the data given below.

Subject     Units     Grade
Math          3         85
Science       4         90
PE            2         99

Expected Output:

Printing Subjects Grade....
Math: 85
Science: 90
PE: 99

Computing Weighted Average...
Result: 90.0

BUILD SUCCESSFUL (total time: 1 second)
*/

public class weightedAverage {

    public static void main(String[] args) {

        int mathUnits = 3;
        int scienceUnits = 4;
        int peUnits = 2;

        int mathGrade = 85;
        int scienceGrade = 90;
        int peGrade = 99;

        int totalUnits = mathUnits + scienceUnits + peUnits;

        int totalWeightedGrade =
                (mathUnits * mathGrade) +
                (scienceUnits * scienceGrade) +
                (peUnits * peGrade);

        double weightedAverage = totalWeightedGrade / totalUnits;

        System.out.println("Printing Subjects Grade....");
        System.out.println("Math: " + mathGrade);
        System.out.println("Science: " + scienceGrade);
        System.out.println("PE: " + peGrade);

        System.out.println();

        System.out.println("Computing Weighted Average...");
        System.out.println("Result: " + weightedAverage);
    }
}