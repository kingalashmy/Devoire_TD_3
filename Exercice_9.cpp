#include<iostream>
using namespace std ; 
template <class T> class point
{ T x, y ; // coordonnees
public :
point (T abs, T ord) { x = abs ; y = ord ; }
void affiche () ;
void affiche_nombre() ; 
} ;
template <class T> void point<T>::affiche ()
{ cout << "Coordonnees : " << x << " " << y << "\n" ;
}
template <class T1> void point<T1>::affiche_nombre (){
    cout<<" Coordonnees : " << static_cast<int> (x)<< "  " << static_cast<int>(y) << endl ; 
}

int main(){
        point <char>p (60, 65) ;
        p.affiche () ;
        //  la programme affiche  { Coordonnees : < A } pour la table ASCI  code 
        // je doit faire la la static_cast pour convrtir la type de char a int  ; je fait un autre methode pour faire convrtir
        p.affiche_nombre() ; 
       


}