#include <iostream>
using namespace std;

int x = 0;
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

int main()
{
    int n;
    cout<<"Escribe un numero:   ";
    cin>>n;
    Primo(n);
    primos_sig(n);
    //cout<<x;
    return 0;
}
