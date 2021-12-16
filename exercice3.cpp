#include<iostream>
#include <list>
#include<iterator>
using namespace std ;
void showlist(list<int> l){ //définir la fonction qui fait  l'affichage des éléments de la liste
list <int> :: iterator it; //declaration de l'iterator it 
for(it=l.begin();it !=l.end();++it)
cout<<"\t" <<*it;
cout<<"\n" ;
}
int main(){
	list<int>llist; //déclaration de la liste
	int n;         //déclaration du variable pour le nombre des chiffres dans la liste
	int j;         //déclaration du variable pour entrer les élémentents de la liste
	cout<<"saisir le nombre de chifre dans la liste:";
	cin>>n;       //saisir la valeur de n
	for (int i=0;i<n;i++){     //boucle for pour parcourir la liste
		cout<<"veuillez saisir chaque element de la liste:";
		cin>>j;        //donner la valeur de j
		llist.push_back(j); //déclaration d une fonction  permetant d'inserer les élément de la liste
	}
cout<<"voici l'ancienne liste :";
showlist(llist); //afficher la liste qu'on a créé
cout<<"voici votre liste trie:";
llist.sort();  //faire la fonction sort pour trie la liste
showlist(llist); //afficher la version finale de la liste
return 0;
}
