//
//  main.cpp
//  practice
//
//  Created by Onam Kwon on 9/9/20.
//  Copyright © 2020 Onam Kwon. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int arr[10] = {};
    for(int i=0;i<10;i++) {
        arr[i] = i+1;
    }
    
    cout<<"Size of arr: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    
    return 0;
}
