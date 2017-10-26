#include <iostream>

using namespace std;
class Integer{
public:
    int val;
    Integer(){
    val=0 ;
    cout<<"Integer default constructor" <<endl;
    }

    Integer(int v){
    this -> val=val;
    cout <<"contructor con argumento"<<" "<< v<<endl;
    }
    };

class point{
public:
    int x,y;
    point (){
    cout <<"constructor is alive "<< endl;
    }
    ~point(){
    cout<<"destructor is invoked, constructor died"<<endl;
    }
};

class Intgerarray{
public:
    int *data;
    int tam;
    Intgerarray(int tam){
    data= new int [tam];
    this ->tam= tam;
    }
    Intgerarray(Intgerarray &c){
   data= new int[c.tam];
   tam= c.tam;
   for (int i=0; i< tam;++i)
    data[i]= c.data[i];
    }
    ~Intgerarray(){
    delete[]data;
    }
};
class Integerwrapper{
public:
Integer val;
    Integerwrapper(){
    cout<<"Integerwrapper default"<<endl;}

};
int *getposfive(){
    int *x = new int;
    *x=5;
    return x;
}

int main()
{
    Intgerarray a(2);
    a.data[0]= 4; a.data[1]=2;
    if (true) {
        Intgerarray b= a;
    }

    /* Integerarray arr;
    cin>> arr.tam ;
    arr.data= new int [arr.tam];
    for (int i = 0 ;i <arr.tam; i++){
        cout << "enter item "<<i <<";";
        cin>>arr.data[i];
    }
    for (int i=0;i< arr.tam;++i ){
        cout << arr.data[i]<<endl;
    }
    delete[] arr.data;

    point *p= new point;
    if (true ){
        point x;
    }
    cout << "x is out of scoooopeeee"<<endl;
    delete p;
    int numitems;
    cout<< "hot many items?"<<endl;
    cin >> numitems;
    int *arr= new int [numitems];

    for (int i = 0 ;i <numitems; i++){
        cout << "enter item "<<i <<";";
        cin>>arr[i];
    }
    for (int i=0;i< numitems;++i ){
        cout << arr[i]<<endl;
    }
    delete [] arr;
    int *p;
    for (int i= 0; i<1000000000000000;++i){
    p= getposfive();
    cout<<*p<<endl;
    delete p;
    }

   cout<< *p<<endl;
    delete p;
    Integerwrapper i;
    Integer a;
    Integer j= 5;
    Integer s[2];
    cout << "Hello world!" << endl;
*/
    return 0;
}





















