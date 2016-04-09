/********************************************
/ Program by Alex White
/ Date Created: January 20, 2016
/
/ This is the part of the Socialite program
/ where class and its definitions are 
/ implemented
/
/ This is 'protected' under creative commons
/ copy if you want. I won't even use this
/ again, apart from referencing it at this
/ point
/*******************************************/

	#include <iostream>
	#include <fstream>
	#include <vector>
	#include <string>
	#include "Socialite.h"
	
	using namespace std;
	
	int main(void){
		ofstream out; //This'll be important for exporting to HTML later.
		Socialite me, entertainer, pol, cartoon, papyrus;
		string clique;
		vector<string> cliques(10);
		
		entertainer.setFirst("Stuart");
		entertainer.setLast("Ashen"); //Bonus points if you know who this is.
		entertainer.setID("Ashens");
		entertainer.setPic("http://homepage.ntlworld.com/ashen1/ashens/Figure04.png");
		entertainer.setSite("http://www.ashens.com");
		entertainer.setDesc("Hello!"); //Again, if you know who this is, I will be very happy.
		cliques[0] = "Glitterati";
		cliques[1] = "Monster Hunter Fan Club";
		entertainer.setClique(cliques);
		
		pol.setFirst("Bernie");
		pol.setLast("Sanders"); //I wonder who else used this one
		pol.setID("BernieSanders"); //Don't dock me for unoriginality. That's his twitter username.
		pol.setPic("https://pbs.twimg.com/profile_images/678657703787401216/kSea263e.png");
		pol.setSite("https://twitter.com/berniesanders?lang=en");
		pol.setDesc("I believe America is ready for a new path to the future. Join our campaign for president at http://berniesanders.com ."); //Again, ripped from his twitter. It's for the best I don't try to type in how I see him. I'd set something wrong.
		cliques[0] = "BeTheChange"; //For this one, that's quite valid
		cliques[1] = "Monster Hunter Fan Club";
		pol.setClique(cliques);
		
		cartoon.setFirst("Spongebob");
		cartoon.setLast("Squarepants"); //ehh, why not.
		cartoon.setID("SpongeBoy99"); //Kind of referential. Maybe. Idk if you know how I figured this username.
		cartoon.setPic("https://pbs.twimg.com/profile_images/420241225283674113/xoCDeFzV_400x400.jpeg");
		cartoon.setSite("http://www.nick.com/spongebob-squarepants/"); //you can click this if you want. I won't stop you.
		cartoon.setDesc("IIIIIIIII'MMMMMM READY!");
		cliques[0] = "DrawnAndQuartered";
		cliques[1] = "Monster Hunter Fan Club";
		cartoon.setClique(cliques);
		
		papyrus.setFirst("Papyrus"); //I apologize, but I had to. unless you don't know what Undertale is.
		papyrus.setLast("none");
		papyrus.setID("COOLSKELETON95");
		papyrus.setPic("http://static.tumblr.com/5ecb764c6b7940eb4a6813d80ac6263c/lfzlwme/a5Znyhzsq/tumblr_static_acf778cwteok000so0sw48sos.png");
		papyrus.setSite("http://undertale.wikia.com/wiki/Papyrus");
		papyrus.setDesc("HELLO HUMANS, IT IS I, THE GREAT PAPYRUS! NYEH HEH HEH!"); //I'm sorry. I had to, and he talks in the font Papyrus by the way, but to make it easy on me, all caps will have to do.
		cliques[0] = "Monster Hunter Fan Club";
		papyrus.setClique(cliques);
		
		//and now for me.
		//this is done with a more personal cmd based questionnare (of sorts)
		string description, firstName, lastName, ID, img, web; //Compiler was throwing errors in an earlier build, this is how I'm remedying the solution.
		cout << "What is your first name?" << endl;
		getline(cin, firstName);
		me.setFirst(firstName);
		cout << "What is your last name?" << endl;
		getline(cin, lastName);
		me.setLast(lastName);
		cout << "What will your username be?" << endl;
		getline(cin, ID);
		me.setID(ID);
		cout << "What is your profile picture's URL? (feel free to copy and paste it in)" << endl;
		getline(cin, img);
		me.setPic(img);
		cout << "What is your website's URL?" << endl;
		getline(cin, web);
		me.setSite(web);
		cout << "What is your description? (make it short)" << endl;
		getline(cin, description);
		me.setDesc(description); //Becaue cin works right up until spaces are used in a line.
		cout << "How about any cliques? (Enter up to 10 then type end)" << endl;
		getline(cin,clique);
		int x = 0;
		while(clique != "end"){
			cliques[x] = clique;
			x++;
			getline(cin,clique); //This was used to input as many cliques as I saw fit in my input section (note, due to my lack of knowledge, I had to set the vector's size to a static number, which I made 10. The extra slots do not interfere with output.
		}
		me.setClique(cliques);
		
		//entertainer.output();
		//pol.output();
		//cartoon.output();
		//papyrus.output();
		me.output();
		
		me.outputHTML();
		return 0;
	}
