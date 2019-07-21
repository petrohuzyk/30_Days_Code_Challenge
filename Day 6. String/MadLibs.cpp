#include <iostream>

using namespace std;

class MadLib {
    public:
    string story;
    string name;
    string adjective1;
    string adjective2;
    string noun1;
    string noun2;
    string noun3;
    string adverb;
    string randomNums;

    // Getters
    string getStory() { return story; }
    string getName() { return name; }
    string getAdjective1() { return adjective1; }
    string getAdjective2() { return adjective1; }
    string getNoun1() { return noun1; }
    string getNoun2() { return noun2; }
    string getNoun3() { return noun3; }
    string getAdverb() { return adverb; }
    string getRandomNums() {return randomNums; }

    // Setters
    void setStory(string story) { this->story = story; }
    void setName(string name) { this->name = name; }
    void setAdjective1(string adjective1) { this->adjective1 = adjective1; }
    void setAdjective2(string adjective2) { this->adjective2 = adjective2; }
    void setNoun1(string noun1) { this->noun1 = noun1; }
    void setNoun2(string noun2) { this->noun2 = noun2; }
    void setNoun3(string noun3) { this->noun3 = noun3; }
    void setAdverb(string adverb) { this->adverb = adverb; }
    void setRandomNums() { 
        int number = rand() % 100;
        int int_holder[3];
        int index = 0;
        while (index < 3) {
            int_holder[index] = number + index;
            index++;
        }
        randomNums = "not " + int_holder[0];
        randomNums += ", not " + int_holder[1]; 
        randomNums += " but " + int_holder[2]; 
        }

    // Enter functions
    void enterName() { cout << "Enter Name: " << endl; cin >> this->name; }
    void enterAdjective1() { cout << "Enter Adjective1: " << endl; cin >> this->adjective1; }
    void enterAdjective2() { cout << "Enter Adjective2: " << endl; cin >> this->adjective2; }
    void enterNoun1() { cout << "Enter Noun1: " << endl; cin >> this->noun1; }
    void enterNoun2() { cout << "Enter Noun2: " << endl; cin >> this->noun2; }
    void enterNoun3() { cout << "Enter Noun3: " << endl; cin >> this->noun3; }
    void enterAdverb() { cout << "Enter Adverb: " << endl; cin >> this->adverb; }

    void printInstruction() {
        cout << "Welcome to the MadLibs game! If you type in words,";
        cout << " we'll give you a story. Start by typing a name. " << endl;
    }

    void putTogetherTheStory() {
        string story;
        int num = rand() % 2;
        if (num == 0)
            story = "Jessie and her best friend " + getName() +
            " went to Disney World today! They saw a " + getNoun1() +
            " in a show at the Magic Kingdom and ate a " + getAdjective1() +
            " feast for dinner. The next day I ran " + getAdverb() +
            " to meet Mickey Mouse in his " + getNoun2() +
            " and then that night I gazed at the " + getRandomNums() +
            " " + getAdjective2() + " fireworks shooting from the " + getNoun3() + ".\n";
        else 
            story = "Amanda and her frenemy " + getName() + " went to the zoo last summer. " + 
            "They saw a huge " + getNoun1() + "and a tiny little" + getNoun2() + ". That night" + 
            "they decided to climb " + getAdverb() + " into the " + getNoun3() + " to get a closer look. " + 
            " The zoo was " + getAdjective1() + "at night, but they didn't care... " + "Until " +
            getRandomNums() + " " + getAdjective2() + "apes yelled in their faces, making Amanda and " +
            getName() + " sprint all the way back home.";
        setStory(story);
    }

    void play() {
        enterName();
        enterAdjective1();
        enterAdjective2();
        enterNoun1();
        enterNoun2();
        enterNoun3();
        setRandomNums();
        putTogetherTheStory();
        cout << getStory();
    }
};

int main() {
    MadLib game = MadLib();
    game.printInstruction();
    game.play();
    return 1;
}