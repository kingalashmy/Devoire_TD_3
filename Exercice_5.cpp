#include <iostream>
using namespace std;
class Test{
public:
static int tableau[10] ;
public :
static int division(int indice, int diviseur){
    // int length = sizeof(tableau)/sizeof(tableau[0] ) ;
    // int length = tableau.length ;  
    try {
            if(diviseur == 0 ){  // pour verifier la diviseur 
            throw "Erreur de division par zero!";}
            if (indice > 9  || indice < 0 ) // pour verifier l'indice  : est-ce que suprieur la taille de tableau ou nombre negative ;  
             {
                throw indice ; 
            
            }
            } catch (const char *e ) { // catch la diviseur 
                cout<<e ; 
            }
            catch(int i ){ // catch la indice 
                cout<< "the rang "<< i <<"  out size of table !! "; 
            }

    return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
    
int x, y;
cout << "Entrez l indice de l entier a diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
cout << "Le resultat de la division est: "<< endl;
cout <<Test::division(x,y) << endl;
return 0; }