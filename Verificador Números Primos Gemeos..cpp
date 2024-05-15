#include <bits/stdc++.h>

using namespace std;

int primos[1000000];
void crivo() {
    for(int i = 0; i < 1000000; i++) {
        primos[i] = 1;
    }
    primos[1] = 0;
    primos[0] = 0;

for(int i = 2; i < 1000000; i++) {
    if(primos[i]) {
    for(int j = 2 * i; j < 1000000; j+= i) {
        primos[j] = 0;
        }
     }
    }   
}
int ehprimo(int x) {
    return primos[x];
}

int main() {
 
    int n,v;
    cin >> n;
    crivo();
    for(int i = 0; i < n; i++) {
        cin >> v;
        if(ehprimo(v) && ehprimo(v-2)|| ehprimo(v) && ehprimo(v+2)) {
            cout << "O numero " << v << " eh um primo gemeo" << endl;
        }
        else{
            cout << "O numero " << v << " nao eh um primo gemeo" << endl;
        }
    }
   
    return 0;
}
