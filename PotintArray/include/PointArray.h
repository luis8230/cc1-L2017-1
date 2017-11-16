#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray:Point
{
    int size;
    Point *points;

    void resize(int size);

    public:
        PointArray();
        PointArray(const Point ptsToCopy[],const int toCopySize);
        PointArray(const PointArray &copia);
        ~PointArray();

        void clear();
        int getsize() const { return size;}
        void push_back(const Point &p);
        void insert (const int pos, const Point &p);
        void remove (const int pos);
        Point *get (const int pos);
        const Point *get(const int pos) const;
};

#endif // POINTARRAY_H
