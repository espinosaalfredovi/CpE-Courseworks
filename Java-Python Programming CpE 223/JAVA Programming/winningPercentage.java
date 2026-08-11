/*
Instruction:
Using NetBeans or Java compiler, create a class named:
winningPercentage.

Using what you have learned in Arithmetic Operators and Variables
create the program.

Problem:
Create a program that will compute the winning percentage of
Greengers team last basketball tournament.

Use the data given below:

Total of games played: 25 games
Total of won games: 19 games
Total of lost games: 6 games

Expected Output:

Printing the data from the last tournament...
Won games: 19
Lost games: 6
Total played games: 25

Computing winning percentage....

Result: 76.0%
*/

public class winningPercentage {


public static void main(String[] args) {

    int totalGames = 25;
    int wonGames = 19;
    int lostGames = 6;

    double winningPercentage = (double) wonGames / totalGames * 100;

    System.out.println("Printing the data from the last tournament...");
    System.out.println("Won games: " + wonGames);
    System.out.println("Lost games: " + lostGames);
    System.out.println("Total played games: " + totalGames);

    System.out.println();

    System.out.println("Computing winning percentage....");

    System.out.println();

    System.out.println("Result: " + winningPercentage + "%");
}


}
