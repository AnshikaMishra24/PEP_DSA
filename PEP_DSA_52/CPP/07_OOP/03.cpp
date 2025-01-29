03.cpp
//encapsulation
//binding together data & functions
//it is defined as a binding together the data members and member functions.
//we cannot access the anu data or functio fromt he class directly 
//this will increase the security of the data
//this will also help to control the modification of our sata memebers.

#include<iostream>
using namespace std;

class Encapsulation{
    private:
    int salary;

    public:
    Encapsulation(int val){
        salary= val;
    }
    //getter
    int getSalary(){
        return salary;
    }//to see salary

    //setter
    //will set the salary
    void setSalary()
    int amount{
        salary=amount;
    }
    
};

int main(){
    Encapsulation e1(1000);

    cout<<e1.getSalary()<<endl;

    e1.setSalary(2000);
    cout<<e1.getSalary()<<endl;

}

//question
#include<iostream>
using namespace std;

class Student(){
    private:
    string name;
    int rollNumber;
    float marks;

    //getter
    int getStudent(){
        return name;}
    int getRollNumber(){
        return rollNumber;}
    int getMarks(){
        return marks;}
    string getGrade() {
        if(marks>=90){
            return "A";
        }
        else if(marks>=75){
            return "B";
        }
        else if (marks>=60) {
            return "C";
        }else if (marks>=40) {
            return "D";
        }else{
            return "F";
        }
    }
    

    //setter
    void setName(const &studentName){
        name=studentName;
    }
    void setRollNumber(int rollnum){
        rollNumber=rollnum
    }
    void setMarks(float smarks){
        if(smarks>=0 && smarks<=100){
            marks=smarks;
        }
        else{
            cout<<"Invalid"<<endl;
            marks=0;
        }
    }

};
int main(){
    Student s1,s2;
    s1.setName("Ann");
    s1.setRollNumber(61);
    s1.setMarks(80);

    cout<<"Student1 Info"<<endl;
    s1.displayStudentInfo();

    return 0;
}