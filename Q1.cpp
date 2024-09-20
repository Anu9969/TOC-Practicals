

#include <iostream>
using namespace std;

int initial(string w, int i); 
int State2(string w, int i);
int State3(string w, int i);
int final(string w, int i);



int initial(string w, int i) {
    cout << "initial" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State2(w, i + 1);
        }
        if (w[i] == 'b') {
            return initial(w, i + 1);
        }
    }
    return 0; 
}

int State2(string w, int i) {
    cout << "State2" << endl;
    if (i == w.length()) {
        cout << "Accepted" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State3(w, i + 1);
        }
        if (w[i] == 'b') {
            return initial(w, i + 1);
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
            return final(w, i + 1);
        }
        if (w[i] == 'b') {
            return initial(w, i + 1);
        }
    }
    return 0; 
}

int final(string w, int i) {
    cout << "final" << endl;
    if (i == w.length()) {
        cout << "Accepted" << endl;
        return 1;
    } else {
        
        return final(w, i + 1);
    }
    return 0;
    }


int main() {
    string w;
    cin >> w;
    int result = initial(w, 0);
    return 0;
}
