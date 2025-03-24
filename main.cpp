#include <iostream>

using namespace std;

float sum(float n1, float n2)
{
    cout << "число 1: "; cin >> n1;
    cout << "число 2: "; cin >> n2;
    return n1 + n2;
}
float raz(float n1, float n2)
{
    cout << "Первое число: " << endl; cin >> n1;
    cout << "Второе число: " << endl; cin >> n2;
    return n1 - n2;
}

int main() {
    float a;
    float b;
    cout << sum(a, b) << " Sum" << endl;
    cout << raz(a, b) << " Raz" << endl;


    return 0;
}
