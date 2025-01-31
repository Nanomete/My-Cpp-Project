#include <iostream>

int main() {
    using namespace std;
    string Name;
    int Age;
    cout << "Enter your name : ";
    getline(cin, Name);
    cout << "Enter your age : ";
    cin >> Age;

    cout << "Name : " << Name << '\n';
    cout << "Age : " << Age << '\n';
}