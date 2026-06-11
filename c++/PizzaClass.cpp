#include <iostream>
using namespace std;

// Without OOP: You have a bag of loose buttons, batteries, and circuits. Every time you want to change the channel, you connect them yourself. 🔌😩
// With OOP: You have a remote (object). It already contains everything inside. You just press remote.changeChannel()
class Pizza {
    public: 
        string size;
        string topping;
        double price;
        
       Pizza() {} 

       Pizza(string s, string t, double p) {
            size = s;
            topping = t;
            price = p;
       }

       void ShowOrder() {
            cout << size << " pizza with " << topping << " "
               << price << endl;
       }

       void BakePizza(string s, string t, double p) {
            size = s;
            topping = t;
            price = p;
       }


};

int main() {
   
    Pizza p1("Large", "Cheese" , 5.5);
    Pizza p2("Medium", "Pepperoni", 3.5);
    Pizza p3("Small", "Chicken", 7.5);
    Pizza p4;
    
    p4.BakePizza("Extra Large", "Hawaiian", 8.5);

    cout << " --- Your Order -----" << endl;
    p1.ShowOrder();
    p2.ShowOrder();
    p3.ShowOrder();
    p4.ShowOrder();
    

    double total = p1.price + p2.price + p3.price + p4.price;;
    cout << "--------------------------------------" << endl;
    cout << "Total Price: " << total << endl;

    return 0;
}
