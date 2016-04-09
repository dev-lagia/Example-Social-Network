/******************************************
/ Program by: Alex White
/ Date Created: January 20, 2016
/
/ The purpose of this class is to
/ declare the different ways a
/ Socialite is identified
/
/ This program falls under creative
/ commons, and frankly, I don't care if
/ it's copied or not. It's free after all.
/
/ 2/3/16 - Clique method added. Requires
/ addition of vector class to make it work.
/******************************************/

	#ifndef _SOCIALITE_H_
	#define _SOCIALITE_H_
	
	#include <string>
	#include <vector>
	using namespace std;

//---------------------------------------------------------------
	class Socialite{
		public:
			//Constructors
			Socialite();
			
			//Destructors
			~Socialite();
			
			//Inspectors
			string getFirst() const;
			string getLast() const;
			string getID() const;
			string getPic() const;
			string getSite() const;
			string getDesc() const;
			void getClique() const;
			
			//Mutators
			void setFirst(string first);
			void setLast(string last);
			void setID(string ID);
			void setPic(string pic);
			void setSite(string site);
			void setDesc(string desc);
			void setClique(vector<string> clique);
			
			//Facilitators
			void output();
			void outputHTML();
			
		private:
			string first_;
			string last_;
			string ID_;
			string pic_;
			string site_;
			string desc_;
			vector<string> cliques_;
	};
	
	#endif
