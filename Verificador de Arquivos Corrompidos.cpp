#include <bits/stdc++.h>

using namespace std;

int main() {
    int arquivos, linhas, contador;
    cin >> arquivos;
    pair<long long int, string> p1, p2;
    set<pair<int, string>> s;

    for(int i = 0; i < arquivos; i++) {
        contador = 0;
        cin >> linhas;
        for(int j = 0; j < linhas; j++){
            cin >> p1.first;
            cin >> p1.second;

            if(s.count(p1) == 0) {
                s.insert(p1);
            }
            else{
                contador++;
            }
        }  
        if(contador == 0) {
        cout << "Arquivo OK" << endl;
        }
        else{
        cout << "Corrompido com " << contador << " erro(s)" << endl;
        }         
        
        }
        

    return 0;
}
