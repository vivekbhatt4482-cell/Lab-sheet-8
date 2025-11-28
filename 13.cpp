class Person {
public:
    string name;
    int age;

    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person {
public:
    int marks;

    void inputStudent() {
        inputPerson();
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name 
             << "\nAge: " << age 
             << "\nMarks: " << marks << endl;
    }
};
