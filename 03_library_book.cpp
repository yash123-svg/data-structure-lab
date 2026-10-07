include <iostream>
#include <string>
using namespace std;

int main(){
    int id1,id2,id3;
    string title1,title2,title3;

    cout << "Enter Book id1: ";
    cin >> id1;

    cin.ignore();
    cout << "Enter Book Title1: ";
    getline(cin, title1);

    cout << "Enter Book id2: ";
    cin >> id2;

    cin.ignore();
    cout << "Enter Book Title2: ";
    getline(cin, title2);


    cout << "Enter Book id3: ";
    cin >> id3;

    cin.ignore();
    cout << "Enter Book Title3: ";
    getline(cin, title3);


    // Display 

    cout<< "\n\n=========================Library Books============================================\n";
    cout<< "\n Book Id1 = "<<id1;
    cout<< "\t\t\t\t Book Title1 = "<<title1;
    cout<< "\n Book Id1 = "<<id2;
    cout<< "\t\t\t\t Book Title2 = "<<title2;
    cout<< "\n Book Id1 = "<<id3;
    cout<< "\t\t\t\t Book Title3 = "<<title3;
    cout<< "\n\n==================================================================================\n";
    return 0;
