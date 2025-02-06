/*
 //problem1
 #include <iostream>

#include <iostream>

using namespace std;

int main() {
    double number;


    cout << "Enter a number: ";
    cin >> number;


    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;

    }

    return 0;
}
*/ //problem2
/*#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
//problem3
#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
//problem  4
#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}
//problem5
#include <iostream>

using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0 ) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
//problem6
#include <iostream>

using namespace std;

int main() {
    int speed;

    cout << "Enter the speed of the vehicle: ";
    cin >> speed;

    if (speed < 20) {
        cout << "Too slow" << endl;
    } else if (speed > 80) {
        cout << "Too fast" << endl;
    } else {
        cout << "Just right" << endl;
    }

    return 0;
}

//problem7
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
//problrm8
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num >= 0) {
        if (num > 0) {
            cout << "Positive" << endl;
        } else {
            cout << "Zero" << endl;
        }
    } else {
        cout << "Negative" << endl;
    }

    return 0;
}

//problem9
#include <iostream>
using namespace std;

int main() {
    char signal;
    cin >> signal;

    if (signal == 'g') {
        cout << "Go!" << endl;
    } else if (signal == 'y') {
        cout << "Get ready!" << endl;
    } else if (signal == 'r') {
        cout << "Stop" << endl;
    }

    return 0;
}

//problem 10

#include <iostream>
using namespace std;

int main() {
    int grade;
    cin >> grade;

    switch (grade / 10) {
        case 10:
        case 9:
            cout << "A" << endl;
        break;
        case 8:
            cout << "B" << endl;
        break;
        case 7:
            cout << "C" << endl;
        break;
        case 6:
            cout << "D" << endl;
        break;
        default:
            cout << "F" << endl;
        break;
    }

    return 0;
}

//problem11
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            cout << "Divisible" << endl;
        } else {
            cout << "Not Divisible" << endl;
        }
    } else {
        cout << "Division by zero is not allowed!" << endl;
    }

    return 0;
}

//problrm 12
#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    cin >> angle1 >> angle2 >> angle3;

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        cout << "Triangle can be formed" << endl;
    } else {
        cout << "Triangle cannot be formed" << endl;
    }

    return 0;
}

//problem 13
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else {
        cout << "Not an alphabet" << endl;
    }

    return 0;
}

//problem14
#include <iostream>
using namespace std;

int main() {
    double weight1, price1, weight2, price2;

    cout << "Enter weight and price for package 1: ";
    cin >> weight1 >> price1;

    cout << "Enter weight and price for package 2: ";
    cin >> weight2 >> price2;

    double costPerUnit1 = price1 / weight1;
    double costPerUnit2 = price2 / weight2;

    if (costPerUnit1 < costPerUnit2) {
        cout << "Package 1 has a better price." << endl;
    } else if (costPerUnit1 > costPerUnit2) {
        cout << "Package 2 has a better price." << endl;
    } else {
        cout << "Both packages have the same price." << endl;
    }

    return 0;
}

//problem 15
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    if (hundreds == ones) {
        cout << "Palindrome number" << endl;
    } else {
        cout << "Not a palindrome number" << endl;
    }

    return 0;
}

//problem 16
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double distance = sqrt(x * x + y * y);

    if (distance <= 10) {
        cout << "Inside the circle" << endl;
    } else {
        cout << "Outside the circle" << endl;
    }

    return 0;
}
//problem17
#include <iostream>
using namespace std;

int main() {
    float gpa;
    cout << "Enter your GPA: ";
    cin >> gpa;

    int gpaRange = (gpa >= 4.0) ? 4 : (gpa >= 3.5) ? 3 : (gpa >= 3.0) ? 2 : 1;

    switch (gpaRange) {
        case 4:
            cout << "Scholarship amount: 80%" << endl;
        break;
        case 3:
            cout << "Scholarship amount: 60%" << endl;
        break;
        case 2:
            cout << "Scholarship amount: 50%" << endl;
        break;
        default:
            cout << "No scholarship" << endl;
        break;
    }

    return 0;
}
*/