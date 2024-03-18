#include "ArrayList/ArrayList.h"
#include <iostream>
#include "ArrayList.h"
using namespace std;


ArrayList::~ArrayList()
{
    delete [] L;
}

int ArrayList::size()
{
    return this -> curSize;
}

int ArrayList::indexof(int e)
{
    for(int i = 0; i< curSize ; i ++)
    {
    if (e == L[i])
    {
    cout<< "Position ["<< i <<"]is ::"< }
}   return 0;

}

int ArrayList::get(int i)
{
    if ( i > this -> curSize)
    {
        cerr << " Error! data is empy" << endl; 
    }

if (i < 0)
    {
    cerr << "Warning : lower bound index " << i << endl;
    }
return L[i];
}


int ArrayList::remove(int i)
{

if (this -> curSize)
    {
        cerr << "Error! data is empyt" << endl;
    }
    if (i > this -> curSize)
    {
        cerr << "Error! upper bound index "<< endl;
    }
if (i < 0)
{
    cerr << "Warning : lower bound index " << i << endl;
    cerr << "Mesage : index " << i <<"Change to 0 " << endl;
}

int tmp =L[i];
for ( int j=i; j < curSize; j++)
    {
        L[j]=L[j+1];
    }
    curSize--;
    return tmp;
}

void ArrayList::set(int i, int e)
{
if (i > this-> curSize)
    {
    cerr << "Warning ! upper bound index "<< endl; 
    }
if(i <0)
    {
    cerr << "Warning : lower bound index " << endl; 
    }

    L[i]=e;
}

void ArrayList::add(int i, int e)
{
//check fuii
if (curSize > maxSize)
{
cerr << "Error : DFata is full. "<< endl;
return;
}
//has any room
//chack lower
if (i < 0)
    {
    cerr << "Warning : lower bound index " << i << endl;
    cerr << "Mesage : index " << i <<"Change to 0 " << endl;
    i= 0;
    }
//check uper
else if ( i > curSize -1 )
    {
        cerr << "Warning : lower bound index " << i << endl;
        cerr << "Mesage : index " << i <<"Change to " << i= curSize << endl;
    }
for ( int j = curSize-1 ; j >= i ; j--)
    {
        L[j+1]=L[j];
    }
    L[i]=0;
    curSize ++;
}
void ArrayList::display()
{
    cout << "Data [ ";
for (int i = 0 ; i < curSize ; i++)
    {
    cout << L [i];
    if(i cout<< ", ");
    else
    cout<< "]"< }
}

int ArrayList::get_maxsize()
{
    return this->maxSize;
}

int ArrayList::maxsize()
{
    cout << "construtor" << endl;
    this -> maxSize = maxSize;

    curSize = 0;

    L = new int [this ->maxSize];
}

int ArrayList::indexOf(int e)
{
    for(int i = 0; i< curSize ; i ++)
    {
    if (e == L[i])
    {
    cout<< "Position ["<< i <<"]is ::"< }
}   return 0;
}

int ArrayList::min()
{
    if(curSize == 0)
    {
        cout<< " Error Empty List ."<<endl;
        return 0;
    }
    
    int minValue = L[0];
    for (int i =1 ; i< curSize ; i++)
    {
        if(L[i] < minValue)
        {
            minValue = L[i];
        } 
    }
    return minValue;
}

int ArrayList::max()
{
    if(curSize == 0)
    {
        cout<< " Error Empty List ."<<endl;
        return 0;
    }
    
    int maxValue = L[0];
    for (int i =1 ; i< curSize ; i++)
    {
        if(L[i] > maxValue)
        {
            maxValue = L[i];
        } 
    }
    return maxValue;
}

void ArrayList::clear()
{
    curSize=0;
    return curSize;
}

bool ArrayList::isempty()
{
    if (curSize <= 0)
    {
        cout << "Is Empty with size: " << curSize << endl;
        return true;
    }
    else
    {
        cout << "Is not Empty with size: " << curSize << endl;
        return false;
    }
}
