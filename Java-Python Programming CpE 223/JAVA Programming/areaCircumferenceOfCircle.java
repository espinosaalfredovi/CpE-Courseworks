
/*
Instruction:
Using NetBeans or Java compiler, create a class named:
areaCircumferenceOfCircle.

Using what you have learned in Arithmetic Operators and Variables
create the program.

Problem:
Create a program that will compute for the area and circumference
of the circle. Use the data and formula given below.
Use your variables appropriately.

Formula to compute for Circumference:
C = 2 * PI * r

Formula to compute for Area:
A = PI * R * R

Given:
Radius = 14 cm
*/

public class areaCircumferenceOfCircle {

    public static void main(String[] args) {

        int radius = 14;
        double pi = 3.1416;

        double circumference = 2 * pi * radius;
        double area = pi * radius * radius;

        System.out.println("Given:");
        System.out.println("Radius= " + radius);

        System.out.println();

        System.out.println("Computing for Circumference...");
        System.out.println("Result: " + circumference + " cm");

        System.out.println();

        System.out.println("Computing for the Area...");
        System.out.println("Result: " + area + " cm");
    }
}

