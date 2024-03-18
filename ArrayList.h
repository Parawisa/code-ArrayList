#ifndef _ARRAYLIST_H_
#define _ARRAYLIST_H_
#define DEFAULT_MAX_SIZE 10

class ArrayList
{
protected:
    int *L;
    int curSize;
    int Number;
    int maxSize;
public:
    ArrayList(int maxSize = DEFAULT_MAX_SIZE);
    ~ArrayList();

    int maxsize();
    int size();
    int indexOf(int e);
    int get(int i);
    int remove(int i);
    void set(int i , int e);
    void add(int i , int e);
    void display();
    int min();
    int max();
    void clear();
    bool isempty();
};
