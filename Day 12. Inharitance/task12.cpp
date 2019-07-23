/*
You are given two classes, Person and Student, where Person is the base class and 
Student is the derived class. Completed code for Person and a declaration for 
Student are provided for you in the editor. Observe that Student inherits all the properties of Person.
Complete the Student class by writing the following:
    A Student class constructor, which has 4 parameters:
        A string, firstName.
        A string, lastName.
        An integer, id.
        An integer array (or vector) of test scores, scores.
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
 */

#include <iostream>
#include <vector>

using namespace std;


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

class Student :  public Person{
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
        Student(string firstName, string lastName, int identification, vector<int> testScores) : Person(firstName, lastName, identification) {
            this->testScores = testScores;
        }

        char calculate() {
            int average, sum=0;
            for (int i=0; i<testScores.size(); i++) {
                sum += testScores[i];
            }
            average = sum / testScores.size();
            if (average >= 90) {
                return 'O';
            }
            else if (average >= 80) {
                return 'E';
            }
            else if (average >= 70) {
                return 'A';
            }
            else if (average >= 55) {
                return 'P';
            }
            else if (average >= 40) {
                return 'D';
            }
            else {
                return 'T';
            }
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
};

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