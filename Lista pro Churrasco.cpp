#include <bits/stdc++.h>

using namespace std;

int main() {
    int pessoas;
    int itens;
    string s;
    set<string> item;


    cin >> pessoas;

    for(int i = 0; i < pessoas; i++) {
        cin >> itens;
        
        for(int j = 0; j < itens; j++) {
            cin >> s;
            
            if(item.count(s) == 0) {
            item.insert(s);
            cout << "adicionando " << s << endl;
            }

            else if(item.count(s) > 0) {
            cout << s << " ja tem" << endl;
            }
        }
    }

    cout << "Itens do churrasco:" << endl;
        for(auto x: item) {
            cout << x << endl;
        }

return 0;
}
