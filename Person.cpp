#include <iostream>
#include "Person.h"
#include <string.h>
#define SIZE 10

using namespace std;

Person::Person()
{
    this->ID = 0;
    this->firstname = NULL;
    this->lastname = NULL;
    this->money = 0;
}
Person::Person(const char *Fname, const char *Lname, int ID, int money)
{
    this->setFirstName(Fname);
    this->setLastName(Lname);
    this->setID(ID);
    this->setMoney(money);

    if(this->getBladderLevel() <= 3)
        cout << this->getFName() << " Bladder level is low!" << endl;
    if(this->getHungerLevel() <= 3)
        cout << this->getFName() << " Hunger level is low!" << endl;
    if(this->getEnergyLevel() <= 3)
        cout << this->getFName() << " Energy level is low!" << endl;
    if(this->getFunLevel() <= 3)
        cout << this->getFName() << " Fun level is low!" << endl;
    if(this->getSocialLevel() <= 3)
        cout << this->getFName() << " Social level is low!"<<endl;
    if(this->getHygieneLevel() <= 3)
        cout << this->getFName() << " Hygiene level is low!" << endl;
}
void Person::Print()
{
    if(this->ID != 0)
    {
        cout<<"First Name: " << this->getFName() << endl;
        cout<<"Last Name: " << this->getLName() << endl;
        cout<<"ID: " << this->getID() << endl;
        cout<<"Balance: "<< this->getMoney() << "$" << endl;
        cout<<"---------------------------" << endl;
    }
}

void Person::UseToilet()
{
    cout << this->getFName() << " Used Toilet!" << endl;
    this->needs.UseToilet();
}
void Person::Eat(Food F1)
{
    cout << this->firstname << " is eating " << F1.getFoodName() << endl;
    needs.Eat(F1);
}
void Person::Sleep()
{
    cout << this->getFName() << " went to sleep!" << endl;
    needs.Sleep();
}
void Person::Dance()
{
    cout << this->getFName() << " is dancing!" << endl;
    needs.Dance();
}
void Person::PlayGuitar()
{
    cout << this->getFName() << " is playing on Guitar" << endl;
    needs.PlayGuitar();
}
void Person::PlayCompter()
{
    cout << this->getFName() << " is writing a code on PC!!" << endl;
    needs.PlayComputer();
}
void Person::PetAnimal(Animal a1)
{
    cout << this->getFName() << " is playing with his dog " << a1.getPetName() << endl;
    needs.PetAnimal(a1);
}
void Person::Talk(Person *p1)
{
    int temp_id;
    cout << "Who you wanna meet up with?" << endl;
    
    for(int i = 0; i < 10; ++i)
    {
        if(p1[i].getID() != 0 && p1[i].getID() != this->getID())
        {
            cout << p1[i].getID() << " - " << p1[i].getFName() << endl;
        }
    }
    cin  >> temp_id;
    temp_id -= 1;
    cout << this->getFName() << " is meeting with " << p1[temp_id].getFName() << endl;
    needs.Talk(p1[temp_id]);
}
void Person::Text(Person *p1)
{
    int temp_id;
    cout << "Who you wanna text?" << endl;

    for(int i = 0; i < 10; ++i)
    {
        if(p1[i].getID() != 0 && p1[i].getID() != this->getID())
        {
            cout << p1[i].getID() << " - " << p1[i].getFName() << endl;
        }
    }
    cin  >> temp_id;
    temp_id -= 1;
    cout << this->getFName() << " is texting with " << p1[temp_id].getFName() << endl;
    needs.Text(p1[temp_id]);
}

void Person::PhoneCall(Person *p1)
{
    int temp_id;
    cout << "Who you wanna call?" << endl;

    for(int i = 0; i < 10; ++i)
    {
        if(p1[i].getID() != 0 && p1[i].getID() != this->getID())
        {
            cout << p1[i].getID() << " - " << p1[i].getFName() << endl;
        }
    }
    cin  >> temp_id;
    temp_id -= 1;
    cout << this->getFName() << " is calling " << p1[temp_id].getFName() << endl;
    needs.PhoneCall(p1[temp_id]);
}

void Person::Shower()
{
    cout << this->getFName() << " is taking a shower" << endl;
    needs.Shower();
}

void Person::DeletePer()
{
    this->ID = 0;
    this->money = 0;
    
    delete this->lastname;
    delete this->firstname;
}

void Add(Person *p1)
{
    char *fname = new char[50];
    char *lname = new char[50];
    int id = 0;
    int money;

    for(int i = 0; i < 10; ++i)
    {
        ++id;
        if(p1[i].getID() == 0)
        {
            cout << "Enter Name: " << endl;
            cin >> fname;
            cout << "Enter Last Name: " << endl;
            cin >> lname;
            cout << "Enter Balance: " << endl;
            cin >> money;

            p1[i] = Person(fname, lname, id, money);

            break;
        }
    }

    delete fname;
    delete lname;
}


void PrintAll(Person *p1)
{
    int count = 0;
    for(int i = 0; i < 10; ++i)
    {
        p1[i].Print();
        count += p1[i].getID();
    }

    if(count == 0)
        cout << "You don't have any persons in the array!" << endl;
}

void StartTheGame()
{
    Person *p1 = new Person[SIZE];
    Food f1("BBQ", 10);
    Animal a1("ChoCho", "German");
    int x = 1;
    int temp_id;
    int temp_cmd;


    while(x != 0)
    {
        cout << "0 - Exit" << endl;
        cout << "1 - Add Person to the array" << endl;
        cout << "2 - Delete Person from the array" << endl;
        cout << "3 - Do commands for Person" << endl;
        cout << "4 - Print Persons in array" << endl;
        cin >> x;

        if(x == 1)
            Add(p1);
        if(x == 2)
        {
            cout << "Enter the ID of the person you want to delete: " << endl;
            cin >> temp_id;
            temp_id -= 1;

            for(int i = 0; i < SIZE; ++i)
                if(i == temp_id)
                    p1[i].DeletePer();
        }
        if(x == 3)
        {
            PrintAll(p1);
            cout << "Choose a person's ID to make commands: " << endl;
            cin >> temp_id;
            temp_id -= 1;

            cout << "1 - Use toilet" << endl;
            cout << "2 - Eat" << endl;
            cout << "3 - Commuinicate" << endl;
            cout << "4 - Fun" << endl;
            cout << "5 - Sleep" << endl;
            cout << "6 - Shower" << endl;
            cin >> temp_cmd;

            if(temp_cmd == 1)
                p1[temp_id].UseToilet();
            if(temp_cmd == 2)
                p1[temp_id].Eat(f1);
            if(temp_cmd == 3)
            {
                cout << "1 - Meet" << endl;
                cout << "2 - PhoneCall" << endl;
                cout << "3 - Text" << endl;
                cin >> temp_cmd;

                if(temp_cmd == 1)
                    p1[temp_id].Talk(p1);
                if(temp_cmd == 2)
                    p1[temp_id].PhoneCall(p1);
                if(temp_cmd == 3)
                    p1[temp_id].Text(p1);
            }
            if(temp_cmd == 4)
            {
                cout << "1 - Dance" << endl;
                cout << "2 - Play Guitar" << endl;
                cout << "3 - Play Computer" << endl;
                cout << "4 - Pet Animal" << endl;
                cin >> temp_cmd;

                if(temp_cmd == 1)
                    p1[temp_id].Dance();
                if(temp_cmd == 2)
                    p1[temp_id].PlayGuitar();
                if(temp_cmd == 3)
                    p1[temp_id].PlayCompter();
                if(temp_cmd == 4)
                    p1[temp_id].PetAnimal(a1);
            }
            if(temp_cmd == 5)
                p1[temp_id].Sleep();
            if(temp_cmd == 6)
                p1[temp_id].Shower();
        }
        if(x == 4)
        {
            PrintAll(p1);
        }
    }

    delete[] p1;
}