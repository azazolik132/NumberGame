#include "iostream"

using namespace std;
// hadani tajneho cisla
int main(int argc, char *argv[]){
    int tajneCislo;
    int hracovoCislo;
    tajneCislo = rand()%5+1; // nahodne od 1 do 5
    cout << "Zadej svuj typ na tajne cislo: ";
    cin >> hracovoCislo;
    return 0;
}