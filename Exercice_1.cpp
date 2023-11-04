#include <iostream>

using namespace std;

class nombre_Complex {
private:
    double reel;
    double image;

public:
    nombre_Complex(double r = 0, double i = 0) : reel(r), image(i) {}

    nombre_Complex operator+(const nombre_Complex& other) {
        double new_Reel = reel + other.reel;
        double new_Image = image + other.image;
        return nombre_Complex(new_Reel, new_Image);
    }
    nombre_Complex operator-(const nombre_Complex& other) {
        double new_Reel = reel - other.reel; 
        double new_Image = image - other.image; 
        return nombre_Complex(new_Reel, new_Image); 
    }
    nombre_Complex operator*(const nombre_Complex& other) {
        double newReel = reel * other.reel - image * other.image; 
        double newImage = reel * other.image + image * other.reel; 
        return nombre_Complex(newReel, newImage); 
    }
    nombre_Complex operator/(const nombre_Complex& other) {

        double denominator = other.reel * other.reel + other.image * other.image; 
        double newReel = reel * other.reel - image + other.image / denominator; 
        double newImage = reel * other.reel +  image + other.image / denominator;

        return nombre_Complex(newReel, newImage); 

    }

    void affiche() {
        cout << "Reel : " << reel << " + " << image <<"i" << endl ;
    }
};

int main() {
    double reel_1,image_1 , reel_2 , image_2 ;
    cout << "reel 1 : "; 
    cin >> reel_1; 
    cout << "image 1 : ";
    cin >> image_1; 
    cout << "reel 2 : "; 
    cin >> reel_2;
    cout << "image 2 : "; 
    cin >> image_2; 
    


    nombre_Complex nombre_1(reel_1, image_1);
    nombre_Complex nombre_2(reel_2,image_2 );
    nombre_Complex result(0, 0);
    cout << "entre les operateurs +  - / * : " << endl; 
    char choice; 
    cin >> choice; 

    switch (choice) 
    {
       
            case '+':    result = nombre_1 + nombre_2 ;  result.affiche() ;  break; 
            case '-': result = nombre_1 - nombre_2; result.affiche();  break; 
            case '*': result = nombre_1 * nombre_2;   result.affiche() ; break; 

            case '/': result = nombre_1 / nombre_2; result.affiche() ;  break; 
            default : 
                cout << "oparteur invalide !! ";
        

    }

  
    // result.affiche();

    return 0;
}
