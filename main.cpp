#include <iostream>

using namespace std;

int main()
{

    string cadena;

    getline(cin, cadena);
    //cout << cadena.size() << endl;
    //cout << sizeof(cadena) << endl;

    if (cadena == "float")
    {
        cout << sizeof(cadena) << endl;
    }
    else if (cadena == "char")
    {

        cout << sizeof(cadena) << endl;
    }
    else if (cadena == "int")
    {

        cout << sizeof(cadena) << endl;
    }
    else if (cadena == "short")
    {

        cout << sizeof(cadena) << endl;
    }
    else if (cadena == "double")
    {

        cout << sizeof(cadena) << endl;
    }
    else if (cadena == "long")
    {

        cout << sizeof(cadena) << endl;
    }
    return 0;
}