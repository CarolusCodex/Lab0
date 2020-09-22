#include <iomanip>
#include <iostream>

using namespace std;

void print_temp();

int main()
{
    print_temp();
    return 0;
}

void print_temp()           // Hämtar temperaturvärden från inströmmen,
{                           // kontrollerar dessa och skriver ut en tabell.
    int start_value;
    int end_value;
    int diff;

    cout << "Ange startvärde:   ";
    while (!(cin >> start_value))
    {
        cout << "Felaktig inmatning!\nAnge startvärde:   ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cin.ignore(1000,'\n');
    cout << "Ange slutvärde:    ";
    while (!(cin >> end_value)||(start_value >= end_value))
    {
        cout << "Felaktig inmatning!\nAnge slutvärde:   ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cin.ignore(1000,'\n');
    diff = end_value - start_value;

    cout << "Celsius      Kelvin  Fahrenheit    Réaumur \n"   //Skriver ut
         << setw(42)                                          //tabellhuvudet.
         << setfill('-')
         << "-"
         << endl;

    for (int {diff}; diff >= 0; --diff)   //Skriver ut temperaturtabellen.
    {
        cout << setw(7)
             << setfill(' ')
             << setprecision(2)
             << fixed
             << start_value
             << setw(12)
             << calc_kelvin(start_value)
             << setw(12)
             << calc_fahrenheit(start_value)
             << setw(11)
             << calc_reaumur(start_value)
             << endl;

        ++ start_value;
    }

}
float calc_kelvin(int celsius)
{
float kelvin;
kelvin = celsius + 273.15;
return kelvin;
}

float calc_fahrenheit(int celsius)
{
float fahrenheit;
fahrenheit =  celsius * (1.8) + 32;
return fahrenheit;
}

float calc_reaumur(int celsius)
{
float reaumur;
reaumur = celsius * 0.8;
return reaumur;
