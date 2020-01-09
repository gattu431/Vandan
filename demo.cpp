#include <iostream>
#include<string.h>
using namespace std;

string fun();

int main()
{
    char name[100];
    char kill[100];

    //name = fun();


    cin.getline(name,sizeof(name));
    cout<<name;

    //kill = fun();
    cin.ignore();
    cin.getline(kill,sizeof(kill));
    cout<<kill;


}

string fun()
{
    string hello;
    cin>>hello;

    return(hello);
    
    //gattu chakko
}

// [2,6,1,15]
// 9
//55
