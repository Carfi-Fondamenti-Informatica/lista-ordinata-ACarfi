#include <iostream>
using namespace std;

int main() {
    int lista[10];

    for(int i=0;i<10;i++){
        cin >> lista[i];
    }

    int a=0;
    cin >> a;

    for(int i=0;i<10;i++){
        if(a < lista[i]){
            for(int j=9;j>i;j--){
                lista[j] = lista[j-1];
            }
            lista[i] = a;
            break;
        }
    }

    for(int i=0;i<10;i++){
        cout << lista[i] << " ";
    }
    return 0;
}
