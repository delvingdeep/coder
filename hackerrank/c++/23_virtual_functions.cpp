#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* ----- Solution code ----- */
class Person
{
    public:
        string name;
        int age;
        virtual void getdata() {
            cin >> name;
            cin >> age;
        }

        virtual void putdata() {
            cout << name << " ";
            cout << age << " ";
        }
};

class Professor : public Person
{
    public:
        int publications;
        int cur_id;
        static int id;

        Professor() { cur_id = ++id; }
        void getdata() {
            cin >> name;
            cin >> age;
            cin >> publications;
        }
        void putdata() {
            cout << name << " ";
            cout << age << " ";
            cout << publications << " ";
            cout << cur_id << "\n";
        }
};
int Professor::id = 0;

class Student : public Person
{
    public:
        int marks[6];
        int cur_id;
        static int id;

        Student() { cur_id = ++id; }
        void getdata() {
            cin >> name;
            cin >> age;

            for(int i=0; i < 6; i++){
                cin >> marks[i];
            }

        }

        void putdata() {
            int sum = 0;
            for(int i=0; i < 6; i++){
                sum += marks[i];
            }

            cout << name << " ";
            cout << age << " ";
            cout << sum << " ";
            cout << cur_id << "\n";
        }
};
int Student::id = 0;


/* ---- Hackerrank provided driver code ---- */
int main() {
    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}