//Write a c++ program to store the ids of 5 library books in an array and search for a given book id display "Book Found" if id id present otherwise "Book not found"


#include <iostream>
#include<string>
using namespace std;

int main(){
    int Book[5];
    int Searchid;

    for(int i=0;i<5;i++){
        cout << "Enter ID of Book "<<i+1<<": ";
        cin>>Book[i];
    }

    cout << "Enter the Book Id you want to search: ";
    cin >> Searchid;

    for (int i=0;i<5;i++){
        if(Book[i]==Searchid){
            cout << "Book Found";
            return 0;
        }
    }
    cout << "Book not Found";

    return 0;
