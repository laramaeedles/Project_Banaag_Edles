#include "Project.h"
#include <iostream>

using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}

void Project::multiples_of_3_and_5()
{
    int sum=0,i;
    for (i=0;i<1000;i++)
    {
        if (i%3==0 || i%5==0)
        {
            sum=i+sum;
        }
    }
    cout<<"Sum of All Multiples of 3 and 5 below 1000 is: "<<sum<<endl;
}
