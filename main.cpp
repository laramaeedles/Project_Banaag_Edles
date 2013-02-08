#include "Project.h"
#include <iostream>
#include <cstdlib>

using namespace std;

const string problem[]={
        "Multiples of 3 and 5",
        "Exit"
    };

const int NUM_PROBLEMS=1;
const int EXIT=NUM_PROBLEMS+1;

int main()
{
    bool done=false;
    int i=0,ch=0;
    Project proj;
    while (done==false)
    {
        system("cls");
        for (i=0;i<(NUM_PROBLEMS+1);i++)
            cout<<(i+1)<<"."<<problem[i]<<endl;
        cout<<"Choose Problem: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                proj.multiples_of_3_and_5();
                break;
            case EXIT:
                done=true;
                break;
        }
        system("pause");
    }
}
