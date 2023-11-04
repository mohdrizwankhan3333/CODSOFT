#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Numguessingame {
    
     public:
     Numguessingame() {
                                                     // Initialize the random number generator with the current time
        srand(static_cast<unsigned int>(time(nullptr)));
        secretNumber =rand() % 100 + 1;      // Random number between 1 and 100
        attempts = 0;
                      }
                      

          void start() {
             char OPERATOR;
                     cout<<"**************************************************************************************************************************************"<<endl;
                     cout<<"\t\t\t\t\tWELCOME TO YOUR OWN NUMBERS GUESSING GAME"<<endl;
                     cout<<"\t\t\t\t\tI AM THINKING A NUMBERS BETWEEN 1 TO 100"<<endl;
                     cout<<"\t\t\t\t\t  TRY TO GUESS IT THAT'S THE CHALLENGE"<<endl;
                     cout<<"**************************************************************************************************************************************"<<endl;
          int guess;
          do {
                 cout << "Enter your guess Number: ";
                 cin >> guess;
                 attempts++;
   
                 if (guess < secretNumber) {
                s cout << "Too low ! Try again ";
                } else if (guess > secretNumber) {
                 cout << "Too high! Try again "<<endl;
                    } else {
                 cout << "Congratulations! You guessed the correct number  (" << secretNumber << ") in " << attempts << " attempts\n";
                              }
             } while (guess != secretNumber);
     }

       private:
       int secretNumber;
       int attempts;
    };

int main() {
    Numguessingame game;
    game.start();

    return 0;
}
