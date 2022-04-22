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
    cout<<fileName<<endl;
    userFile.open(fileName);
    cout<<"this worked"<<endl;
    cout<<userFile.is_open();
    if(userFile.is_open())
    {
        userFile.close();
    }
    return 0;
}
