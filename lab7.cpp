#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;
void create(char a[], char b[]);
void output(char a[], char b[]);
void third_arr(char a[], char b[], char c[]);
void out_th(char c[]);
void average(char c[]);

int main() {
    char first[10], second[10], third[10];
    create(first, second);
    output(first, second);
    third_arr(first, second, third);
    out_th(third);
    average(third);
}

void create(char a[], char b[]){
    for(int i=0; i<10; i++){
        a[i]=92 - 3 * i;
        b[i]=71 + 3 * i;
    }
}

void output(char a[], char b[]){
    cout << "First array: "<<endl;
    for(int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout<< endl<<endl;
    cout << "Second array: "<<endl;
    for(int i = 0; i < 10; i++){
        cout << b[i] << " ";
    }
    cout<< endl<<endl;
}

void third_arr(char a[], char b[], char c[]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(a[i]==b[j]) c[i]=a[i];
        }
    }
    for(int i = 0; i < 10; i++){
        if (c[i] <= 32) c[i] = 0;
    }
}

void out_th(char c[]){
    cout << "Third array: "<<endl;
    for(int i = 0; i < 10; i++){
        cout << c[i] << " ";
    }
    cout<< endl<<endl;
}

void average(char c[]){
    float av;
    int sum = 0, num=0;
    for(int i = 0; i < 10; i++){
        if(c[i]<82){sum+=c[i];
            if(c[i]!=0){
                num++;
            }
        }
    }
    av=sum/num;
    cout << "Average: " << av << endl;
}
