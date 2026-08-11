/*
Instruction:
Using NetBeans or Java compiler, create a class named: conversionTemperature.
Using what you have learned in Arithmetic Operators and Variables create the program.

Problem:
Create a program that will convert temperatures unit from one form to another.

Formula to convert Fahrenheit to Celsius:
C = (F - 32) * 5 / 9

Formula to convert Celsius to Fahrenheit:
F = C * 9 / 5 + 32

Ask:
Convert 20C to Fahrenheit
Convert 68F to Celsius

Expected Output:

Convert 20C to Fahrenheit
Result: 68F

Convert 68F to Celsius
Result: 20C

BUILD SUCCESSFUL (total time: 0 seconds)
*/

public class conversionTemperature {

    public static void main(String[] args) {

        int celsius = 20;
        int fahrenheit = 68;

        int celsiusToFahrenheit = celsius * 9 / 5 + 32;
        int fahrenheitToCelsius = (fahrenheit - 32) * 5 / 9;

        System.out.println("Convert 20C to Fahrenheit");
        System.out.println("Result: " + celsiusToFahrenheit + "F");

        System.out.println();

        System.out.println("Convert 68F to Celsius");
        System.out.println("Result: " + fahrenheitToCelsius + "C");
    }
}