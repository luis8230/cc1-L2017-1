#include <iostream>

using namespace std;

int x = 0;

int bisiesto(int anio ){
    if (anio % 4 == 0){
        if((anio%100)!=0 || (anio% 400) ==0)
            return true;
    }
    else
        return false;
}

int primos(int x){
    int y;
    int z;
    if (x<2)
        return false;
    y=0;
    z=1;
    while(z<=x){
         if(x%z==0)
            y=y+1;
        z=z+1;
    }
    if(y>2)
        return true;
    else
        return false;
}
long Primo(int a)
{
    int si_no;
    si_no = 0;
    if (a < 1)
    {
        cout<<"Por favor introduce un número valido"<<"\n";
    }
    for (int i = 2; i < a; i++)
        {
            if (a%i == 0)
            {
                //cout<<" --> No es primo a causa de:  "<<i<<"\n";
                si_no = 1;
            }
            if (si_no == 1)
            {
                //cout << a << "  No es primo \n";
                break;
            }
        }
    if (si_no == 0)
    {
        cout<< a << " Es Primo \n";
        x++;
    }
    return 0;
}

long primos_sig(int a)
{
    int z;
    z = x;
    int limite_3, num;
    limite_3 = 0;
    num = a + 1;
    while (limite_3 < 3)
    {
        //cout<<num<<" \n ";
        Primo(num);
        num++;
        if (x > z)
        {
            z++;
            limite_3++;
        }
    }

    if (limite_3 == 3)
        cout<<"\n --> Estos fueron los 3 numeros primos siguientes \n";
}

int Potencia(int x){
    int dos=2;
    if (x=2)
        return true;
    while (x>=dos){
        dos= dos *2;
        if(x==dos)
            return true;
        else
            return false;
    }
}
int POTENCIA(int c){
    return (c&(c-1));
}

int main()
{
    int n;
    cout<<"Escribe un numero:   "<<endl;
    cin>>n;
    if (bisiesto(n))
        cout<<"es bisiesto"<<endl;
    else
        cout<<"no es bisiesto"<<endl;

    if (primos(n))
         cout<<"el numero no es primo"<<endl;
      else
        cout<<"el numero es primo"<<endl;
    if (Potencia(n))
        cout<<" es potencia de dos"<<endl;
    else
        cout<<"el numero no es potencia de dos"<<endl;
    Primo(n);
    primos_sig(n);

    if (POTENCIA(n))
        cout<<"NO es POTENCIIIIIAAAAA!!!!";
    else
        cout<<"ES POTENCIIIIIAAAA!!!!";

    return 0;
}
