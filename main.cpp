#include "iostream"
#include "ctime"

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
        cout << " Trefil si!" <<endl;
    }
    else cout << "Netrefil si :(" <<endl ;
    cout << "Tajne cislo bylo: " << tajneCislo;
    return 0;
    
}