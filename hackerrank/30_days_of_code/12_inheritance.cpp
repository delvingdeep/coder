#include <iostream>
#include <vector>

using namespace std;

/* ------------------------- Driver code : 1 -------------------------------- */
class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

/* --------------------------- Code Solution --------------------------------*/
class Student : virtual public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        Student(string fName, string lName, int id, vector<int> scores) : Person(fName, lName, id), testScores(scores) {}

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        char calculate() {
            int sum = 0, avg = 0;
            char grade;

            for(int i = 0; i < testScores.size(); i++) {
                sum += testScores[i];
            }
            avg = sum/testScores.size();

            if(avg >= 90 && avg <= 100) { grade = 'O'; }
            else if(avg >= 80 && avg < 90) { grade = 'E'; }
            else if(avg >= 70 && avg < 80) { grade = 'A'; }
            else if(avg >= 55 && avg < 70) { grade = 'P'; }
            else if(avg >= 40 && avg < 55) { grade = 'D'; }
            else { grade = 'T'; }

            return grade;
        }
};


/* -------------------- Driver code : 2 ---------------------- */
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}