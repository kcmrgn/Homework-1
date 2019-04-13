#include <iostream>
using namespace std;

int main()
{
    
    int m, d,y;
    bool abort = false;
    
    do
    {
    cout<< "Enter month: ";
    cin>> m;
    
    cout<< "Enter day: ";
    cin>> d;
    
    cout<< "Enter year: ";
    cin>> y;
    
    if (m == 0 || m >= 13 || d == 0 || d >= 32 || y == 0 || m == 2 && d >= 29 || m == 1 && m == 3 && m == 5 && m == 7 && m == 8 && m == 10 && m == 12 && d >=31 || m == 4 && m == 6 && m == 9 && m == 11 && d >= 30)
    {
        cout << "\nInvalid date!" << endl;
        break;
    }
        
    switch(m)
    {
        case 1: if (m=1)
            cout<< "\nJanuary " << d << ", " << y << endl << endl;
            break;
        case 2: if (m=2)
        {
            cout<< "\nFebruary " << d << ", " << y << endl << endl;
            break;
        }
        case 3: if (m=3)
        {
            cout<< "\nMarch " << d << ", " << y << endl << endl;
            break;
        }
        case 4: if (m=4)
        {
            cout<< "\nApril " << d << ", " << y << endl << endl;
            break;
        }
        case 5: if (m=5)
        {
            cout<< "\nMay " << d << ", " << y << endl << endl;
            break;
        }
        case 6: if (m=6)
        {
            cout<< "\nJune " << d << ", " << y << endl << endl;
            break;
        }
        case 7: if (m=7)
        {
            cout<< "\nJuly " << d << ", " << y << endl << endl;
            break;
        }
        case 8: if (m=8)
        {
            cout<< "\nAugust " << d << ", " << y << endl << endl;
            break;
        }
        case 9: if (m=9)
        {
            cout<< "\nSeptember " << d << ", " << y << endl << endl;
            break;
        }
        case 10: if (m=10)
        {
            cout<< "\nOctober " << d << ", " << y << endl << endl;
            break;
        }
        case 11: if (m=11)
        {
            cout<< "\nNovember " << d << ", " << y << endl << endl;
            break;
        }
        case 12: if (m=12)
        {
            cout<< "\nDecember " << d << ", " << y << endl << endl;
            break;
        }
       
    }
        
  } while (!abort);

	return 0;
}
