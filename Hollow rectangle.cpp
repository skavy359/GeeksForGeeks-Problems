#include <iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || j==0 || i==r-1 || j==c-1) {
                cout <<"* ";
            }
            else {
                cout <<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
