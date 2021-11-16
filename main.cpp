#include <iostream>

using namespace std;

int SUS( int a, int b);

int main()
{
    int x;
    int y;

    cout << "Ievadiet 1.ciparu: ";
    cin >> x;
    cout <<"Ievadiet 2.ciparu: ";
    cin >> y;

    cout <<"Jusu ievadito skaitlu summa ir "<< SUS(x,y) << endl;

    return 0;
}

int SUS(int a, int b)
{
    int r;
    r = a + b;

    return r;
}
