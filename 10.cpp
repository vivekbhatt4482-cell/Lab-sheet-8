class Student {
public:
    string name;
    int roll_no;
    float marks;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << "\nRoll No: " << roll_no 
             << "\nMarks: " << marks << endl;
    }
};
