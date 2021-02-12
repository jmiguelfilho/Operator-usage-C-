
//
//  main.cpp
//  ve2_18413_Q2
//
//  Created by João Miguel on 13/07/20.
//  Copyright © 2020 João Miguel. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class MinhaClasse{

    public:
    ostream *pos;
    vector<int> vetor;
    
    MinhaClasse(): pos(NULL){
    }
    MinhaClasse(int x){
        vetor.push_back(x);
    }
    
    ostream& operator<< (char c){
        vector<int>::iterator it;
        sort(vetor.begin(),vetor.end());
    
        if(c=='\n'){
            for(it=vetor.begin();it!=vetor.end();it++)
            {
                *pos<<*it<<" ";
            }
            
            return *pos;
        }
        
    else
        return cout;

    }
    MinhaClasse& operator<< (const MinhaClasse& ldo){
        return *this;
    }
    
    MinhaClasse& operator>> (const MinhaClasse& ldo){
        return *this;
    }
    
    MinhaClasse& operator>> (ostream &os){
        pos =&os;
        return (*this);
    }
    MinhaClasse& operator()(int v){
        vetor.push_back(v);
        return (*this);
    }
    
};


int main(int argc, const char * argv[]) {
    
    int a, b, c, d;
    MinhaClasse T;
    
    cin>>a>>b>>c>>d;
    
    T(a)<<T(b)>>cout<<T(c)<<T(d)<<'\n';

    return 0;
}
