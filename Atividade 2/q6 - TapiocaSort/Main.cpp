#include <iostream>
using namespace std;


void reverse(int* pilhaTemp,int p1,int p2){    
    
    for (int i = 0; i < (p2/2); i++){
        swap(pilhaTemp[(p2-1)],pilhaTemp[(p1-1)]);

        p1++;
        p2--;

        /*
        cout << "Iteracao: " << i <<" - ";
        cout << "P1: " << p1 <<" - ";
        cout << "P2: " << p2 <<" //// ";
        */
    }
/*
    cout << " Valores no array: \n";
    cout << pilhaTemp[0]<<" -1\n";
    cout << pilhaTemp[1]<<" -2\n";
    cout << pilhaTemp[2]<<" -3\n";
    cout << pilhaTemp[3]<<" -4\n";
    cout << pilhaTemp[4]<<" -5\n";
    */

    
    //5 4 3 2 1
    //1 4 3 2 5
    //1 2 3 4 5

    //4 3 2 1
    //1 3 2 4
    //1 2 3 4

    //6 5 4 3 2 1
    //1 5 4 3 2 6
    //1 2 4 3 5 6
    //1 2 3 4 5 6
}


int main(int argc, char const *argv[]){
    int * n = new int;
    //cout << "Insira o valor do Tamanho da pilha";
    cin >> *n;
    while (*n>30){
        //cout << "Valor INVALIDO!! pois era maior que 30 por favor insira o valor do Tamanho da pilha novamente";
        cin >> *n;
    }
    int *pilha = new int[*n];
    for (int i = 0; i < *n; i++){
        //cout << "Digite o valor da pilha de n° "<<i+1<<" :";
        cin >> pilha[i];
    }

    // reverse(VETOR,MENOR_POSICAO,MAIOR_POSICAO);

    
    
    
    
    return 0;
}
