#pragma once
#include<iostream>

using namespace std;

class Student{
    private:
        int year;
        string name;
        double score;
    public:
        static int count;
        Student();
        Student(int year, string name, double score);

        void setYear(int year);
        int getYear();

        void setName(string name);
        string getName();

        void setScore(double score);
        double getScore();

        void scan(int year, string name, double score);

        void print();
        ~Student();
};

int Student::count = 0;

Student::Student(){
    count++;
}

Student::Student(int year, string name, double score){
    count++;
    this->year = year;
    this->name = name;
    this->score = score;
}

void Student::setYear(int year){
    this->year = year;
}

int Student::getYear(){
    return year;
}

void Student::setName(string name){
    this->name = name;
}

string Student::getName(){
    return name;
}

void Student::setScore(double score){
    this->score = score;
}

double Student::getScore(){
    return score;
}

void Student::scan(int year, string name, double score) {
    this->year = year;
    this->name = name;
    this->score = score;
}

void Student::print(){
    cout << " " << name << " " << year << " " << score << endl;
}

Student::~Student(){
}
