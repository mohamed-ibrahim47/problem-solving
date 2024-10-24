#include <iostream>
using namespace std;

string isHard(string n,int ind) {
    //

    if (ind==n.length()) {
        return "Yes";
    }
    if(ind % 2 == 0){
        if (!islower(n[ind])) {
            return "No";
        }
    }else {
        if (!isupper(n[ind])) {
            return "No";
        }
    }
    return isHard(n,ind+1);
}

int main() {

    string s;
    cin >> s;
    cout <<  isHard(s,0) << endl;

    return 0;
}
