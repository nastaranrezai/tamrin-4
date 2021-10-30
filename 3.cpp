#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int a, b, max;
    cout<<"adad avval ra vared konid : ";
    cin>>a;
    cout<<"adad dovvom ra vared konid : ";
    cin>>b;
    
    if(a > b) max = a;
    else max = b;
    
    while(true){
        
        if(max % a == 0 && max % b == 0) break;
        else ++max;
    }
    
    cout<<"K.M.M do adad vared shode barabar ast ba :"<<max;
    
    return 0;
}