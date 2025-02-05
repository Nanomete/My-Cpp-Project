#include <iostream>
#include <cmath>
using namespace std;

void printMenu() {
    cout << "=====MENU=====\n";
    cout << "1) Random Max Value\n";
    cout << "2) Area Value of Circle\n";
    cout << "3) Calculate Petagolus\n";
    cout << "4) Exit\n";
    cout << "==============\n";
}

void maxAndmin() {
    double x = rand() % 101; // random between 0 to 100
    double y = rand() % 101;

    cout << "x : " << x << endl;
    cout << "y : " << y << endl;

    if (x > y) {
        cout << "Max value is x.\n";
    } else if (y > x) {
        cout << "Max value is y.\n"; // Corrected to show y as max value
    } else {
        cout << "Both values are equal." << endl;
    }
}

void CaculatePetagolus() {
    int a, b, c;
    cout << "Input side a : ";
    cin >> a;
    cout << "Input side b : ";
    cin >> b;
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    cout << "Side c = " << c << endl;
}

void areaCircle() {
    const double PI = 3.14;
    double r;
    double Area;
    cout << "Input radius: ";
    cin >> r;
    Area = PI * pow(r, 2);
    cout << "Area of circle : " << Area << endl;
}

int main() {
    int seLect_Function;
    bool state = true;
    while (state) {
        printMenu();
        cout << "Select Menu : ";
        cin >> seLect_Function;
        cout << "--------------\n";
        switch (seLect_Function)
        {
        case 1:
            maxAndmin();
            break;
        case 2:
            areaCircle();
            break;
        case 3:
            CaculatePetagolus();
            break;
        case 4:
            state = false;
            break;
        default:
            cout << "Function not found\n" << "Please select again\n";
            break;
        }
    }
    return 0; // Return 0 to indicate successful program termination
}
