#include <iostream.h>

#include <fstream.h>

#include <conio.h>

using namespace std;

int main() {

int N, i=0, sum=0, dfb; //dfb - dlina faila v baitah

ifstream fin("c:\\os\\bin.dat", ios::binary);

if(!fin) { cout << "Oshibka otkrytiya faila!"; getch(); return 1; }

fin.seekg(0, ios::end); //usanavlivaem poziciichetenia yf conec faila(ot conca 0 bait)

dfb = fin.tellg(); //poluchaem znachenie pozicii conca faila (v bait)

N=dfb/4; //znaya. chto celoe chislo zanimaem 4 baita vichislyaem kol-vo chisel

int *arr = new int [N]; //sozdaem dinamik massiv

fin.seekg(0, ios::beg); //perad chteniem dannih peremechaem tekuwyy poziciy na nachalo faila
fin.read(reinterpret_cast<char*>(arr), dfb);

cout << "Iz faila schitano " << N << " elementov:" << endl;

for(i=0; i<N; i++) cout << arr[i] << " ";

for(i=0; i<N; i++) sum=sum+arr[i];

cout << "\n Ih summa = " << sum;

getch(); return 0;

}
