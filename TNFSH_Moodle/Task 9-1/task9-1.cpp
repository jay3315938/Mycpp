//
//  main.cpp
//  
//
//  Created by gnsJhenJie on 2018/1/24.
//  Copyright © 2018年 gnsJhenJie. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(int argc, const char * argv[]) {
    /*int m;cin>>m;
    int sigma =0 ;
    int n=0;
    while (sigma<m) {
        n++;
        sigma+=n;
    }
    cout<<n<<endl;
    return 0;*/
    char abc[500];
    cin.get(abc,sizeof(abc));
    int n;cin>>n;
    for (int i=0; i<strlen(abc); i++) {
        if ((abc[i]>=97)&&(abc[i]<=122)) {
            if (abc[i]+n>122){
                cout<< (char)(abc[i]+n-122+96);
            }else{
                cout << (char)(abc[i]+n);
            }
        }else{
            cout<< (char)(abc[i]);
        }
    }
    cout<<endl;
    return 0;
    
}
