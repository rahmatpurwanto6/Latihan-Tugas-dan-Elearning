#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char Kata[10];
    char Kar;
    int JumKar = 0;

    cout<<"Masukkan kalimat : ";
    gets(Kata);
    cout<<endl;

    cout<<"Masukkan satu karakter yang akan dihitung : ";
    cin>>Kar;
    cout<<endl;

    for (int i = 0; i <= strlen(Kata); i++)
    {
        if (Kata[i] == Kar)
        {
            JumKar++;
        }
    }

    cout<<"Jumlah karakater"<<" ada ("<<JumKar<<") buah";

    return 0;
}
