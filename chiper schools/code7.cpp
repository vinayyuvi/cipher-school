#include<iostream>
using namespace std;
void increment(int&a){
    a++;
    return;
}
int main(){
    int i = 11;
    int&j = i;
    j++;
    cout<<i<<endl;
    return 0;
}