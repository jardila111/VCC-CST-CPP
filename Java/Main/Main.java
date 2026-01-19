
import java.util.random.RandomGenerator;

void main() {
    IO.println("Hello and welcome to GuessANumber!");
    
    var random = RandomGenerator.getDefault();
    var playAgain = true;
    
    while (playAgain) {
        playGame(random);
        
        IO.println("Do you want to play again? (Y/N)");
        var answer = IO.readln();
        playAgain = answer.equalsIgnoreCase("y");
    }
    
    IO.println("Thank you for playing. Bye!");
}

void playGame(RandomGenerator random) {
    var numberToGuess = random.nextInt(100);
    var attempts = 0;
    
    while (true) {
        IO.println("Guess a number between 0 and 100: ");
        var guess = Integer.parseInt(IO.readln());
        attempts++;
        
        if (guess < numberToGuess) {
            IO.println("Your number is too low! Try again.");
        } else if (guess > numberToGuess) {
            IO.println("Your number is too high! Try again.");
        } else {
            IO.println("Congratulations! You guessed correctly in {attempts} attempts.");
            break;
        }
    }
}