#include <iostream>
#include <string>

using namespace std;


int State1_1(string w, int i);
int State1_2(string w, int i);
int State1_3(string w, int i);
int Dead1(string w, int i);


int State2_1(string w, int i);
int State2_2(string w, int i);
int State2_3(string w, int i);
int Dead2(string w, int i);

//machine 1
int State1_1(string w, int i) {
    cout << "FA1 State1" << endl;
    if (i == w.length()) {
        cout << "FA1 Rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State1_2(w, i + 1);
        if (w[i] == 'b') return Dead1(w, i + 1);
    }
    return 0;
}

int State1_2(string w, int i) {
    cout << "FA1 State2" << endl;
    if (i == w.length()) {
        cout << "FA1 Rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State1_2(w, i + 1);
        if (w[i] == 'b') return State1_3(w, i + 1);
    }
    return 0;
}

int State1_3(string w, int i) {
    cout << "FA1 State3" << endl;
    if (i == w.length()) {
        cout << "FA1 Accepted" << endl;
        return 1;
    } else {
        if (w[i] == 'a') return State1_2(w, i + 1);
        if (w[i] == 'b') return State1_3(w, i + 1);
    }
    return 0;
}

int Dead1(string w, int i) {
    cout << "FA1 Dead" << endl;
    if (i == w.length()) {
        cout << "FA1 Rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return Dead1(w, i + 1);
        if (w[i] == 'b') return Dead1(w, i + 1);
    }
    return 0;
}

// machine 2
int State2_1(string w, int i) {
    cout << "FA2 State1" << endl;
    if (i == w.length()) {
        cout << "FA2 Rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State2_2(w, i + 1);
        if (w[i] == 'b') return State2_3(w, i + 1);
    }
    return 0;
}

int State2_2(string w, int i) {
    cout << "FA2 State2" << endl;
    if (i == w.length()) {
        cout << "FA2 Accepted" << endl;
        return 1;
    } else {
        if (w[i] == 'a') return State2_2(w, i + 1);
        if (w[i] == 'b') return Dead2(w, i + 1);
    }
    return 0;
}

int State2_3(string w, int i) {
    cout << "FA2 State3" << endl;
    if (i == w.length()) {
        cout << "FA2 Rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return Dead2(w, i + 1);
        if (w[i] == 'b') return State2_3(w, i + 1);
    }
    return 0;
}

int Dead2(string w, int i) {
    cout << "FA2 Dead" << endl;
    if (i == w.length()) {
        cout << "FA2 Rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return Dead2(w, i + 1);
        if (w[i] == 'b') return Dead2(w, i + 1);
    }
    return 0;
}

int main() {
    string w;
    cout << "Enter a string: ";
    cin >> w;

    int result1 = State1_1(w, 0);
    int result2 = State2_1(w, 0);

    cout << "\nUnion of L1 and L2: ";
    if (result1 || result2) {
        cout << "Accepted" << endl;
    } else {
        cout << "Rejected" << endl;
    }

    cout << "Intersection of L1 and L2: ";
    if (result1 && result2) {
        cout << "Accepted" << endl;
    } else {
        cout << "Rejected" << endl;
    }

    return 0;
}