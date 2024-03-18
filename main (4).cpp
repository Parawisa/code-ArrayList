#include <iostream>
#include "ArrayList.h"
using namespace std;

int main()
{
    int choice, i , e;
    cout << "66040946 Parawisa Phoon" << endl;
    ArrayList list;
    cout<<"Maxsize "<<DEFAULT_MAX_SIZE <<endl;
   do
    {
        cout << "Welcome to Lab ArrayList" << endl;
        cout << "1. | Size ( ) " << endl;
        cout << "2. | IndexOf ( int e )" << endl;
        cout << "3. | Get ( int i )" << endl;
        cout << "4. | Remove ( int i )" << endl;
        cout << "5. | Set ( int i , int e )" << endl;
        cout << "6. | Add ( int i , int e )" << endl;
        cout << "7. | Min ( )" << endl;
        cout << "8. | Max ( )" << endl;
        cout << "9. | Display ( )" << endl;
        cout << "10.| Clear ( )" << endl;
        cout << "11.| IsEmpty ( )"<<endl;
        cout << "12.| AutoInert ( ) "<<endl;
        cout << "0. | Exit  Program !! " << endl;
        cout << "Select your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1 :
            cout << " Current list Size is : " << list.size() << endl;
            break;
        case 2 :
            cout << "Enter Element : ";
            cin >> e;
            list.indexOf(e);
            break;
        case 3 : 
            cout << "Enter Index : ";
            cin >> i;
            e = list.get(i);
            cout << "Element is : " << e << endl;
            break;
        case 4 :
            cout << "Enter Index : ";
            cin >> i;
            e = list.remove(i);
            cout << "Element is : " << e << endl;
            break;
        case 5 :
            cout << "Enter Index : ";
            cin >> i;
            cout << "Enter Element : ";
            cin >> e;
            list.set(i, e);
            break;
        case 6 :
            cout << "Input Add Index : ";
            cin >> i;
            cout << "Input Add Element : ";
            cin >> e;
            list.add( i , e);
            break; 
        case 7 :
            e = list.min();
            cout << "Minimum Element is " << e << endl;
            break;
        case 8 :
            e = list.max();
            cout << "Maximum Element is " << e << endl;
            break; 
        case 9 :
            list.display();
            break;      
        case 10 :
            cout<<"ArrayList Cleared . "<<list.clear()<<endl;
            break;
        case 11 :
            cout<<" Is the ArrayList Empty : "<<list.isempty()<<endl;
            break;
        case 12 :
            break;
        case 0 :
            cout<<" Exit Program. "<<endl;
        efault :
            cout << "Wrong choice ,try again..." << endl;
            break;
        }
    } while (choice != 0);
    
}