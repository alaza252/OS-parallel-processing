#include <iostream>
#include <string>
#include <fstream>
#include <thread>
using namespace std;


class Process
{
    public:
        string functionCall;
        string state;
        int w; //how long it has been waiting
        int e; //total execution time
        int s; //cpu time required to run (prediction)
        int r = s-e; //remaining time to run
        Process* next;

    Process(): functionCall(""),state = "",w(0),e(0),s(0), next(NULL) {}
    ~Process(): next(NULL){}
    Process(string f,string st, int a, int b, int c): functionCall=f;state = st;w=a;e=b;s=c;{}
}

class Queue
{
    Process* head;
    public:
        //fixme
        Queue(string f, string st, int a , int b, int c, int si, int maxi)
        {
            Process* head = new Process(f,st,a,b,c);
            Process* tail = head;
            size = si;
            max = maxi;
        }
        Queue()
        {
            head = NULL;
            tail = NULL;
            size = 1;
            max = 4;
        }
        //copy constructor

        //constructor
        ~Queue() {
            //make next a temp process, delete head, replace head with temp, repeat until next is null.
            Process* temp;
            while(head->next)
            {
                temp = head;
                delete head;
                head = temp->next;
            }
        }
        void addP(string f,string st, int a, int b, int c)
        {
            Process* newp = new Process(f,st,a,b,c);
            if(max - size <=1)
            {
                max += 2;
            }
            
            tail->next = newp*;
            tail = tail->next;
            size ++;
            return;
        }
        int size()
        {
            return size;
        }
        //sort

        //load process
        string index(int k)
        {
            Process* temp = head;
            for(int i = 0; i<k-1; i++)
            {
                temp = temp->next;
            }
            return temp.functionCall;
        }
    private:
        int size;
        int max;
        Process* head;
        Process* tail;
}