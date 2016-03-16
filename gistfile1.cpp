

#include <iostream>
#include <string>
using namespace std ;

int main()
{
    {
    int pos_X= 0;
    string dato_stringa="";
    cout<<"Inserire l'ascissa (intera) del punto:";
    cin>> dato_stringa;

    try
    {
        pos_X= stoi(dato_stringa);
        if (pos_X<-3)
            cout<< "\nSi trova alla sinistra di (-3)\n";
        else
            cout<< "\nNon si  trova alla sinistra di (-3)\n";

    }
    catch (...)
    {cout<< "\nNon e' un numero o il numero e' troppo grande!\n";}



return 0;
}
}
