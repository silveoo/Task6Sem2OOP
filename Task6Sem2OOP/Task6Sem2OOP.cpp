#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void sortBubble(int*);
void sortBubble(double*);

int main()
{
    setlocale(LC_ALL, "rus");
    int* masA = new int[10];
    double* masB = new double[10];
    cout << "Сгенерированный массив: [";
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int temp = 1 + rand() % 100;
        masA[i] = temp;
        if (i == 9) {
            cout << temp;
        }
        else {
            cout << temp << " ";
        }
    }

    cout << "]" << endl;

    sortBubble(masA);

    cout << "Отсортированный массив: [";
    for (int i = 0; i < 10; i++)
    {
        if (i == 9) {
            cout << masA[i];
        }
        else {
            cout << masA[i] << " ";
        }
    }

    cout << ']' << endl << endl;

    cout << "Сгенерированный массив:    [";
    for (int i = 0; i < 10; i++) {
        double temp = (1 + rand() % 50) / 2.0;
        masB[i] = temp;
        if (i == 9) {
            cout << temp;
        }
        else {
            cout << temp << " ";
        }
    }

    cout << "]" << endl;
    sortBubble(masB);

    cout << "Отсортированный массив:    [";
    for (int i = 0; i < 10; i++)
    {
        if (i == 9) {
            cout << masB[i];
        }
        else {
            cout << masB[i] << " ";
        }
    }
    cout << ']' << endl;
    return 0;
}

void sortBubble(int* list) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (list[j] < list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

void sortBubble(double* list) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (list[j] < list[j + 1]) {
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}
