#include<iostream>
using namespace std ;
template <typename T>
// la fonction de  template pour calcule la carre de nombre 
T carre(T nombre ){
    return nombre * nombre ; 
}  
int main(){
    int nombre1 ; 
    double nombre2 ;
    cout << "entre la nombre de type entier : "; cin>> nombre1 ; 
      cout<<"la caree de nombre de type entier : " <<carre(nombre1) <<endl ; 
     
     cout<<"entrez la nombre de type reel : "; cin>> nombre2 ; 
    cout<< "la caree de nombre de type reel : " << carre(nombre2) ; 

}