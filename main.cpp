#include <iostream>

using namespace std;

int main() {

    string cadena;
    int a;
    float b;
    short c;
    double d;
    long e;

    getline(cin, cadena);
    //cout << cadena.size() << endl;
    cout << sizeof(cadena) << endl;

    cin >> a;
    cout << sizeof(a) << endl;

    cin >> b;
    cout << sizeof(b) << endl;

    cin >> c;
    cout << sizeof(c) << endl;

    cin >> d;
    cout << sizeof(d) << endl;
    
    cin >> e;
    cout << sizeof(d) << endl;

    
    return 0;
}