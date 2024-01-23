//NUMBER GUESSING GAME

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int choice = 1;
    while(choice){

        //MENUE MADE
        string name;
        cout << endl;
        cout << endl;
        cout << "Enter your username: ";
        cin >> name;
        cout << endl;
        cout << "Hello " << name << "!";
        cout << endl;
        cout << endl;
        cout<< "\t\t\tWELCOME TO THE GAME: WHAT AM I THINKING?\t\t" << endl;
        cout << endl;
        cout<< "\tTHE RULES OF THE GAME ARE AS FOLLOWS: " << endl;
        cout << endl;
        cout << "\t\t->You have to guess a number between 1 and 100.\t\t\t " << endl;
        cout << "\t\t->You'll have limited choices based on the level you choose. Good Luck!\t\t\t\t" << endl;
        cout << endl;
        int level;
        cout << "Enter the level of your choice: " << endl;
        cout << "1. Easy " << endl << "2. Medium " << endl << "3. Hard " << endl;
        cin >> level;

        cout << "--------------------------------GET, SET, GUESS!!!--------------------------------" << endl;
     
        int randomNumber = 1 + (rand() % 100);
        
        //IF EASY
        if(level == 1){
            int NumberofGuess = 10;
            for(int i = 0; i < 10; i++){
                
                int ans;
                cout << "Enter Your Answer: ";
                cin >> ans;
                cout << endl;
                if(ans == randomNumber){
                cout << "Congratulations! You have guessed the number correctly!" << endl;
                cout << "The number was: " << randomNumber;
                cout << endl;
                }
             
                if(ans > randomNumber){
                    NumberofGuess--;
                    cout << "You have " << NumberofGuess << " number of guesses left." << endl;
                    cout << "The secret number is less than the value you entered." << endl;
                    cout << "Try Again!" << endl;
                    cout << endl;
                    
                }
           
                if(ans < randomNumber){
                    NumberofGuess--;
                    cout << "You have " << NumberofGuess << " number of guesses left." << endl;
                    cout << "The secret number is greater than the value you entered." << endl;
                    cout << "Try Again!" << endl;
                    cout << endl;
                }
    
            }
            if(NumberofGuess == 0){
                cout << "\t\t\tYOU LOST! BETTER LUCK NEXT TIME!\t\t\t" << endl;
            }
            
        }

        //IF MEDIUM
        if(level == 2){
            int NumberofGuess = 7;
            for(int i = 0; i < 7; i++){
                
                int ans;
                cout << "Enter Your Answer: ";
                cin >> ans;
                cout << endl;
                if(ans == randomNumber){
                cout << "Congratulations! You have guessed the number correctly!" << endl;
                cout << "The number was: " << randomNumber;
                cout << endl;
                }
             
                if(ans > randomNumber){
                    NumberofGuess--;
                    cout << "You have " << NumberofGuess << " number of guesses left." << endl;
                    cout << "The secret number is less than the value you entered." << endl;
                    cout << "Try Again!" << endl;
                    cout << endl;
                    
                }
           
                if(ans < randomNumber){
                    NumberofGuess--;
                    cout << "You have " << NumberofGuess << " number of guesses left." << endl;
                    cout << "The secret number is greater than the value you entered." << endl;
                    cout << "Try Again!" << endl;
                    cout << endl;
                }
    
            }
            if(NumberofGuess == 0){
                cout << "\t\t\tYOU LOST! BETTER LUCK NEXT TIME!\t\t\t" << endl;
            }
            
        }

        //IF HARD
        if(level == 3){
            int NumberofGuess = 5;
            for(int i = 0; i < 5; i++){
                
                int ans;
                cout << "Enter Your Answer: ";
                cin >> ans;
                cout << endl;
                if(ans == randomNumber){
                cout << "Congratulations! You have guessed the number correctly!" << endl;
                cout << "The number was: " << randomNumber;
                cout << endl;
                break;
                }
             
                if(ans > randomNumber){
                    NumberofGuess--;
                    cout << "The secret number is less than the value you entered." << endl;
                    cout << "You have " << NumberofGuess << " number of guesses left." << endl;
                
                    cout << "Try Again!" << endl;
                    cout << endl;
                    
                }
           
                if(ans < randomNumber){
                    NumberofGuess--;
                    cout << "The secret number is greater than the value you entered." << endl;
                    cout << "You have " << NumberofGuess << " number of guesses left." << endl;
                    
                    cout << "Try Again!" << endl;
                    cout << endl;
                }
    
            }

            if(NumberofGuess == 0){
                cout << "The correct number was: " << randomNumber << endl;
                cout << "\t\t\tYOU LOST! BETTER LUCK NEXT TIME!\t\t\t" << endl;
                
            }
            
        }
        cout << "Do you wish to play again? (1 or 0)" << endl;
        cin >> choice;
    }
}
