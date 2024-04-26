#include <iostream>

using namespace std;

int main()
{
    //Kod do tworzenia kwadratu z dowolnego znaku
    int rozmiar = 0;
    char znak;
    cout << "Podaj rozmiar kwadratu: \n";
    cin >> rozmiar;
    cout << "Podaj jakim znakiem ma byc rysowany kwadrat: \n";
    cin >> znak;

    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            cout << (znak);
        }
        cout << endl;
    }

    //Kod tworzący choinkę
    int Gora, Srodek, Dol = 0;
    cout << "Podaj rozmiar gornej czesci choinki: ";
    cin >> Gora;
    cout << "Podaj rozmiar srodkowej czesci choinki: ";
    cin >> Srodek;
    cout << "Podaj rozmiar dolnej czesci choinki: ";
    cin >> Dol;

    //Górna część choinki
    for (int i = 0; i <= Gora; i++) {
      for (int j = 0; j <= Gora - i; j++) {
        cout << (" ");
      }
      for (int j = 1; j <= i * 2 - 1; j++) {
        cout << ("*");
      }
      cout << endl;
    }

    // Środek choinki
    for (int i = 0; i < Srodek; i++) {
      for (int j = 0; j < Gora - 1 - i; j++) {
        cout << (" ");
      }
      for (int j = 0; j < (i * 2) + 3; j++) {
        cout << ("*");
      }
      cout << endl;
    }

    // Pień choinki
    for (int i = 0; i < Dol; i++) {
      for (int j = 0; j < Gora - 1; j++) {
        cout << (" ");
      }

      cout << ("|||") << endl;
    }

    return 0;
}