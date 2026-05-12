#include <iostream>
using namespace std;

// Without OOP: You have a bag of loose buttons, batteries, and circuits. Every time you want to change the channel, you connect them yourself. 🔌😩
// With OOP: You have a remote (object). It already contains everything inside. You just press remote.changeChannel()
class F1 {
     private:
        int engineTorque;
        int miracleFuelComposition;
        int suspensionheight;
        int brakeDuctGemetry;
        int aerodynamics;
        string brand;
        string color;
    
        void addSecretCarSpecs() {
            engineTorque = 8.7;
            miracleFuelComposition = 11.56;
            suspensionheight = 10.2;
            brakeDuctGemetry = 12.34;
            aerodynamics = (engineTorque + miracleFuelComposition + suspensionheight + brakeDuctGemetry) / 4 + 3.14;
        }

    public:
    //    F1(string br, string c) {
    //         brand = br;
    //         color = c;
    //    }

       void AddCarSpecs(string c, string b) {
            color = c;
            brand = b;
            addSecretCarSpecs();
       }

       void ShowCarSpecs() {
            cout << "Brand: " << brand << endl;
            cout << "Color: " << color << endl;
            cout << "Engine Torque: " << engineTorque << endl;
            cout << "Suspension Height: " << suspensionheight << endl;
       }
    

};

int main() {
    
    F1 ferrariCar1;
    ferrariCar1.AddCarSpecs("Red", "Ferrari");
    ferrariCar1.ShowCarSpecs();
    return 0;
}
