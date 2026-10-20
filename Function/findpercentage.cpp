#include <iostream>
using namespace std;

float findPercentage(int total) {
    return total / 5.0;
}

int main() {
    int total;

    cout << "Enter total marks out of 500: ";
    cin >> total;

    float percentage = findPercentage(total);

    cout << "Percentage: " << percentage << "%";

    return 0;
}