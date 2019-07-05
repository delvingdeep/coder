using namespace std;
#include <iostream>

class Person
{
    private:
        int age;

    public:
        Person(int initialAge) : age(initialAge) {
            if(initialAge < 0) { 
                cout << "Age is not valid, setting age to 0." << endl;
                age = 0;
            }
        }

        void yearPasses() { age++; }
        void amIOld() {
            if(age < 13) { cout << "You are young." << endl; }
            else if(age >= 13 && age < 18) { cout << "You are a teenager." << endl; }
            else { cout << "You are old." << endl; }
        }
};

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}