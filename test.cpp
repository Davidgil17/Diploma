#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

string name = "";
string gender = "";
string class1 = "";
string paragraph = "";

bool contains(int x[5], int y){
	for(int i = 0 ; i < 5; i ++){
		if(x[i]==y){
			return true;
		}
		
	}
	return false;
}

int main (){

	srand(time(0));


	cout<<"What is the person's name? ";
	getline(cin, name);
	cout<<"Boy or Girl? ";
	getline(cin, gender);
	cout<< "Name of Class ";
	getline(cin, class1);


	//Phrases
	string phrase[28] =  {name + " was a joy to have in class.",
	(string)((gender == "Boy")? "He " : "She ") + "showed great improvement throughout the week.",
	name + "'s prowess in " + class1 + " has proven to be beyond the scope of this course.",
	name + " was incredibly energetic. " + ((gender == "Boy")? "His " : "Her ") + "energy made teaching a pleasure, and brightened up the class.",
	name + "'s project turned into a very creative masterpiece.",
	(string)((gender == "Boy")? "He " : "She ") + " used several innovative ideas to produce a project the likes of which I have never seen.",
	"Your profeciency in " + class1 + " was demonstrated through the complexity of your final project.",
	name+ " should be proud of all that "+ ((gender == "Boy")? "he " : "she ") + "has accomplished this week.",
	name+ "'s hardwork resulted in a intricate and advanced final project.",
	name+ " grasped the concepts with ease and was always willing to help others.",
	(string)((gender == "Boy")? "He " : "She ") + "stayed on task and balanced inividual achievement with that of the entire class.",
	(string)((gender == "Boy")? "He " : "She ") + "has passion for " + class1,
	(string)((gender == "Boy")? "He " : "She ") + "uses class time constructively and completes assignments in a timely manner.",
	(string)((gender == "Boy")? "He " : "She ") + "actively participates in group dicussions and engages the entire class.",
	(string)((gender == "Boy")? "He " : "She ") + "comes to class each day with a positive attitude.",
	(string)((gender == "Boy")? "He " : "She ") + "is self-motivated, allowing " + (string)((gender == "Boy")? "him " : "her ") + "to create high quality projects.",
	"Through the course of the week " + (string)((gender == "Boy")? "he " : "she ") + "mastered "+ class1 + ".",
	(string)((gender == "Boy")? "He " : "She ") + "made stronger connections with "+(string)((gender == "Boy")? "his " : "her ")+ "peers in and out of the classroom.",
	(string)((gender == "Boy")? "He " : "She ") + "is a fast learner and shows consistant perseverence.",
	name + " has been a caring rolemodel for younger students and is adored by all "+ (string)((gender == "Boy")? "his " : "her ")+ "peers.",
	name + " treats others with respect and displays a high level of maturity.",
	name + " is self-disciplined and avoids most if not all careless errors.",
	"I truly and sincerely hope that "+ name+ " continues with " + class1+ " throughout "+(string)((gender == "Boy")? "his " : "her ")+ "lifetime.",
	(string)((gender == "Boy")? "He " : "She ") + "had a creative and advanced vision for "+ (string)((gender == "Boy")? "his " : "her ") + "project and was able to fulfill " + (string)((gender == "Boy")? "his " : "her ")+ " goals for the final project.",
	name+"'s deep interest in " + class1+ " was reflected through the imaginative projects "+(string)((gender == "Boy")? "he " : "she ")+ "created.",
	(string)((gender == "Boy")? "He " : "She ") + "always asks well thought out questions that are informative to the entire class.",
	name+" is extremely lively and has contributed a high level of cheerfulness to the class.",
	"I am proud to name " + name + " as one of my students this week."};

	int numsUsed[5];


	for(int i = 0 ; i < 5; i++){
		int a = rand()%28;
		if(contains(numsUsed, a) == false){
			numsUsed[i]= a;
			paragraph += phrase[a];
			paragraph += " ";
		}
		else
		{
			i--;
		}
	}

	cout<< paragraph;
	
}