// To find volume of cuboid 

#include<iostream>
using namespace std;

class Box{
    public:
    int length,breadth,height;        // declaration of variables 

    void volume(){                        // define function
        int x;
        x = length*breadth*height;
        cout<<"Volume of cuboid is "<< x;

    }
};
int main() {
    Box cuboid;                         // creating object
    cuboid.length = 5;
    cuboid.breadth = 6;
    cuboid.height = 7;

    cuboid.volume();                 // calling function 
    return 0;

}
