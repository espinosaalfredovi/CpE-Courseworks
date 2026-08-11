
/*
Instruction:
Using NetBeans or Java compiler, create a class named:
conversionLength.

Using what you have learned in Arithmetic Operators and Variables
create the program.

Problem:
Create a program that will convert the given units of length to meter.

Use the given table and the data below:

1 kilometer = 1000 meter
1 meter = 100 centimeter
1 centimeter = 10 millimeter

Convert the following length to meter:

15 Kilometer
850 Centimeters
1000000 Millimeters

Expected Output:

Values to be converted to Meter:
15 Kilometer
850 Centimeter
1000000 Millimeter

Computing the result...

15km = 15000m
850cm = 8m
1000000mm = 1000m
*/

public class conversionLength {

    public static void main(String[] args) {

        int kilometer = 15;
        int centimeter = 850;
        int millimeter = 1000000;

        int kilometerToMeter = kilometer * 1000;
        int centimeterToMeter = centimeter / 100;
        int millimeterToMeter = millimeter / 1000;

        System.out.println("Values to be converted to Meter:");
        System.out.println(kilometer + " Kilometer");
        System.out.println(centimeter + " Centimeter");
        System.out.println(millimeter + " Millimeter");

        System.out.println();

        System.out.println("Computing the result...");

        System.out.println();

        System.out.println(kilometer + "km = " + kilometerToMeter + "m");
        System.out.println(centimeter + "cm = " + centimeterToMeter + "m");
        System.out.println(millimeter + "mm = " + millimeterToMeter + "m");
    }
}

