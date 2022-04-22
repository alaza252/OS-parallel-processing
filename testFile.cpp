#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream userFile;
    string fileName;
    cout<<"FileName: "<<endl;
    cin>>fileName;
    userFile.open(fileName);
    cout<<str(userFile.is_open());
    string line;
    if(userFile.is_open())
    {
        cout<<"inside if loop"<<endl;
        while( getline (userFile,line))
        {
            cout<<line<<'\n';
        }
        userFile.close();
        cout<<"file closed"<<endl;
    }
    return 0;
}
