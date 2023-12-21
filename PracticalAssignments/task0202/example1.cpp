#include <iostream>
#include <vector>
#include <ctime>

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

void fillVector(vector<unsigned int> &kilometers, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        kilometers.push_back(i + 800);
    }
}

void printVector(const vector<unsigned int> &kilometers) {
    for (unsigned int i = 0; i < kilometers.size(); i++)
        cout << kilometers[i] << ((i < kilometers.size() - 1) ? ", " : ".") << " ";
}

int main() {
    const unsigned int refueling  = 20;
    vector<unsigned int> kilometers;

    srand(time(nullptr));

    bool running = true;
    int selection;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                fillVector(kilometers, refueling);
                break;
            case 2:
                printVector(kilometers);
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

    return 0;
}