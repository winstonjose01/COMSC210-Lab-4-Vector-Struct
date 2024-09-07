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

    random_device seed;
    mt19937 gen{seed()};
    uniform_int_distribution<> n_distr{25,50};
    int n = n_distr(gen);
    cout << "n =" << n;

    vector<Color> myVec(n);

    uniform_int_distribution<> color_distr{0,255};
    for (int i = 0; i < n; i++){
        temp.red = color_distr(gen);
        temp.green = color_distr(gen);
        temp.blue = color_distr(gen);
        myVec.push_back(temp);
    }
    for (const Color& val : myVec){
        cout << val.red << "\t" << val.green << "\t" << val.blue << endl;
    }
}
