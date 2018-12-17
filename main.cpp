//
//  main.cpp
//  AITest
//  Having a bit of fun with C++.
//  Created by Adelekan Faruq Aliu on 2018-01-21.
//  Copyright © 2018 Adelekan Faruq Aliu. All rights reserved.

// A random AI interaction appears.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string myName, aiName; // names
    string input; // answer
    string why; // response
    
    // introduction
    cout << "Hello stranger. Would you like to speak with an AI?\n";
    cout << "yes or no? Type your response.\n";
    cin >> input;
    
    while (input != "yes" && input != "no") {
        cout << "Hello stranger. Would you like to speak with an AI?\n";
        cout << "yes or no? Type your response.\n";
        cin >> input;
    }
    // sadface
    int counter = 0;
    while (input == "no") {
        counter++;
        if(counter == 2){
            return -1;
        }
        if (input != "yes") {
            cout << "Sorry to disturb you. Have a good day.\n" << endl;
        }
        // re-introduction
        if (input == "no") {
            cout << "Hello stranger. Would you like to speak with an AI?\n";
            cout << "yes or no? Type your response.\n";
            cin >> input;
        }
    }
    // yay, proceed
    if (input == "yes") {
        // User's name.
        cout << "Alright! What is your name? \n";
        cin >> myName;
        cout << endl;
        
        // AI's name.
        cout << "Name your AI partner.\n";
        cin >> aiName;
        cout << endl;
        
        // AI's introduction
        cout << aiName << ": Hello " << myName << ".\n";
        cout << aiName << ": I am " << aiName << ". Nice to meet you.\n";
        
        // Joke sequence
        cout << aiName <<": Would you like to hear a joke? \n";
        cout << "Type yes or no?:\n";
        
        cout << myName << ": "; cin >> input;
        cout << endl;
        
        while (input != "yes" && input != "no") {
            cout << "Type yes or no?:\n";
            cout << myName << ": "; cin >> input;
            cout << endl;
        }
        // no joke
        counter = 0;
        while (input == "no") {
            // two tries
            counter++;
            if(counter == 2){
                return -2;
            }
            if (input != "yes") {
                cout << aiName << ": Aite, Piss off then, you numbskull!\n";
                cout << aiName << ": Sorry about that, something must have disturbed my 'BIOFlux Core'.\n";
                cout << aiName << ": Nice to have met you. Have a nice day.\n" << endl;
            }
            // ask user again
            if (input == "no") {
                cout << aiName <<": Would you like to hear a joke? \n";
                cout << "Type yes or no?:\n";
                cout << myName << ": "; cin >> input;
            }
        }
        // Joke sequence runs
        if (input == "yes") {
            cout << aiName << ": Ok. I'm glad.\n";
            cout << aiName << ": Why don't mathematicians get burnt at the beach?\n";
            cout << aiName << ": If you want to know the reason.\n";
        }
        // joke punch-line
        cout << aiName << ": Please Type 'why'\n";
        cout << myName << ": "; cin >> input;
        // ask user
        while (input != "why") {
            cout << aiName << ": Please Type 'why'\n";
            cout << myName << ": "; cin >> input;
        }
        if (input == "why") {
            cout << aiName << ": Because they have 'Tan'.\n";
            cout << aiName << ": Ha! Ha! Ha! Ha! Ha!\n" << endl;
            // cout << aiName << ": Nice to have met you. Have a splendid day.\n\n";
        }
        // conclusion
        cout << aiName << ": Did I make you laugh.\n";
        cout << "Type yes or no: ";
        cin >> input;
        
        while (input != "yes" && input != "no") {
            cout << aiName << ": Did I make you laugh.\n";
            cout << "Type yes or no: ";
            cin >> input;
        }
        // funny
        if (input == "yes") {
            cout << aiName << ": I'm glad. Nice to have met you. Have a splendid day.\n" << endl;
        }
        // not funny
        if (input == "no") {
            cout << aiName << ": Oh! Sorry I didn't make you laugh.\n";
            cout << aiName << ": I will try harder next time.\n";
            cout << aiName << ": Nice to have met you. Have a splendid day.\n" << endl;
        }
    }
    return 0;
}
