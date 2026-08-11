/*
Instruction:
Using NetBeans or Java compiler, create a class named:
areaOftheTriangle.

Using what you have learned in Arithmetic Operators
create the program.

Problem:
Create a program that will compute the area of a triangle.

Use the following data and formula:

Formula to compute the area:
A = 1/2 * b * h

Base = 5 cm
Height = 12 cm

Expected Output:

Given:
Base= 5cm
Height= 12cm

Computing for the Area of Triangle...
Area= 30.0
*/

public class areaOftheTriangle {

    public static void main(String[] args) {

        int base = 5;
        int height = 12;

        double area = 0.5 * base * height;

        System.out.println("Given:");
        System.out.println("Base= " + base + "cm");
        System.out.println("Height= " + height + "cm");

        System.out.println();

        System.out.println("Computing for the Area of Triangle...");
        System.out.println("Area= " + area);
    }
}

