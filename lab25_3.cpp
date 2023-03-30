#include<iostream>
#include<set>
using namespace std;

//Write function count() here.
int count(int data[],int n){
   set<int> p;
  for(int i =0;i < n;i++){
    p.insert(data[i]);
  }
  return p.size();
}