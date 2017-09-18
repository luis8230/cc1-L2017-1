#include <iostream>

using namespace std;

int main()
{
    const char* palabras[]= {"hola", "Voy a terminar mis tareas","Cerrare el Facebook y WhatsApp!","Bye,"};
    int j;
    cout << "la cadena invertida es :"<<endl;
    for (j=3;j>=0;j--)
   cout<<" " <<palabras [j]<<" "<<endl;

    return 0;
}
