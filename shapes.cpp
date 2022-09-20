/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 4

Has functions that print different shapes
*/
#include <string>

std::string box(int w, int h){
    std::string ans = "";
    std::string l = "";
    int i;
    for(i=0; i < w; i++){
        l += "*";
    }
    if (l.length() != 0){
        l += "\n";
    }
    for(i=0; i < h; i++){
        ans += l;
    }
    return ans;
}

std::string checkerboard(int w, int h){
    std::string ans = "";
    std::string l1 = "";
    std::string l2 = "";
    int i;
    for(i=0; i < w; i++){
        if (i % 2 == 0){
            l1 += "*";
            l2 += " ";
        }
        else{
            l1 += " ";
            l2 += "*";    
        }
    }
    if (w != 0){
        l1 += "\n";
        l2 += "\n";
    }
    for(i=0; i < h; i++){
        if (i % 2 == 0){
            ans += l1;
        }
        else{
            ans += l2;
        }
    }
    return ans;
}
