// Write a c++ program to sttore 5 customers order numbers in a queue and process the order in the same order in which they were received 

#include <iostream>
#include <string>
using namespace std;

int main(){
    int queue[5];
    int front = 0;
    int rare = 0;

    for(int i=0; i<5; i++){
        cout<<"Enter your order number "<<i+1<<": ";
        cin>>queue[rare];
        rare++;
    }

    cout<<"\n Processing Order \n";

    while(front<rare){
        cout<<"Processing: "<<queue[front]<< endl;
        front++;
    }
    return 0;
}
