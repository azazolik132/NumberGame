#include "iostream"
#include "ctime"
#include "color.h"

using namespace std;
// hadani tajneho cisla
int main(int argc, char *argv[]){
    srand(time(0));
    int tajneCislo;
    int hracovoCislo;
    tajneCislo = rand()%5+1; // nahodne od 1 do 5
    cout << "Zadej svuj typ na tajne cislo: ";
    cin >> hracovoCislo;
    if(tajneCislo == hracovoCislo) {
        cout << GREEN << " Trefil si!" << RESET << endl;
    }
    else cout << RED << "Netrefil si :(" << RESET << endl;
    cout << "Tajne cislo bylo: " << tajneCislo;
    return 0;

}