#include <iostream>
using namespace std;


int main(){
    
    int marks;
    int mark[5];
    int sum = 0;
    float avg;
    cout << "Enter marks in 5 subjects: " << endl;
    cout <<endl;
    for(int i = 0; i < 5; i++){
        cout << "Enter marks for Subject " << i << endl;
        cin >> marks;
        mark[i] = marks;
        sum = sum + marks;
    }
    //to find max grade
    int max;
    for(int i = 0; i < 5; i ++){
        
        max = mark[0];
        if(max < mark[i]){
            max = mark[i];
        }
    }
    cout << "Max: " << max;
    
    cout << endl;

    //to find min grade
    int min;
    for(int i = 0; i < 5; i ++){
        
        min = mark[0];
        if(min > mark[i]){
            min = mark[i];
        }
    }
    cout << "Min: " << min;
    
cout << endl;
    
    avg = sum/5;
    
    cout << " Average Grade is --> ";
    if(avg>=91 && avg<=100)
        cout<<"A1";
    else if(avg>=81 && avg<91)
        cout<<"A2";
    else if(avg>=71 && avg<81)
        cout<<"B1";
    else if(avg>=61 && avg<71)
        cout<<"B2";
    else if(avg>=51 && avg<61)
        cout<<"C1";
    else if(avg>=41 && avg<51)
        cout<<"C2";
    else if(avg>=33 && avg<41)
        cout<<"D";
    else if(avg>=21 && avg<33)
        cout<<"E1";
    else if(avg>=0 && avg<21)
        cout<<"E2";
    else
        cout<<"Invalid!";
    cout<<endl;

}
