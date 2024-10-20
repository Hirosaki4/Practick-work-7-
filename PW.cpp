#include <iostream>
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int countZero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            countZero++;
        }
    }

    cout << "Кількість елементів, рівних нулю: " << countZero << endl;

    delete[] arr;

    return 0;
}
