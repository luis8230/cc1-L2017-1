#include <iostream>
using namespace std;

int SP(int a[],int longitud){
    int i,sum=0;
    int*pb;
    pb= &a[0];
 for(i=0;i<longitud;i++)
        sum += *(pb+i);
return sum;}

 int STRL(char*s){
    int i;
    int len=0;
    for (i=0; *(s+i) !='\0';i++){
        len++;
        }
    return len;
}

int STRINGLEN(char*s){
int len=0;
for (*s;*s != '\0';*s++)
    len++;
return len;

}

int STRlen(char*s){
    char*p=s;
    while(*p!='\0')
        p++;
    return p-s;
    }


int main()
{
    int a[4]={11,12,13,14};
    int x,y;
    int*pa;
    int sum=0;
    int i;
    char s[]="ciencia";
    pa= &a[0];
    x=*pa;
    y=*(pa+2);
    y=y+3;
    cout<<*pa<<" "<<x<<" "<<y<<" "<<a[2]<<endl;
    for(i=0;i<4;i++)
        sum += *(pa+i);
cout<<SP(a,4)<<endl;
cout<<sum<<endl;
cout<<STRL(s)<<endl;
cout<<STRINGLEN(s)<<endl;
cout<<STRlen(s)<<endl;
    return 0;
}
