#include <bits/stdc++.h>

using namespace std;

void countingSort(vector<int> &v, int maior){
    vector<int> auxiliar(maior + 1, 0);
    for(int i = 0; i < v.size(); i++) {
        auxiliar[v[i]]++;
    }  
    
for(int i = 0, j = 0; i < auxiliar.size();i++) {
    for(int k = 0; k < auxiliar[i]; k++) {
        v[j] = i;
        j++;
        }
    }
   
}



int main() {
ios_base::sync_with_stdio(false);
unsigned long long int n;
vector<int> valores;
scanf("%lld", &n);
int maior = 0;
int f;
for(int i = 0; i < n; i++) {
    scanf("%d", &f);
    if(f > maior) {
        maior = f;
    }
    valores.push_back(f);
}

countingSort(valores, maior);

for(int i = 0; i < valores.size(); i++) {
    printf("%d\n", valores[i]);
}
    return 0;
}
