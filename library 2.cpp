include <iostream>
#include<string>
using namespace std;

int main()
 {
    int bookIds[5];
    int searchId;

    cout << "Enter IDs of 5 library books:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> bookIds[i];
    }

    cout << "Enter the book ID to search: ";
    cin >> searchId;

    for (int i = 0; i < 5; i++) {
        if (bookIds[i] == searchId) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Book found" << endl;
    else
        cout << "Book not found" << endl;

    return 0;
}
