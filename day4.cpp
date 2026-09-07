#include <iostream>
using namespace std;

int main() {
    int marks, total = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;
        total += marks;
    }

    double percentage = total / 5.0;

    cout << "Total: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A";
    else if (percentage >= 75)
        cout << "Grade: B";
    else if (percentage >= 60)
        cout << "Grade: C";
    else if (percentage >= 40)
        cout << "Grade: D";
    else
        cout << "Fail";

    return 0;
}