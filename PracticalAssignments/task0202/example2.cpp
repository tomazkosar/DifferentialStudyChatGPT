#include <iostream>
#include <vector>
#include <ctime>
#include "FuelLog.h"

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

void fillVector(vector<FuelLog*> &fuelLogs, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        fuelLogs.push_back(new FuelLog(i + 800, i % 30 + 1, i % 12 + 1, 2022,  (rand() % 31) + 30));
    }
}

void printVector(const vector<FuelLog*> &fuelLogs) {
    for (unsigned int i = 0; i < fuelLogs.size(); i++)
        cout << fuelLogs[i]->toString() << ((i < fuelLogs.size() - 1) ? ", " : ".") << std::endl;
}

int main() {
    const unsigned int refueling = 20;
    vector<FuelLog*> fuelLogs;

    srand(time(nullptr));

    bool running = true;
    int selection;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                fillVector(fuelLogs, refueling);
                break;
            case 2:
                printVector(fuelLogs);
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