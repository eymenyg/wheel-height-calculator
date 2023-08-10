#include <iomanip>
#include <iostream>
using namespace std;

void getUserInput (int &, int &, int &);

int main(int argc, char **argv) {
    const float inToMm = 25.4;
    int tireWidth, aspectRatio, rimDiameter;
    float sidewallHeight;
    float rimDiaMM;
    float totalHeight;

    if(argc == 1)
        getUserInput(tireWidth, aspectRatio, rimDiameter);

    else if((argc > 1 && argc < 4) || argc > 4) {
        cout << "Incorrect arguments. Enter width, sidewall aspect ratio, and rim diameter." << endl;
        return -1;
    }

    else {
        try {
            tireWidth = stoi(*(argv+1));
            aspectRatio = stoi(*(argv+2));
            rimDiameter = stoi(*(argv+3));
        }
        catch(...) {
            cout << "Bad arguments. Enter width, sidewall aspect ratio, and rim diameter." << endl;
            return -1;
        }
    }

    sidewallHeight = tireWidth * aspectRatio * 0.01;
    rimDiaMM = rimDiameter * inToMm;

    totalHeight = 2 * sidewallHeight + rimDiaMM;

    cout << "Total height of the wheel and tire is: " << totalHeight << " mm ";
    cout << "(" << fixed << setprecision(2) << totalHeight / inToMm << " in)\n";

    return 0;
}

void getUserInput (int &tireWidth, int &aspectRatio, int &rimDiameter) {
    cout << "Enter tire width in mm: ";
    cin >> tireWidth;
    cout << "Enter tire aspect ratio: ";
    cin >> aspectRatio;
    cout << "Enter wheel diameter in inches: ";
    cin >> rimDiameter;
    cout << endl;
}
