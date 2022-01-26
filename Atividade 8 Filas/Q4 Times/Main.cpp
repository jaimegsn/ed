#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::vector;




class Estudante{
    public:
        string nome;
        int h;
        Estudante(){}
        Estudante(string nome, int h) : nome(nome), h(h) {}
         
};

bool comp(const Estudante e1, const Estudante e2){
    return e1.h > e2.h;
}


int main(){ 
    int n, t;

    cin >> n >> t;

    vector <Estudante> v;

    v.resize(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].nome >> v[i].h;
    }

    //Ordena os estudantes em ordem decrescente
    sort(v.begin(), v.end() , comp );


    
    int aux = 0;
    for(int i = 0,j = 0,c=0; j < t; i++){
        if(i==0)cout << "time " << j+1 << endl;
        if(c>n){
            aux++;
            c=aux; 
            j++;
            cout << "time " << j+1 << endl;
        }

        cout <<  v[c].nome << " "  << v[c].h << endl;
        c=c+t;
    }

}