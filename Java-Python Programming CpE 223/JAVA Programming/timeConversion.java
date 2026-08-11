/*
Instruction:
Using NetBeans or Java compiler, create a class named: timeConversion.
Using what you have learned in Java Operators create the program.

Problem:
Create a program that will convert the following unit of time to minutes:

5 hours
6000 seconds

Expected Output:

Units to be converted to Minutes:
Hours :5
Seconds: 6000

Converting to minutes...

5 Hours = 300 mins
6000 Seconds = 100 mins

BUILD SUCCESSFUL (total time: 1 second)
*/

public class timeConversion {

    public static void main(String[] args) {

        int hours = 5;
        int seconds = 6000;

        int hoursToMinutes = hours * 60;
        int secondsToMinutes = seconds / 60;

        System.out.println("Units to be converted to Minutes:");
        System.out.println("Hours :" + hours);
        System.out.println("Seconds: " + seconds);

        System.out.println();

        System.out.println("Converting to minutes...");

        System.out.println();

        System.out.println(hours + " Hours = " + hoursToMinutes + " mins");
        System.out.println(seconds + " Seconds = " + secondsToMinutes + " mins");
    }
}