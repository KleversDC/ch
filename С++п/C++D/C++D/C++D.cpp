#include <iostream>
using namespace std;
//Тема: Цикли тиждень 6
//1
    //int main() {
    //    int a;
    //    cout << "Enter namder A: ";
    //    cin >> a;

    //    if (a > 500) {
    //        cout << "The number must be less than or equal to 500." << endl;
    //    }

    //    int sum = 0;
    //    for (int i = a; i <= 500; ++i) {
    //        sum += i;
    //    }

    //    cout << "The sum of numbers from " << a << " up to 500 = " << sum << endl;
    //}
    // 
    // 
//2
//int main() {
//    int x, y;
//    cout << "Enter the number x : ";
//    cin >> x;
//    cout << "Enter the number y: ";
//    cin >> y;
//
//    long long result = pow(x, y);
//    cout << x << " in degree " << y << " = " << result << endl;
//
//    return 0;
//}
// 
// 
//3
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 1000; ++i) {
//        sum += i;
//    }
//
//    double average = sum / 1000.0;
//    cout << "Arithmetic average of numbers from 1 to 100 = " << average << endl;
//}
// 
// 
//4
//int main() {
//    int a;
//    cout << "Enter the number a (1 <= a <= 20): ";
//    cin >> a;
//    if (a < 1 || a > 20) {
//        cout << "The number must be in the range from 1 to 20." << endl;
//    }
//
//    long long product = 1;
//    for (int i = a; i <= 20; ++i) {
//        product *= i;
//    }
//
//    cout << "Product of numbers from " << a << " to 20 = " << product << endl;
//}
// 
// 
//5
//int main() {
//    int k = 7;
//    cout << "Table of multiplication by 20 " << k << ":\n";
//
//    for (int i = 2; i <= 10; ++i) {
//        cout << k << " x " << i << " = " << k * i << endl;
//    }
//}
//
//
//6
//int main() {
//    int count = 0;
//    for (int i = 100; i <= 999; ++i) {
//        int hundreds = i / 100;
//        int tens = (i / 10) % 10;
//        int units = i % 10;
//        if (hundreds == tens || hundreds == units || tens == units) {
//            ++count;
//        }
//    }
//    cout << "Number of numbers with two identical digits: " << count << endl;
//}
//
//
//7
//int main() {
//    int count = 0;
//    for (int i = 100; i <= 999; ++i) {
//        int hundreds = i / 100;
//        int tens = (i / 10) % 10;
//        int units = i % 10;
//        if (hundreds != tens && hundreds != units && tens != units) {
//            ++count;
//        }
//    }
//    cout << "The number of numbers in which all digits are different: " << count << endl;
//}
//
//
//8 Вивести всі числа, на які задане число ділиться без залишку
//int main() {
//    int num;
//    cout << "Enter an integer: ";
//    cin >> num;
//
//    cout << "The numbers on which " << num << " is divisible without a remainder: ";
//    for (int i = 1; i <= num; ++i) {
//        if (num % i == 0) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//}
//
//
//9 Завдання 7: Вивести всі числа, на які обидва введені числа діляться без залишку
//int main() {
//    int x, y;
//    cout << "Enter two integers: ";
//    cin >> x >> y;
//
//    cout << "Numbers by which both numbers are divisible without a remainder: ";
//    for (int i = 1; i <= min(x, y); ++i) {
//        if (x % i == 0 && y % i == 0) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//}


//Тема: Цикли Тиждень 7
//int main() {
//    int num;
//    cout << "Enter an integer: ";
//    cin >> num;
//
//    int count = 0, sum = 0, zeros = 0, temp = num;
//    while (temp != 0) {
//        int digit = temp % 10;
//        sum += digit;
//        if (digit == 0) {
//            ++zeros;
//        }
//        temp /= 10;
//        ++count;
//    }
//
//    double average = count > 0 ? static_cast<double>(sum) / count : 0;
//
//    cout << "Number of digits: " << count << endl;
//    cout << "Sum of digits: " << sum << endl;
//    cout << "Arithmetic average: " << average << endl;
//    cout << "Number of zeros: " << zeros << endl;
//}
//
//
//void printChessBoard(int cellSize) {
//    for (int row = 0; row < 8 * cellSize; ++row) {
//        for (int col = 0; col < 8 * cellSize; ++col) {
//            if (((row / cellSize) + (col / cellSize)) % 2 == 0)
//                cout << "*";
//            else
//                cout << "-";
//        }
//        cout << endl;
//    }
//}
//int main() {
//    int size;
//    cout << "Enter the cell size: ";
//    cin >> size;
//    printChessBoard(size);
//}


//Тема: Логічні операторий оператори розгалужень Тиждень 4
// 1
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//
//    if (num % 2 == 0) {
//        cout << "The number is even." << endl;
//    }
//    else {
//        cout << "The number is odd." << endl;
//    }
//}
//
//
//2
//int main() {
//    int num1, num2;
//    cout << "Enter the first number: ";
//    cin >> num1;
//    cout << "Enter the second number: ";
//    cin >> num2;
//
//    if (num1 < num2) {
//        cout << "A smaller number: " << num1 << endl;
//    }
//    else {
//        cout << "A smaller number: " << num2 << endl;
//    }
//}
//
//
//3
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//
//    if (num > 0) {
//        cout << "The number is positive." << endl;
//    }
//    else if (num < 0) {
//        cout << "The number is negative." << endl;
//    }
//    else {
//        cout << "The number is zero." << endl;
//    }
//}
//
//
//4
//int main() {
//    int grades[5];
//    int sum = 0;
//
//    for (int i = 0; i < 5; ++i) {
//        cout << "Enter a rating" << i + 1 << ": ";
//        cin >> grades[i];
//        sum += grades[i];
//    }
//
//    double average = sum / 5.0;
//
//    if (average >= 4.0) {
//        cout << "The student is admitted to the exam." << endl;
//    }
//    else {
//        cout << "The student is not admitted to the exam." << endl;
//    }
//}
//
//
//5
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//
//    if (num % 2 == 0) {
//        cout << "Result: " << num * 3 << endl;
//    }
//    else {
//        cout << "Result: " << num / 2.0 << endl;
//    }
//}
//
//
//6
//int main() {
//    double num1, num2, result;
//    char operation;
//
//    cout << "Enter the first number: ";
//    cin >> num1;
//    cout << "Enter the second number: ";
//    cin >> num2;
//    cout << "Select an operation: ";
//    cin >> operation;
//
//    switch (operation) {
//    case '+':
//        result = num1 + num2;
//        break;
//    case '-':
//        result = num1 - num2;
//        break;
//    case '*':
//        result = num1 * num2;
//        break;
//    case '/':
//        if (num2 != 0) {
//            result = num1 / num2;
//        }
//        else {
//            cout << "Error: division by zero!" << endl;
//        }
//        break;
//    default:
//        cout << "Wrong operation!" << endl;
//
//    }
//    cout << "Result: " << result << endl;
//}
//
//
//7
//int main() {
//    int num1, num2;
//    cout << "Enter the first number: ";
//    cin >> num1;
//    cout << "Enter the second number: ";
//    cin >> num2;
//
//    if (num1 == num2) {
//        cout << "Числа рівні." << endl;
//    }
//    else if (num1 < num2) {
//        cout << "The numbers are in ascending order: " << num1 << ", " << num2 << endl;
//    }
//    else {
//        cout << "The numbers are in ascending order: " << num2 << ", " << num1 << endl;
//    }
//
//    return 0;
//}
















