// #include <iostream>
// using namespace std; 

// int main(){
//     int n;
//     cout << "Donner le nombre des Etudiants : ";
//     cin >> n;
//     char (*nom)[20] = new char[n][20];
//     float (*informatique) = new float[n];
//     float (*math) = new float[n];
//     float (*physique) = new float[n];
//     float (*developpement) = new float[n];
//     float somme = 0;
//     float moyenne ;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout << "Donner le nom de l'etudiant " << i+1 << " : ";
//         cin >> nom[i];
//     }
//     cout << "--- RESULTATS DES ETUDIANTS ---" << endl;
//     for( int i = 0 ; i < n ; i++){
//   cout << "--- LES NOTES POUR L'ETUDIANT " << nom[i] << " ---" << endl;
//         cout << "la note de module informatiques de l'etudiant " << nom[i] << " : ";
//         cin >> informatique[i];

//         cout << "la note de module math de l'etudiant " << nom[i] << " : ";
//         cin >> math[i];

//         cout << "la note de module physique de l'etudiant " << nom[i] << " : ";
//         cin >> physique[i];

//         cout << "la note de module developpement de l'etudiant " << nom[i] << " : ";
//         cin >> developpement[i];

//         somme = somme + informatique[i] + math[i] + physique[i] + developpement[i]; // Ajouter la note à la somme totale
       
//         }
//     moyenne = somme / 4 ; // Diviser par le nombre total de notes
//     cout << "La moyenne est des notes donnees : " << moyenne << endl;

//     return 0;
// }


// class Etudiant {
//     public : 
//     int n ;
//     std::string nom ;

//     public :

//     void afficher(){
//         cout << "Le nom de l'etudiant : " << nom << endl;
//         cout << "Le nombre des etudiants : " << n << endl;
//     }
// };

// int main() {
//     Etudiant e;
//     e.nom =  "ali";
//     e.n =  1;
//     e.afficher();
// }


// class Personne 


// class with constructor : 
class Personne {
    private :
    string nom ;
    int age ;

    public :
    Personne(string n, int a){
        setNom(n) ;
        setAge(a) ;
    };
    void setNom(string n){
        nom = n ;
    };
    void setAge(int a){
        age = a ;
    };
    void afficher(){
        cout << "le nom est :" << nom << endl;
        cout << "L'age est :" << age << endl;
    }

};

int main(){
    Personne p1("ali", 20);
    p1.afficher();
}

   