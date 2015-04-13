#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;
int numsUsed[40];
int num;
string name[8];
string gender[8];
string class1 = "";
string paragraph = "";
int h = 0;

bool contains(int x[40], int y){
	for(int i = 0 ; i < 40; i ++){
		if(x[i]==y){
			return true;
		}
		
	}
	return false;
}

int main (){


	cout << endl;
	cout << "What Is The Name of Class? ";
	getline(cin,class1); 
	cout << endl;
	cout << "How Many People Are In Your Class? ";
	cin >> num;
	cout << "----------------------------------------------------------" << endl;
	

	for(int k = 0; k < num ; k++){
		cout << endl;
		cout << "Person #" << (k+1) << ":" << endl << endl;
		cout << "What is the person's name? ";
		cin >> name[k]; 
		cout << "Boy or Girl? ";
		cin >> gender[k];
			if(gender[k] == "boy"){
				gender[k] = "Boy";
			}
	
		cout << "----------------------------------------------------------" << endl;
	}
	
	cout << "Generated Diplomas For " << class1 << ":" << endl << endl;

 	for(int k = 0 ; k < num ; k++){
		srand(time(0));
		paragraph = "";

	//Phrases
	string phrase[40] =  {
	/* Phrase 1 */ name[k] + " was not only a joy but a privilage to have " + (string)((gender[k] == "Boy")? "him " : "her ")+ " in class.",
	/* Phrase 2 */ (string)((gender[k] == "Boy")? "He " : "She ") + "showed great improvement throughout the week.",
	/* Phrase 3 */ name[k] + "'s prowess in " + class1 + " has proven to be beyond the scope of this course.",
	/* Phrase 4 */ name[k] + " was incredibly energetic. " + ((gender[k] == "Boy")? "His " : "Her ") + "energy made teaching a pleasure, and brightened up the class.",
	/* Phrase 5 */ name[k] + "'s project turned into a very creative masterpiece.",
	/* Phrase 6 */ (string)((gender[k] == "Boy")? "He " : "She ") + "used several innovative ideas to produce a project the likes of which I have never seen.",
	/* Phrase 7 */ "Your profeciency in " + class1 + " was demonstrated through the complexity of your final project.",
	/* Phrase 8 */ name[k] + " should be proud of all that "+ ((gender[k] == "Boy")? "he " : "she ") + "has accomplished this week.",
	/* Phrase 9 */ name[k] + "'s hardwork resulted in a intricate and advanced final project.",
	/* Phrase 10 */ name[k] + " grasped the concepts with ease and was always willing to help others.",
	/* Phrase 11 */ (string)((gender[k] == "Boy")? "He " : "She ") + "stayed on task and balanced inividual achievement with that of the entire class.",
	/* Phrase 12 */ (string)((gender[k] == "Boy")? "He " : "She ") + "has passion for " + class1 + ".",
	/* Phrase 13 */ (string)((gender[k] == "Boy")? "He " : "She ") + "uses class time constructively and completes assignments in a timely manner.",
	/* Phrase 14 */ (string)((gender[k] == "Boy")? "He " : "She ") + "actively participates in group dicussions and engages the entire class.",
	/* Phrase 15 */ (string)((gender[k] == "Boy")? "He " : "She ") + "comes to class each day with a positive attitude.",
	/* Phrase 16 */ (string)((gender[k] == "Boy")? "He " : "She ") + "is self-motivated, allowing " + (string)((gender[k] == "Boy")? "him " : "her ") + "to create high quality projects.",
	/* Phrase 17 */ "Through the course of the week " + (string)((gender[k] == "Boy")? "he " : "she ") + "mastered "+ class1 + ".",
	/* Phrase 18 */ (string)((gender[k] == "Boy")? "He " : "She ") + "made stronger connections with "+(string)((gender[k] == "Boy")? "his " : "her ")+ "peers in and out of the classroom.",
	/* Phrase 19 */ (string)((gender[k] == "Boy")? "He " : "She ") + "is a fast learner and shows consistant perseverence.",
	/* Phrase 20 */ name[k] + " has been a caring rolemodel for younger students and is adored by all "+ (string)((gender[k] == "Boy")? "his " : "her ")+ "peers.",
	/* Phrase 21 */ name[k] + " treats others with respect and displays a high level of maturity.",
	/* Phrase 22 */ name[k] + " is self-disciplined and avoids most if not all careless errors.",
	/* Phrase 23 */ "I truly and sincerely hope that "+ name[k]+ " continues with " + class1+ " throughout "+(string)((gender[k] == "Boy")? "his " : "her ")+ "lifetime.",
	/* Phrase 24 */ (string)((gender[k] == "Boy")? "He " : "She ") + "had a creative and advanced vision for "+ (string)((gender[k] == "Boy")? "his " : "her ") + "project and was able to fulfill " + (string)((gender[k] == "Boy")? "his " : "her ")+ "goals for the final project.",
	/* Phrase 25 */ name[k]+"'s deep interest in " + class1+ " was reflected through the imaginative projects "+(string)((gender[k] == "Boy")? "he " : "she ")+ "created.",
	/* Phrase 26 */ (string)((gender[k] == "Boy")? "He " : "She ") + "always asks well thought out questions that are informative to the entire class.",
	/* Phrase 27 */ name[k] +" is extremely lively and has contributed a high level of cheerfulness to the class.",
	/* Phrase 28 */ name[k] + " faces challenges head on and it determined to do "+ (string)((gender[k] == "Boy")? "his " : "her ")+ "best.",
	/* Phrase 29 */ "During this week " + name[k] +" has been extremely attentive and has demonstrated a deeper level of understanding for " + class1+ ".",
	/* Phrase 30 */ (string)((gender[k] == "Boy")? "His " : "Her ") + "project reflects a higher level of thinking and a passion for " +class1+".",
	/* Phrase 32 */ "I was astonished by how easily "+ name[k] +" grasped each concept; "+ (string)((gender[k] == "Boy")? "he " : "she ") + "is a natural.",
	/* Phrase 33 */ name[k] + "'s project portrayed the high level of integrity that "+(string)((gender[k] == "Boy")? "he " : "she ") +"carried "+(string)((gender[k] == "Boy")? "himself " : "herself ")+ "in and out of the classroom.", 
	/* Phrase 34 */ (string)((gender[k] == "Boy")? "He " : "She ") + "completed "+(string)((gender[k] == "Boy")? "his " : "her ")+"project with a level of dilligence that I have never witnessed.",
	/* Phrase 35 */ name[k] + " was resilient and resourceful in the face of challenges.",
	/* Phrase 36 */ (string)((gender[k] == "Boy")? "He " : "She ") + " was orderly and patient; creating an extremely well organized final project.",
	/* Phrase 37 */ name[k] + " was dedicated to do "+ (string)((gender[k] == "Boy")? "his " : "her ") + "best; resulting in an amazing final project.",
	/* Phrase 38 */ (string)((gender[k] == "Boy")? "he " : "she ")+" was extremely patient and always willing to lend a helping hand to "+(string)((gender[k] == "Boy")? "His " : "her ")+"fellow peers.",
	/* Phrase 39 */ name[k] + " is both kind and curtious in and out of the classroom; making "+(string)((gender[k] == "Boy")? "His " : "her ")+"a pleasure to work with.",
	/* Phrase 39 */ name[k] + " is good humored and is always making others laugh even during challenges.",
	/* Phrase 40 */ (string)((gender[k] == "Boy")? "He " : "She ")+ "is extremely intellegent and is always sharing "+(string)((gender[k] == "Boy")? "his " : "her ") + "knowledge with the rest of the class."};

	
		cout<<"Diploma #" << k+1 << ":" << " (" << name[k] << ")" << endl << endl;

		for(int i = 0 ; i < 5; i++){
			int a = rand()%40;
			if(contains(numsUsed, a) == false){
					numsUsed[h]= a;
					paragraph += phrase[a];
					paragraph += " ";
					h++;
			}
			else
			{
				i--;
			}
	}

	cout << paragraph << endl << endl << "----------------------------------------------------------" << endl;

}
	
}