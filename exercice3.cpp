#include<iostream>
#include <list>
#include<iterator>
using namespace std ;
void showlist(list<int> l){ //d�finir la fonction qui fait  l'affichage des �l�ments de la liste
list <int> :: iterator it; //declaration de l'iterator it 
for(it=l.begin();it !=l.end();++it)
cout<<"\t" <<*it;
cout<<"\n" ;
}
int main(){
	list<int>llist; //d�claration de la liste
	int n;         //d�claration du variable pour le nombre des chiffres dans la liste
	int j;         //d�claration du variable pour entrer les �l�mentents de la liste
	cout<<"saisir le nombre de chifre dans la liste:";
	cin>>n;       //saisir la valeur de n
	for (int i=0;i<n;i++){     //boucle for pour parcourir la liste
		cout<<"veuillez saisir chaque element de la liste:";
		cin>>j;        //donner la valeur de j
		llist.push_back(j); //d�claration d une fonction  permetant d'inserer les �l�ment de la liste
	}
cout<<"voici l'ancienne liste :";
showlist(llist); //afficher la liste qu'on a cr��
cout<<"voici votre liste trie:";
llist.sort();  //faire la fonction sort pour trie la liste
showlist(llist); //afficher la version finale de la liste
return 0;
}
