# include <iostream>
using namespace std;
int main(){
    int rows, columns;
    cout<<"Enter no. of rows"<<endl;
    cin>>rows;
    cout<<"Enter no. of columns"<<endl;
    cin>>columns;
    for(int i=1; i<=rows;i++)
    {
        for(int j=1; j<=columns;j++){
            cout<<'*';
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
    }