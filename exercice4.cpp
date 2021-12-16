#include <iostream>
#include <list>
#include <iterator>
#include<algorithm>
using namespace std;

int main(){
	list<string>L; //déclarer la liste de type string
	//insération des élements dans la liste
	L.push_back("Yousra,Msaouri,20"); 
	L.push_back("Sara,Rouissi,19");
	L.push_back("Chaimae,Friouli,25");
	L.push_back("Nada,temlali,25");
	L.push_back("Lina,Zerouali,25");
L.sort();  //fonction sort faisant le trie de la liste
cout<<"votre liste trie est :"<<endl;
	list <string> :: iterator it;  //l'iterator qui affiche la lise trié avec l'ordre alphabétique
for(it=L.begin();it !=L.end();++it){	
cout<<"\t" <<*it;    //affichage du liste
}
return 0;
}

