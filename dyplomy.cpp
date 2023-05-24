#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include "Praca.h"
using namespace std;

int main()
{
    char wybor;  //znak do wyboru z menu
    do
    {
        pokaz_menu();
        cout << "wybieram: ";
        cin >> wybor;

        switch (wybor)
        {
        case 'a': //wyswietla wizyty
        {
    
        }
        break;

        case 'b':  //dodaje wizyte
        {

        }
        break;

        case 'c': //usuwa wizyte
        {
      
        }
        break;

        case 'd':  //wyswietla pacjentow zapisanych do gabinetu
        {
          
        }
        break;

        case 'e': //dodaje pacjenta
        {
        
        }
        break;

        case 'f': //usuwa pacjenta
        {
          
        }
        break;

        case 'g': //wyswietla liste wszystich mozliwych zabiegow
        {
         
        }
        break;

        case 'h': //dodaje zabieg
        {
           
        }
        break;

        case 'i': //usuwa zabieg
        {
           
        }
        break;

        case 'j': //wyswietla liste lekarzy dentystow
          
            break;

        case 'k': //dodaje lekarza
        {
          
        }
        break;

        case 'l': //usuwa lekarza z listy
        {
          
        }
        break;

        case 'm':  //zmienia wizyte
        {
         
        }
        break;

        case 'n':  //zawiesza lekarza od podanej daty - wizyty tego lekarza rozdzielone po innych lekarzach wykonujacych zabieg
        {
     
        }
        break;

        case 'r': //podmenu raportow
        {
           
        }
        break;

        case 'o': //dodaje kolejny zabieg do repertuaru lekarza
        {
           
        }
        break;

        case 'p': //usuwa zabieg do repertuaru lekarza
        {
           
        }
        break;

        case 'w':  //wczytuje plik ze wszystkimi danymi
        {
           
        }
        break;

        case 'z': //zapisuje plik ze wszystkimi danymi
        {
            
        }
        break;

        case 'q': //wyjscie z programu
            pl1();
            cout << "\nDziękuję za korzystanie z programu. Zapraszam ponownie!\n";
            pl2();
            return 0;
            break;

        default:

            pl1();
            cout << "Błędny wybór. Spróbuj ponownie.\n";
            pl2();
            koniec_akcji();
        }

    }
    while (1);

    return 0;
}
