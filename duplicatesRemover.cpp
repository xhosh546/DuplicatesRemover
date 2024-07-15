#include <iostream>
#include <string>

using namespace std;

void push_back(char*& arr, int& size, char value) {
    char* newArr = new char[size + 1];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    newArr[size] = value;
    delete[] arr;
    arr = newArr;
    ++size;
}

void removeDuplicates(const string& inp, const int size_inp, char*& result, int& res_size) {
    for (int i = 0; i < size_inp; ++i) {
        if (res_size == 0 || result[res_size - 1] != inp[i]) {
            push_back(result, res_size, inp[i]);
        }
    }
}

int main() {
    string inp;
    cout << "Enter your string: ";
    cin >> inp;
    int size_inp = inp.size();

    int res_size = 0;
    char* result = nullptr;

    removeDuplicates(inp, size_inp, result, res_size);

    cout << "New string: ";
    for (int i = 0; i < res_size; ++i) {
        cout << result[i];
    }
    cout << endl;

    delete[] result;

    system("pause");

    return 0;
}
