#include <iostream>
#include <windows.h>
using namespace std;
int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int arr[12] = { 3, 4, 6, 1, 10, 9, 2, 5, 7, 11, 8, 12 };
int sum = 0;
for (int i = 0; i < 12; i++) {
sum += arr[i];
}
double average = sum / 12.0;
int count = 0;
for (int i = 0; i < 12; i++) {
if (arr[i] > average) {
count++;
}
}
cout << "Середнє арифметичне: " << average << endl;
cout << "Кількість елементів більших за середнє: " << count << endl;
return 0;
}
