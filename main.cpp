#include <iostream>

using namespace std;

int SUS( int a, int b, int c);

int main()
{
    int x;
    int y;
    int u;

    cout << "Ievadiet 1.ciparu: ";
    cin >> x;
    cout <<"Ievadiet 2.ciparu: ";
    cin >> y;
    cout <<"Ievadiet 3.ciparu: ";
    cin >> u;

    cout <<"Jusu ievadito skaitlu summa ir "<< SUS(x,y,u) << endl;

    return 0;
}

int SUS(int a, int b, int c)
{
    int r;
    r = a + b + c;

    return r;
}
