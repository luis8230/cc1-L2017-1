#ifndef COMPLEJO_H
#define COMPLEJO_H


class complejo
{

    public:
         int r;
        int i;
        complejo();
        complejo(int, int );
        complejo suma(complejo j);
        void escalar(int);
        complejo resta(complejo j);

};

#endif // COMPLEJO_H
