#include "Fecha.h"
#include <iostream>


using namespace std;

Fecha::Fecha()
{
    dia=1;
    mes=1;
    year=0;
}

Fecha::Fecha(int dd, int mm ,int aa)
{

    setmes(mm);
    setdia(dd);
    setyear(aa);

    print();


}


void Fecha::setdia(int z)
{
    if (mes==2){
        if(z>28)
            cout<<"entrada incorrecta"<<endl;

    }
    else
        dia=z;

    if (mes==4||mes==6||mes==9||mes==11){
       if (z>30)
            cout<<"entrada incorrecta"<<endl;

    }

    else
        dia=z;

    if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){

        if (z>31)
            cout<<"entrada incorrecta"<<endl;
    }

    else
        dia=z;


}

void Fecha::setmes(int y)
{
    if(y>12)
        cout<<"entrada incorrecta"<<endl;
    else
        mes=y;


}

void Fecha::setyear(int x){year=x;}

void Fecha::print(){cout<<dia<<"/"<<mes<<"/"<<year<<endl;}


void Fecha::bisiesto(){
    if(year%4==0){
        if((year%100)!=0 || (year%400)==0)
            cout<<"es bisiesto"<<endl;
    }
    else
        cout<<"no es bisiesto"<<endl;

}

void Fecha::sumadias(int x){

    dia+=x;

    if (mes==2){
        if(dia>28){
            dia=0+(dia-28);
            mes++;
        }

    }

    if (mes==4||mes==6||mes==9||mes==11){
       if (dia>30){
            dia=0+(dia-30);
            mes++;
       }

    }
    if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){

        if (dia>31){
            dia=0+(dia-31);
            mes++;
        }
    }

    if (mes>12)
        mes=0+(mes-12);
        year++;

    print();



}
