#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void showArr(int arr[], int L) {
    cout << "[";
    for (int i = 0; i < L; i++)
        cout << arr[i] << ", ";
    cout << "\b\b]\n\n";
}

template <typename T> int searchIndex(T arr[], int L, T key, int begin = 0) {
    for (int i = begin; i < L; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

template <typename T> int searchLastIndex(T arr[], int L, T key, int begin = -1) {
    if (begin == -1)
        begin == L - 1;
    for (int i = L - 1; i > 0; i--)
        if (arr[i] == key)
            return i;
    return -1;
}

int maxElement(int arr[], int L) {
    int max = 0;
    for (int i = 0; i < L; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int minElement(int arr[], int L) {
    int min = 0;
    for (int i = 0; i < L; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

double meanValue(int arr[], int L) {
    double sum = 0;
    for (int i = 0; i < L; i++)
        sum += arr[i];
    return  sum / 100;
}

void range(int arr[], int L, int num1, int num2) {
    for (int i = 0; i < L; i++) {
        if (arr[i] > num1 && arr[i] <= num2)
            cout << arr[i] << " ";
    }
    cout << "\n\n";
}

int counter(int arr[], int L, int num) {
    int c = 0;
    for (int i = 0; i < L; i++) {
        if (arr[i] == num)
            c++;
    }
    return c;
}

int main() {
    int n, m;
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    cout << "Изначальный массив: ";
    const int L = 100;
    int array[L];
    for (int i = 0; i < L; i++)
        array[i] = rand() % (100 + 1 - (-100)) + (-100);
    showArr(array, L);

    cout << "Введите число из случайного массива: ";
    cin >> n;
    cout << "Первый индекс числа " << n << " в случайном массиве = " << searchIndex(array, L, n) << "\n\n";

    cout << "Введите число из случайного массива: ";
    cin >> n;
    cout << "Последний индекс числа " << n << " в случайном массиве = " << searchLastIndex(array, L, n) << "\n\n";

    cout << "Максимальный элемент случайного массива = " << maxElement(array, L) << "\n\n";

    cout << "Минимальны элемент случайного массива = " << minElement(array, L) << "\n\n";

    cout << "Среднее арифметическое всех элементов случайного массива = " << meanValue(array, L) << "\n\n";

    cout << "Введите начало и конец диапазона: ";
    cin >> n >> m;
    range(array, L, n, m);

    cout << "Введите число: ";
    cin >> n;
    cout << "Колличество вхождений в массив числa " << n << " = " << counter(array, L, n) << "\n\n";
    return 0;
}