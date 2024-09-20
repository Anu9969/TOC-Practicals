

#include <iostream>
using namespace std;


int State1(string w, int i);
int State2(string w, int i);
int State3(string w, int i);
int State4(string w, int i);



int State1(string w, int i) {
    cout << "State1" << endl;
    if (i == w.length()) {
        cout << "Accepted" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State2(w, i + 1);
        }
        if (w[i] == 'b') {
            return State4(w, i + 1);
        }
    }
    return 0; 
}

int State2(string w, int i) {
    cout << "State2" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State1(w, i + 1);
        }
        if (w[i] == 'b') {
            return State3(w, i + 1);
        }
    }
    return 0; 
}

int State3(string w, int i) {
    cout << "State3" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State4(w, i + 1);
        }
        if (w[i] == 'b') {
            return State2(w, i + 1);
        }
    }
    return 0; 
}

int State4(string w, int i) {
    cout << "State4" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State3(w, i + 1);
        }
        if (w[i] == 'b') {
            return State1(w, i + 1);
        }
    }
    return 0; 
}


int main() {
    string w;
    cin >> w;
    int result = State1(w, 0);
    return 0;
}
