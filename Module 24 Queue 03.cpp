/*
#include<bits/stdc++.h>
using namespace std;
//const int MAX_SIZE =500;
class Queue
{
public:

    int *a;
    int array_cap;
    int l,r;
    int sz;
    Queue()
    {
        a = new int[1];//sorute 1 size er akta array nea nilam
        array_cap =1;
        l=0;
        r=-1;
        sz=0;
    }

    void remove_circular()
    {
        if(l>r)
        {
            int *tmp =new int[array_cap];
            int idx=0;
            for(int i =l; i<array_cap; i++)
            {
                tmp[idx]=a[i];
                idx++;
            }
            for(int i=0; i<=r; i++)
            {
                tmp[idx]=a[i];
                idx++;
            }
            swap(tmp,a);//amra to man shob rakte chai tmp te.
            l=0;
            r=array_cap-1;
            delete []tmp;
        }

    }
    void increase_size()
    {
        remove_circular();
        //size increase
        int*tmp=new int[array_cap];
        for(int i=0; i<array_cap; i++)
            tmp[i]=a[i];
        swap(tmp,a);
        array_cap=array_cap*2;
        delete []tmp;
    }
    void enqueue(int value)
    {
        if(sz==array_cap)
        {
            increase_size();
        }
        r++;
        if(r==array_cap)
        {
            r=0;
        }
        a[r]=value;
        sz++;
    }
    void dequeue()
    {
        if(l==array_cap)
        {
            l=0;
        }
        l++;
        sz--;
    }
    int front()
    {
        if(sz==0)
        {
            cout<<"Queue is empty \n";
            return -1;
        }
        return a[l];//karon q er start ei bojai l er value;
    }
    int size()
    {
        return sz;
    }



};







int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<" Q size :   "<<q.size()<<"\n";
    cout<<q.front()<<" \n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<" Q size :   "<<q.size()<<"\n";
}
*/

#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int *a;
    int array_cap;
    int l,r;
    int sz;
Queue()
{
    a=new int[1];
    array_cap=1;
    l=0;
    r=-1;
    sz=0;
}
void remove_circular()
{
    if(l>r)
    {

    int *tmp=new int [array_cap];
    int idx=0;
    for(int i=l;i<array_cap;i++)
    {
        tmp[i]=a[i];
        idx++;
    }
    for(int i=0;i<=r;i++)
    {
        tmp[i]=a[i];
        idx++;
    }
    swap(tmp,a);
    l=0;
    r=array_cap-1;
    delete []tmp;
}


}
void increase_size()
{
    remove_circular();
    int *tmp=new int [array_cap];
    for(int i=0;i<array_cap;i++)
        tmp[i]=a[i];
    swap(tmp,a);
    array_cap=array_cap*2;
    delete []tmp;
}
void enqueue(int value)
{
    if(sz==array_cap)
    {
        increase_size();
    }
    r++;
    if(r==array_cap)
    {
        r=0;
    }
    a[r]=value;
    sz++;
}
void dequeue()
{
    if(l==array_cap)
    {
        l=0;
    }
    l++;
    sz--;
}
int front()
{
    if(sz==0)
    {
        cout<<"Queue is empty \n ";
        return -1;
    }
    return a[l];
}
int size()
{
    return sz;
}

};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<" Q size :   "<<q.size()<<"\n";
    cout<<q.front()<<" \n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<" Q size :   "<<q.size()<<"\n";
}

