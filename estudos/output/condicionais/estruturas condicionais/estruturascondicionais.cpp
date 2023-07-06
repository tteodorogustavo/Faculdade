#include <iostream>

using namespace std;

bool ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int ano;
    bool bissexto;

    cin >> ano;

    bissexto = ehBissexto(ano);

    if (bissexto) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}