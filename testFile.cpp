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
    cout<<userFile.is_open();

    if(userFile.is_open())
    {
        userFile.close();
    }
    return 0;
}
