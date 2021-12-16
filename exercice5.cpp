#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> x;  //déclaration du liste
int n;
for(int i=0;i<=100;i++){  // la boucle for permetant de parcourire la liste
x.insert(100-i);    //inserer la liste    
}
for(set<int>::iterator it=x.begin();it!=x.end();it++){ //utilisisation de l'iterator pour afficher tous les éléments de la liste
	cout<<*it<<endl;
	
}
cout<<"veuillez saisir un nombre";
cin>>n;
cout<<x.count(n)<<endl;  //fonction pour indiquer si un éléments existe ou pas

return 0;
}
