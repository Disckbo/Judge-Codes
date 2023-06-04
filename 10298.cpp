#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> findP(string s) {
    int n = s.length();
    vector<string> prefixes;

    for (int i = 0; i < n; i++) {
        string prefix = s.substr(0, i + 1);
        prefixes.push_back(prefix);
    }

    return prefixes;
}

vector<string> findS(string s) {
    int n = s.length();
    vector<string> suffixes;

    for (int i = 0; i < n; i++) {
        string suffix = s.substr(i, n - i);
        suffixes.push_back(suffix);
    }

    return suffixes;
}

vector<string> findPS(string s) {
    vector<string> pre = findP(s);
    vector<string> suf = findS(s);

    int n;
    if(pre.size() > suf.size()) {
        n = pre.size();
    }

    else {
        n = suf.size();
    }
}

int main() {
    string s;
    
    while(cin>>s) {

    }
}