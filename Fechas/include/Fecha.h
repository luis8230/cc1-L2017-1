#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        int dia;
        int mes;
        int year;
        Fecha();
        Fecha(int dia,int mes,int year);


        void setdia(int x);
        void setmes(int y);
        void setyear(int z);

        void bisiesto();
        void sumadias(int dia);

        void print();

};

#endif // FECHA_H
