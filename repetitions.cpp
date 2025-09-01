#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string dna;
    cin >> dna;
    
    int tamanho = dna.length();
    int old = 1,novo = 1;
    for (int i = 0; i < tamanho-1; i++)
    {
      if(dna[i] == dna[i+1]) {
          novo++;
      }
      else {
      old > novo ? old = old : old = novo;
      novo = 1;
      }
    }
    int maisRepetido = max(old,novo);
    cout << maisRepetido << endl;
    
  return 0;
}