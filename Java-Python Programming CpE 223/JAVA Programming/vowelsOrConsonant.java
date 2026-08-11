/*
Instruction:
Using NetBeans or Java compiler, create a class named:
vowelsOrConsonant.

Using what you have learned in Java Operators create the program.

Problem:
Create a program that will determine if the character is vowel
or consonant.

Use the variables and conditions below:

1. Use the variable:
   Letter = 'm';

2. Use proper data types.

3. Use logical and conditional operators.

Expected Output:

Printing character...
m

Evaluating...
Result: Consonant
*/

public class vowelsOrConsonant {


public static void main(String[] args) {

    char letter = 'm';

    System.out.println("Printing character...");
    System.out.println(letter);

    System.out.println();

    System.out.println("Evaluating...");

    String result = (letter == 'a' || letter == 'e' ||
                     letter == 'i' || letter == 'o' ||
                     letter == 'u') ? "Vowel" : "Consonant";

    System.out.println("Result: " + result);
}


}
