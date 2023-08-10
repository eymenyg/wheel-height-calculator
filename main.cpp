#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    const float inToMm = 25.4;
    int tireWidth, aspectRatio, rimDiameter;
    float sidewallHeight;
    float rimDiaMM;
    float totalHeight;

    cout << "Enter tire width in mm: ";
    cin >> tireWidth;
    cout << "Enter tire aspect ratio: ";
    cin >> aspectRatio;
    cout << "Enter wheel diameter in inches: ";
    cin >> rimDiameter;
    cout << endl;

    sidewallHeight = tireWidth * aspectRatio / 100;
    rimDiaMM = rimDiameter * inToMm;

    totalHeight = 2 * sidewallHeight + rimDiaMM;

    cout << "Total height of the wheel and tire is: " << totalHeight << " mm ";
    cout << "(" << fixed << setprecision(2) << totalHeight / inToMm << " in)\n";

    return 0;
}
