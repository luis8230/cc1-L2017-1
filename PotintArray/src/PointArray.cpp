#include "PointArray.h"


PointArray::PointArray()
{
    size=0;
    points= new Point[0];}



PointArray:: PointArray(const Point ptsToCopy[],const int toCopySize){
    size= toCopySize;
    points = new Point [toCopySize];
    for(int i=0;i<toCopySize;++i)
        points[i]=ptsToCopy[i];}

PointArray::PointArray(const PointArray &copia){
    size= copia.size;
    points= new Point [size];
    for(int i=0;i<size;++i)
        points[i]=copia.points[i];}

PointArray::~PointArray()
{
    delete []points;}


void PointArray:: resize(int NewSize){
    Point *pts= new Point[NewSize];
    int minSize= (NewSize>size ? size: NewSize);
    for(int i=0 ;i<minSize;i++)
        pts[i]= points [i];
    delete []points;
    size = NewSize;
    points =pts;

    size= NewSize;}

void PointArray:: clear(){resize(0);}

void PointArray:: push_back(const Point &p){
    resize (size +1);
    points[size-1]=p;
}

void PointArray:: insert(const int pos, const Point &p){
}
