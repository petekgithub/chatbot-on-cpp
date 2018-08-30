#include <iostream>

using namespace std;

int main(){

    cout << "Welcome to the Tarot Fortune Chatbot!" << endl;
    cout << "Created By Petek Savas Hamitbeyli" << endl;
    cout << "*****************************************" << endl;

    string name;
    string age;
    string horoscope;
    string civil_status;

    int quitting;

    while(true) {
        cout << "Hello, hello..What is your name?" << endl;
        getline(cin,name);
        cout << "Nice to meet you, incredible person " << name << " !" << endl;
        cout << "How old are you my dear?" << endl;
        getline(cin,age);
        cout << "Hmm,very very energetic age :) " << age << " years old. Ahh youth!" << endl;
        cout << "What is your star sign ?" << endl;
        getline(cin,horoscope);
        cout << " Uuuh, this month will be your month! " << horoscope << " is under the Venus influence, but this is good for you. Please,don't forget to help other people, especially this month :) " << endl;
        cout << "What is your status? Do you have a boyfriend or girlfriend?" << endl;
        getline(cin,civil_status);
        cout << "Really ! Love is on the way, it is coming to you. Don't forget to smile :)" << endl;
        cout << "*************************************" << endl;

        cout << "Do you want to start the program again? (Press 1 for Yey and 2 for Nay)" << endl;
        cin >> quitting;
        if (quitting == 1) {

        }
        else if (quitting == 2) {
                 break;
        }
        else {
                cout << "Please enter a correct number, next time my dear!" << endl;
                break;

        }
    }

    }


