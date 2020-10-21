#include <iostream>

using namespace std;

int main()
{
    int choice;

    try
    {
        cout<<"Enter any choice(0-3): ";
        cin>>choice;

        if(choice == 0)         cout<<"Hello World!"<<endl;
        else if(choice == 1)    throw (100);    //throw integer value
        else if(choice == 2)    throw ('x');    //throw character value
        else if(choice == 3)    throw (1.23f);  //throw float value
        else    cout<<"End !!!"<<endl;
    }
    catch(int a)
    {
        cout<<"Integer Exception Block, value is: "<<a<<endl;
    }
    catch(char b)
    {
        cout<<"Character Exception Block, value is: "<<b<<endl;
    }
    catch(float c)
    {
        cout<<"Float Exception Block, value is: "<<c<<endl;
    }
    catch(...)
    {
        cout<<"\n Catch all";
    }

    return 0;
}
