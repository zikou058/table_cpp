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


// // class with constructor : 
// class Personne {
//     private :
//     string nom ;
//     int age ;

//     public :
//     Personne(string n, int a){
//         setNom(n) ;
//         setAge(a) ;
//     };
//     void setNom(string n){
//         nom = n ;
//     };
//     void setAge(int a){
//         age = a ;
//     };
//     void afficher(){
//         cout << "le nom est :" << nom << endl;
//         cout << "L'age est :" << age << endl;
//     }

// };

// int main(){
//     Personne p1("ali", 20);
//     p1.afficher();
// }


// class Voiture {
//     private :
//         string marque;
//         int annee;
//         int vitesse ;

//     public :
//         Voiture(string m, int a){
//             marque = m ;
//             annee = a ;
//             vitesse = 0 ;

//         }
//         void acelerer(){
//             vitesse = vitesse + 20 ;
//         }
//         void afficher(){
//             cout << marque << " " << annee << " " << vitesse << endl;
//         }


// };
// int main(){
//     Voiture v1("Toyota", 2020);
//     v1.acelerer();
//     v1.afficher();
// }

   
// class CompteBancaire 

class CompteBancaire {
    private : 
        string titulaire ;
        double solde;
    public :
        CompteBancaire(string t, double s){
            titulaire = t ;
            solde = s ;
        }
        void deposer(double n){
            solde = solde + n ;
        }
        void retirer(double m){
         solde = solde - m ;
        }
        void afficher(){
            cout << "Titulaire : " << titulaire << endl;
            cout << "Solde : " << solde << endl;
        }
};
int main(){
    cout << "Le solde initial : " << endl;
    CompteBancaire c1("Ali", 1000);
    c1.afficher();
    cout << "Apres le depot de 500 : " << endl;
    c1.deposer(500);
    c1.afficher();
    cout << "Apres le retrait de 200 : " << endl;
    c1.retirer(200);
    c1.afficher();
    return 0 ;

};
