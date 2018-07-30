#include "SearchRequest.pb.h"
#include <iostream>
//using namespace std;


int main(){
    //std::cout<<"hello";
    tu::SearchRequest t;
    t.set_query("newquery");
    std::cout<<*(t.mutable_query());
    //protoc --cpp_out=./ ./SearchRequest.proto
    //g++ -o test test.cc SearchRequest.pb.cc -lprotobthread
}