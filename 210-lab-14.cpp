// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 14 -- reusing the code from color struct lab 

#include <iostream>
#include <iomanip>

using namespace std;

const int W15 = 15;


class Color {
    private:
        int red;
        int green;
        int blue;

    public:
        
        //setters
        void setRed(int r) {
            red = r;
        }

        void setGreen(int g) {
            green = g;
        }

        void setBlue(int b) {
            blue = b;
        }

        //getters
        int getRed() {
            return red;
        }

        int getGreen() {
            return green;
        }

        int getBlue() {
            return blue;
        }

        // other method
        void print() {
            cout << setw(W15) << "Red: " << red << endl;
            cout << setw(W15) << "Green: " << green << endl;
            cout << setw(W15) << "Blue: " << blue << endl;
        }
};


int main() {

    Color color1;

    color1.setRed(165);
    color1.setGreen(0);
    color1.setBlue(68);

    cout << "Red value: " << color1.getRed() << endl;
    cout << "Green value: " << color1.getGreen() << endl;
    cout << "Blue value: " << color1.getBlue() << endl << endl;

    color1.print();


    return 0;
}
