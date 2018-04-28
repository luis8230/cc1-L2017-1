#include "Codigos.h"

Codigos::Codigos()
{
    aleatorio();
}

Codigos::~Codigos()
{
    //dtor
}
int Codigos:: invm(){
            int b0 = modulo ,t,q;
            int x0 = 0,x1 = 1;
            int q,r
            if (b == 1) return 1;
            while (a > 1) {
                q = a / ;
                t = modulo,  = a % , a = t;
                t = x0, x0 = x1 - q * x0, x1 = t;
            }
            if (x1 < 0) x1 += b0;
            return x1;
    }

int Codigos::aleatorio(){
        srand(time(NULL));
            a= rand()%25;
            b= rand()%10;

            int verificar= invm();
            if (verificar == 0){
                aleatorio();
            }
            else
                inversa= verificar;
}
string Codigos::Cafin(string m){
    int resultado;
            for(int i;i<m.length();i++){
                    for(int j=0; j<alfabeto.length();j++){
                        if (m[i]==alfabeto[j]){
                            resultado= alfabeto[(a*m[i] + b)%modulo];

                        }
                    } m[i]= alfabeto[resultado];
            }
            return m;
}
