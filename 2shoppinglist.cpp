// #include<iostream>
// using namespace std;

// void function(string name,int age){
//     cout<<"Hi your name is "<<name<<" and your age is "<<age<<endl;

// }
// int main()
// {
//     function("Devansh",20);

// return 0;}


#include <iostream>
using namespace std;
int i;

class Shoppinglist
{
public:
    string itemname[10];
    int price[10];
    int count = 0;

    // GETTING THE ITEMS
    void getitem()
    {

        cout << "Enter the Price:" << endl;
        cin >> price[count];

        cout << "Enter the item name:" << endl;
        cin >> itemname[count];

        count++;
    }

    // PRICE ADDITION
    int Addition()
    {
        int sum = 0;
        for (i = 0; i < count; i++)

        {
            sum = sum + price[i];
        }
        cout << "The sum of prices is :" << sum << endl;
    }

    // LISTOFNAMES
    int Listname()
    {

        for (i = 0; i < count; i++)
        {
            cout << "Item is : " << itemname[i] << endl;
        }
    }
    // LAST PART
    int Lastpart()
    {
        string a;
        cout << "Enter the name of the element to remove:\n";
        cin >> a;

        for (int i = 0; i < count; i++)
        {
            if (itemname[i] == a)
                price[i] = Z;
            cout << "Item removed";
        }
    }
};

int main()
{

    Shoppinglist aMAN;

    int maibhibabloo;

    cout<<"Enter the numbber of itmes:";
    cin>> maibhibabloo;

    int z;

    for (i = 0; i < maibhibabloo; i++)
    {
        aMAN.getitem();
    }
    int x;
    do{
        cout<<"what do you want to do :\n";
        cout<<"press 1 to display all the items:\n";
        cout<<"press 2 to add all the items :\n";
        cout<<"press 3 to Erase all the items :\n";
        cout<<"press 4 to exit the program:\n";

        cin>>x;

        switch(x){
            case 1: aMAN.Listname();break;
            case 2: aMAN.Addition();break;
            case 3: aMAN.Lastpart();break;
            case 4: break;
            

            default: cout<<"The input is wrong try again";

        }
        
    }
    while (x!=4);

    return 0;
}
