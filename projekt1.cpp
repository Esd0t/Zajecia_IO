#include <iostream>

using namespace std;

int silnia(int n){
	if(n <= 1){
	return 1;
	}
	return n* silnia(n-1);
};
bool czyPierwsza(int n){
	if (n <= 2){
		return false;
	}
	for (int i = 2; i < n; i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
};

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
		cout << "1. Silnia" << endl;
		cout << "2. Czy liczba jest pierwsza" << endl;
		cin >> wyjscie;

	if (wyjscie == 1){
		cout << "Podaj liczbę do obliczenia silni: ";
		int tmp;
		cin >> tmp;
		int s = silnia(tmp);
		cout << endl;
		cout << "Silnia wynosi: " << s << endl;
	}
	if (wyjscie == 2){
		cout << "Podaj liczbę do sprawdzenia: ";
		int liczba;
		cin >> liczba;
		if(czyPierwsza(liczba)){
			cout << "Liczba pierwsza" << endl;
		}else{
			cout << "Nie jest to liczba pierwsza" << endl;
		}
    } while(wyjscie != 0);
    return 0;
}
