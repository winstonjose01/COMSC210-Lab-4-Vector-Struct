// COMSC-210 | Lab 4 | Winston Jose
//

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

    vector<Color> myVec(n);
    myVec.clear();
    // Generate random integers between 0-255 RGB color
    uniform_int_distribution<> color_distr{0,255};
    for (int i = 0; i < n; i++){
        temp.red = color_distr(gen);
        temp.green = color_distr(gen);
        temp.blue = color_distr(gen);
        myVec.push_back(temp);
    }

    cout << setw(4) << "Color" << setw(8) << "Red" << setw(9) << "Green" << setw(8) << "Blue" << endl;
    cout << setw(4) << "-----" << setw(8) << "---" << setw(9) << "-----" << setw(8) << "----" << endl;
    int i =  1;
    for (const Color& val : myVec){
        cout << setw(3) << i << setw(10) << val.red << setw(8) << val.green << setw(8) << val.blue << endl;
        cout << setw(4) << "-----" << setw(8) << "---" << setw(9) << "-----" << setw(8) << "----" << endl;
        i++;
    }
}
