// Guru.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// made by zac reid (not brandon amariei)
#include <iostream>
#include <list>
#include <random>
#include <sstream>
#include <string>
using namespace std;

struct token {
	list<string>response;
	string keyword;
	token(string Keyword, list<string> Response) {
		keyword = Keyword;
		response = Response;
	};
};

list<struct token> KEYWORD_RESPONSE({
	token("film", {"watch Nightcrawler", "watch Casino Royale", "watch Interstellar", "watch Rush Hour"}), 
	token("show",{"Game of Thrones", "Breaking Bad", "Narcos","Riverdale"}),
	token("tv", {"Game of Thrones", "Breaking Bad", "Narcos","Riverdale"}), 
	token("movies",{"Game of Thrones", "Breaking Bad", "Narcos","Riverdale"}),
	token("football",{"go to the park ","practice dribbling","practice shooting","practice hat-ricks","practice diving"}),
	token("food",{"eat pizza","eat sufle","eat rice","eat egg"}),
	token("help",{"No"}),
	token("cooking",{"cook pizza","cook sufle","cook rice","cook egg"}),
	token("painting",{"paint pizza","paint sufle","paint rice","paint egg"}),
	token("tik tok",{"really? ok watch tik tok"}),
	token("sports",{"play basketball","play sports","play football","play ping pong"}),
	token("reading",{"read foundation","u big nerd","read diary of a whimpy kid","read c++ for dummies","WikiHow:Plagiarism","read the Bible"}),
	token("basketball",{"practice dunks","practice free throws","break ankles","refresh your creps"}),
	token("gaming",{"play counter strike","play witcher 3","don't play League of Legends,please i beg you","play chess"}),
	token("polo",{"for real? just swim lol"}),
	token("swim",{"just swim, what else can you do?"}), 
	token("memes",{"Siuuuuuuuuu","DUUUUUUUUUUM","Oh you amug us sussy bakka <3"}),
	token("interior",{"eat bed","open cupoboard","design interiorly"}),
	token("swimming",{"just swim, what else can you do?"}),
	token("tennis",{"hit ball","practice shooting? I dont know tennis" }),
	token("baking",{"bake a cake","bake a muffin"}),
	token("brewing",{"hello James"}),
	token("drinking",{"go pub","go bar"}),
	token("pub",{"go pub"}),
	token("bar",{"go bar"}),
	token("board",{"play monopoly","play game of life","play backgammon"}),
	token("gym",{"bench 120 kg","squat 200kg","do cardio"}),
	token("ski",{"listen to ski mask the slumpgod","wait for snow","go to a country that snows"}),
	token("drawing",{"draw pizza","draw sufle","draw rice","draw egg"}),
	token("write",{"write a novel","write a poem"}),
	token("youtube",{"watch what you normally watch"}),
	token("coding",{"look up code","open visual studio or codeblocks and start coding"}),
	token("boxing",{"hit the bag over and over again","spar the person to your right"}),
	token("ping",{"hit the ping pong","get a partner","play against the wall"}),
	token("table tennis",{"hit the ping pong","get a partner","play against the wall"}),
	token("volleyball",{"practice serving","practice hitting a volley"}),
	
	
});
//token("", { "" }),
bool loop() {
	string input;
		
	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(), tolower);
	for (list<token>::iterator s = KEYWORD_RESPONSE.begin(); s != KEYWORD_RESPONSE.end(); ++s) {
		if (input.find((*s).keyword) != string::npos) {
			list<string>::iterator it = (*s).response.begin();
			if ((*s).response.size() > 1)
			{
				advance(it, rand() % (*s).response.size());
			}
			cout << *it << endl;
			return true;
		}
	}
	return false;
}

int main() {
	cout << "Welcome to ''bad'' Guru, please type in your interests. I will give you advice based on your interests/hobbies" << endl;

	while(1) {
		if (!loop()) {
			cout << ("type something else") << endl;
		}
	}

	return 0;
}