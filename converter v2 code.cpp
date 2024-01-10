#include <iostream>
#include <cmath>
using namespace std;


void func1(int Input) {
    double f2c = (Input - 32) * 5 / 9;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Output : \n" << (Input - 32) * 5 / 9 << "C" << endl;
}

void func2(int Input) {
    double c2f = Input * 9 / 5 + 32;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Output : \n" << Input * 9 / 5 + 32 << "F" << endl;
}



int main() {
    double Input;
    int Mode;
    int times = 0;
    cout << "Welcome to YAN BIN's Fahrenheit and Celsius Converter." << endl;
    cout << " " << "\n";
    
    while (times < 100000) {
        cout << " \n" << " \n";
        cout << "Select a mode." << endl;
        cout << "1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n" << endl;
        cin >> Mode;
        cout << "_____________________________________________________________________________________________________________________" << endl;
        cout << "Input : " << endl;
        cin >> Input;

        switch (Mode) {
        case 1:
            func1(Input);
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            break;
        case 2:
            func2(Input);
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            break;
        default:
            cout << "Only select number 1 or 2." << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            break;
        }
    }
    return 0;
}
