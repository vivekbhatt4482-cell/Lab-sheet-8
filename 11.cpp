class Car {
public:
    string brand;
    int price;

    void input() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << brand << " - " << price << endl;
    }
};

int main() {
    Car c1, c2;

    c1.input();
    c2.input();

    c1.display();
    c2.display();
}
