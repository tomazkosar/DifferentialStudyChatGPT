#include <iostream>

using namespace std;

void menu() {
    cout << "============================" << endl;
    cout << "=========== MENU ===========" << endl;
    cout << "============================" << endl;
    cout << "1 ... GENERATE KM TRAVELLED" << endl;
    cout << "2 ... PRINT KM TRAVELLED" << endl;
    cout << "0 ... EXIT" << endl;
    cout << "============================" << endl;
    cout << "Select: ";
}

void fillArray(unsigned int* array, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        array[i] = i + 800;
    }
}

void printArray(const unsigned int* array, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        cout << ((i > 0) ? ", " : "") << array[i];
    }
}

int main() {
    const unsigned int refueling = 20;
    unsigned int* kilometers = new unsigned int[refueling];

    bool running = true;
    int selection;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                fillArray(kilometers, refueling);
                break;
            case 2:
                printArray(kilometers, refueling);
                break;
            case 0:
                running = false;
                break;
            default:
                cout << "Wrong selection!" << endl;
                break;
        }
        cout << endl;
    } while (running);

    delete[] kilometers;

    return 0;
}