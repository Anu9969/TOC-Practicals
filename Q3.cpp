

#include <iostream>
using namespace std;

int initial(string w, int i); 
int State1(string w, int i);
int State2(string w, int i);
int State3(string w, int i);
int State4(string w, int i);
int State5(string w, int i);
int State6(string w, int i);
int State7(string w, int i);
int State8(string w, int i);
int State9(string w, int i);
int State10(string w, int i);
int final1(string w, int i);
int final2(string w, int i);
int final3(string w, int i);
int final4(string w, int i);




int initial(string w, int i) {
    cout << "initial" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State1(w, i + 1);
        }
        if (w[i] == 'b') {
            return State2(w, i + 1);
        }
    }
    return 0; 
}

int State1(string w, int i) {
    cout << "State1" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State3(w, i + 1);
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
            return State6(w, i + 1);
        }
        if (w[i] == 'b') {
            return State5(w, i + 1);
        }
    }
    return 0; 
}

int State3(string w, int i) {
    cout << "State1" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State7(w, i + 1);
        }
        if (w[i] == 'b') {
            return State3(w, i + 1);
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
            return State8(w, i + 1);
        }
        if (w[i] == 'b') {
            return State4(w, i + 1);
        }
    }
    return 0; 
}

int State5(string w, int i) {
    cout << "State5" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State5(w, i + 1);
        }
        if (w[i] == 'b') {
            return State9(w, i + 1);
        }
    }
    return 0; 
}

int State6(string w, int i) {
    cout << "State6" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State6(w, i + 1);
        }
        if (w[i] == 'b') {
            return State10(w, i + 1);
        }
    }
    return 0; 
}

int State7(string w, int i) {
    cout << "State7" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return final1(w, i + 1);
        }
        if (w[i] == 'b') {
            return State3(w, i + 1);
        }
    }
    return 0; 
}

int State8(string w, int i) {
    cout << "State8" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State4(w, i + 1);
        }
        if (w[i] == 'b') {
            return final2(w, i + 1);
        }
    }
    return 0; 
}

int State9(string w, int i) {
    cout << "State9" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State5(w, i + 1);
        }
        if (w[i] == 'b') {
            return final3(w, i + 1);
        }
    }
    return 0; 
}

int State10(string w, int i) {
    cout << "State10" << endl;
    if (i == w.length()) {
        cout << "Rejected" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return final4(w, i + 1);
        }
        if (w[i] == 'b') {
            return State10(w, i + 1);
        }
    }
    return 0; 
}




int final1(string w, int i) {
    cout << "final1" << endl;
    if (i == w.length()) {
        cout << "Accepted (start and end with aa)" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return final1(w, i + 1);
        }
        if (w[i] == 'b') {
            return State3(w, i + 1);
        }
    }
    return 0; 
}

int final2(string w, int i) {
    cout << "final2" << endl;
    if (i == w.length()) {
        cout << "Accepted (start and end with ab)" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State8(w, i + 1);
        }
        if (w[i] == 'b') {
            return State4(w, i + 1);
        }
    }
    return 0; 
}

int final3(string w, int i) {
    cout << "final3" << endl;
    if (i == w.length()) {
        cout << "Accepted (start and end with bb)" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State5(w, i + 1);
        }
        if (w[i] == 'b') {
            return final3(w, i + 1);
        }
    }
    return 0; 
}

int final4(string w, int i) {
    cout << "final4" << endl;
    if (i == w.length()) { 
        cout << "Accepted (start and end with ba)" << endl;
        return 1;
    } else {
        if (w[i] == 'a') {
            return State6(w, i + 1);
        }
        if (w[i] == 'b') {
            return State10(w, i + 1);
        }
    }
    return 0; 
}


int main() {
    string w;
    cin >> w;
    int result = initial(w, 0);
    return 0;
}
