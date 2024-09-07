// COMSC-210 | Lab 4 | Winston Jose
// https://github.com/winstonjose01/COMSC210-Lab-4-Vector-Struct/commits/main/

#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main(){
    Color temp;
    // Seed the random generator
    random_device seed;
    mt19937 gen{seed()};
    // Generate random integers between 25-50
    uniform_int_distribution<> n_distr{25,50};
    int n = n_distr(gen);

    //Create an empty vector of type struct
    vector<Color> myVec(n);
    myVec.clear(); //Initialize the vector

    // Generate random integers between 0-255 RGB color
    uniform_int_distribution<> color_distr{0,255};
    for (int i = 0; i < n; i++){
        temp.red = color_distr(gen);
        temp.green = color_distr(gen);
        temp.blue = color_distr(gen);
        //Populate the vector with the temp struct items
        myVec.push_back(temp);
    }
    // Print the header for the table
    cout << setw(4) << "Color" << setw(8) << "Red" << setw(11) << "Green" << setw(8) << "Blue" << endl;
    int i =  1;
    // Loop and print the vector contents in a table
    for (const Color& val : myVec){
        cout << setw(4) << "-----" << setw(9) << "-----" << setw(10) << "-----" << setw(9) << "-----" << endl;
        cout << setw(3) << i << setw(10) << val.red << setw(9) << val.green << setw(9) << val.blue << endl;
        i++;
    }
}
