#include<iostream>
#include<string>
using namespace std;

class pet{
    public:
    	int mobile;
    	string name,address,breed,type,birthday;
};

int main()
{ 
     pet pet;
     pet.mobile=032215;
     pet.birthday="May 25 2019";
     pet.type="Dog";
     pet.name="Samuel";
     pet.breed="Askal";
     pet.address="Navarro., Caloocan City";
 
  cout<<"Pet ID"<<endl;
 cout<<" Pet Name: "<<pet.name<<endl;
 cout<<" Pet Date Birth: "<<pet.birthday<<endl;
 cout<<" Pet Type: "<<pet.type<<endl;
 cout<<" Pet Breed: "<<pet.breed<<endl;
 cout<<" Pet Mobile No: "<<pet.mobile<<endl;
 cout<<" Pet Address: "<<pet.address<<endl;
 

     pet.mobile=063101543;
     pet.birthday="March 26 2021";
     pet.type="Cat";
     pet.name="Warren";
     pet.breed="Persian";
     pet.address="Princetown Subd., Bagumbong.. Caloocan City";
 
 cout<<"Pet ID"<<endl;
 cout<<" Pet Name: "<<pet.name<<endl;
 cout<<" Pet Date Birth: "<<pet.birthday<<endl;
 cout<<" Pet Type: "<<pet.type<<endl;
 cout<<" Pet Breed: "<<pet.breed<<endl;
 cout<<" Pet Mobile No: "<<pet.mobile<<endl;
 cout<<" Pet Address: "<<pet.address<<endl;
 
 
 pet.mobile=8789911;
     pet.birthday="June 14 2022";
     pet.type="Dog";
     pet.name="Kobe";
     pet.breed="Golden Retriever";
     pet.address="Sto. Nino., Holy Spirit";
 
 cout<<"Pet ID"<<endl;
 cout<<" Pet Name: "<<pet.name<<endl;
 cout<<" Pet Date Birth: "<<pet.birthday<<endl;
 cout<<" Pet Type: "<<pet.type<<endl;
 cout<<" Pet Breed: "<<pet.breed<<endl;
 cout<<" Pet Mobile No: "<<pet.mobile<<endl;
 cout<<" Pet Address: "<<pet.address<<endl;
 
 
   
 
}
