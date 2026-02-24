#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

    int n=0;
    int j=0;

    do
    {
        cout<<"1. Wypisz ilość argumentów programu\n";
        cout<<"2. Wypisz wybrany argument programu\n";
        cout<<"3. Wypisz wszystkie argumenty programu\n";
        cout<<"4. Zakończ program\n";
        cout<<"Podaj liczbe: ";cin>>n;
        if (n==1)
        {
            cout<<argc<<endl;
        }
        else if (n==2)
        {
            cout<<"Podaj liczbe: ";cin>>j;
                    if (j<argc)
                    {
                    cout<<argv[j]<<endl;
                    }
        }
        else if (n==3)
        {
            for (int i = 0; i < argc; i++)
                {
                    cout << argv[i] << endl;
                }
        }
        else if (n==4)
        {
        }
        else
        {
            cerr<<"Zła liczba!\n";
        }

    } while (n!=4);
}