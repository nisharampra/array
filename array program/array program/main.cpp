//
//  main.cpp
//  array program
//
//  Created by Nisha Ramprasath on 31/10/23.
//

#include <iostream>
#include <climits>

using namespace std;
int main(int argc, const char * argv[]) {
    int A[10]={2,4,6,8,10,-2,5,};
    int key;
    
    cout<<"enter a key to search";
    cin>>key;
    
    for(int i=0;i<7;i++){
        if(key==A[i]){
            cout<<"enter found"<<i;
            exit(0);
        }
    }
    cout<<"key not found";
    return 0;
}
