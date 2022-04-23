#include <process.h>
string files[4] = {NULL,NULL,NULL,NULL};
string scheduler[3] = {NULL,NULL,NULL};
int numtimes=0;
bool io = false;


int main()
{   
    readConfig();
    //copy constructor/equal overload operator
    formatScheduling(FileToProcess());
    //initial run of each program to predict time

    //format scheduling
    //run
    //result
    return 0;
}

//--------------Gets parameters set by user in UI-----------
void readConfig()
{
    ifstream config;
    config.open("config.txt");
    if(config.is_open())
    {
        while(getline(config, string line))
        {
            for(int i = 0; i<10 ; i++)
            {
                if(line != '')
                {
                    if(i < 5)
                    {
                        files[i] = line;
                    }
                    if(i>4 && i<8)
                    {
                        scheduler[i] = line;
                    }
                    if(i==8)
                    {
                        numtimes = stoi(line);
                    }
                    if(i==9)
                    {
                        istringstream(line)>>io;
                    } 
                }
                
            }
            
        }
    }
}

//--------------Converting given files and adding to linked list-------
Queue FileToProcess()
{
    Queue newProc = new Queue();
    for(int i = 0; i<4 ; i++)
    {
        if(files[i] != NULL)
        {
            newProc.addP(files[i],"new");
        }
        else
        {
            return newProc;
        }
    }
    return newProc;
}

//--------------Formats structure of threads and schedulers--------
void formatScheduling(Queue newProc)
{
    for(int i = 0; i<newProc.size(); i++)
    {
        initRun(newProc.index(i));
    }
    
    //for each scheduler type, duplicate the queue to a new queue
    //for each scheduler type, reorganize based on queue
}
//----------------------should I change it so u check if each file has io?
void initRun(string filename)
{
    if(io)
    {
        //when going through the files, record their inputs
    }
    //run each process and record start time, finish time, and mark the execution time of that process as the difference between the two

}
