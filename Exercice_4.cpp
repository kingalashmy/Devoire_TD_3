#include <iostream>
#include <iterator>
#include<vector>
#include<list>
#include<algorithm>
#include<set>
using namespace std ; 

template < typename Iterator   , typename T  >
bool recherche(Iterator begin , Iterator end , T& valeur ){
    return find(begin,end,valeur) != end  ; 


}

int main(){
set<int> list_set ; 
// set<int> ::iterator it =list_set.begin()  ; 
for(int i = 1 ; i<=100 ; i++){
     list_set.insert(i) ; 
}
// print the list 
// for (auto i : list_set) {
//     cout<<i<<"  " ; 
// }
cout<<endl ; 
list<int> list_list; 
for(int i =1 ; i<100 ; i++ ){
    list_list.push_back(i); 
}
vector<string> list_vector = {"alhamed","mohamed","yasing","mazen","salem","ali"}; 
float table_classiq[]={12,44,6,7,8,9,3} ; 
int nombre ; 


cout << "entrez un nombre a chercher dans la set: ";
cin>> nombre ; 
    if(recherche(list_set.begin(),list_set.end(),nombre ) ) {
        cout<< "the numbr of set is find "; 
    }else {
        cout << "not found the numbre of set ";
    }
    cout<<endl ; 
    string mots ;
    cout<<"entre  la mot de vector que tu veux se recherche :  " ; 
    cin>> mots ; 
    if( recherche(list_vector.begin(), list_vector.end() , mots )  ) {
        cout<< "mot est trouver";
    }else {
    cout<< "mot n'est pas trouver";
    }
    cout<<endl ; 




    int nombre_table ; 
  
    cout<<"entre la nombre de tableux classi tu veux rechereche : " ; 
    cin>>nombre_table ; 
    if(recherche(begin(table_classiq), end(table_classiq), nombre_table)){
        cout<<"la nombre de tableau classique est trouvere";
    }
    else{
        cout<<"la nombre de tableau classique n'est pas trouver ! " ; 
    }

}