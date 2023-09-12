#include<iostream>
using namespace std;

class Empp
{
// initialise the variable
    int age,id;
    char name[15];
    public:
// funtion for getting data
        void getData()
        {
            cout<<"Enter Name:- ";
            cin>>name;
            cout<<"Enter ID:- ";
            cin>>id;
            cout<<"Enter Age:- ";
            cin>>age;
        }
// function for display data 
        void display()
        {
            cout<<"Name:- "<<name<<endl<<"Id is :- "<<id<<endl<<"Age:- "<<age<<endl;
        }
};


int main()
{
    Empp array[3];      // creating the object
//Calling Getting data function
    for (int i=0;i<3;i++)
    {
        array[i].getData();
    }
//Calling Display function 
    for (int i=0;i<3;i++)
    {
        array[i].display();
    }
}