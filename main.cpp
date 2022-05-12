#include <iostream>
#include <string>
#include <ostream>
#include <cstdio>
class Character{
std::string name;
std::string description;
std::string allignment;
int heightInFeet;
int weightInLbs;
public:
    //getters
    std::string getName(){
        return name;
    }
    std::string getDesc(){
        return description;
    }
    std::string getAllignment(){
        return allignment;
    }
    int getHeight() {
        return heightInFeet;
    }
    int getWeight() {
        return weightInLbs;
    }
    //setters
    void setName(std::string setName) {
        name = setName;
    }
    void setDescription(std::string setDesc) {
        description = setDesc;
    }
    void setHeight(int height) {
        heightInFeet = height;
    }
    void setWeight(int weight) {
        weightInLbs = weight;
    }
    void setAllignment(std::string newAllignment) {
        allignment = newAllignment; 
    }
    //make these allow for more option/attempts
    int getInputHeight(void) {
        int height;
        std::cin.clear();
        fflush(stdin);
        std::cout << "Enter Character Height: " << std::endl;
        std::cin >> height;
        if(height == NULL) {
            std::cerr << "No input" << std::endl;
        }
        return height;
    }
    int getInputWeight(void){
        int weight;
        std::cin.clear();
        fflush(stdin);
        std::cout << "Enter Character Weight: " << std::endl;
        std::cin >> weight;
        if(weight == NULL) {
            std::cerr << "No input" << std::endl;
        }
        return weight;
    }
    std::string getInputName(void){
        std::string name;
        std::cin.clear();
        fflush(stdin);
        std::cout << "Enter Character Name: " << std::endl;
        getline(std::cin, name);
        if(name.empty()) {
            std::cerr << "No input" << std::endl;
        }
        return name;
    }
    std::string getInputDesc(void){
        std::string desc;
        std::cin.clear();
        fflush(stdin);
        std::cout << "Enter Character Description: " << std::endl;
        getline(std::cin, desc);
        if(desc.empty()) {
            std::cerr << "No input" << std::endl;
        }
        return desc; 
    }
    std::string getInputAllignment(void) {
        int userChoice;
        std::cin.clear();
        fflush(stdin);
        std::cout << "             Select an Allignment         " << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        std::cout << "1:----------------Lawful Good-------------" << std::endl;
        std::cout << "2:----------------Neutral Good------------" << std::endl;
        std::cout << "3:----------------Chaotic Good------------" << std::endl;
        std::cout << "4:----------------Lawful Neutral----------" << std::endl;
        std::cout << "5:----------------True Neutral------------" << std::endl;
        std::cout << "6:----------------Chaotic Neutral---------" << std::endl;
        std::cout << "7:----------------Lawful Evil-------------" << std::endl;
        std::cout << "8:----------------Neutral Evil------------" << std::endl;
        std::cout << "9:----------------Chaotic Evil------------" << std::endl;
        std::cout << "   Pick a Number to select a Allignment   " << std::endl;
        std::cin >> userChoice;
        switch (userChoice)
        {
        case 1:
            return "Lawful Good"; 
            break;
        case 2:
            return "Neutral Good";
            break;
        case 3:
            return "Chaotic Good";
            break;
        case 4:
            return "Lawful Neutral";
            break;
        case 5:
            return "True Neutral";
            break;
        case 6:
            return "Chaotic Neutral";
            break;
        case 7:
            return "Lawful Evil";
            break;
        case 8:
            return "Neutral Evil";
            break;
        case 9:
            return "Chaotic Evil";
            break;
        
        default:
            std::cerr << "No input" << std::endl;
            break;
        }
    }

};
int main(int argc, char *argv[]) {
    std::cout << "Welcome to the Character Documentor" << std::endl;
    Character newCharacter;
    std::cout << "-----------------------------------" << std::endl;
    newCharacter.setName(newCharacter.getInputName());
    std::cout << "Your characters name" << std::endl;
    std::cout << newCharacter.getName() << std::endl;

    newCharacter.setWeight(newCharacter.getInputWeight());
    std::cout << "Your characters weight" << std::endl;
    std::cout << newCharacter.getWeight() << std::endl;

    newCharacter.setHeight(newCharacter.getInputHeight());
    std::cout << "Your characters height" << std::endl;
    std::cout << newCharacter.getHeight() << std::endl;
}
