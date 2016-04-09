/*********************************************
/ Program by Alex White
/ Date Created: January 20, 2016
/ 
/ This is the second part of the Socialite
/ class, where all of the declared attributes
/ are defined.
/
/ This part of the program also falls under
/ creative commons. Honestly, I am not too
/ much of a fan of copyright if something is
/ free.
/
/ 2/3/16 - Revisions include the addition of
/ The cliques group, which required me to
/ include the vector class in my header file.
/********************************************/

	#include <iostream>
	#include <string>
	#include <sstream>
	#include <fstream>
	#include <vector>
	
	#include "Socialite.h"
	using namespace std;
	
	//Constructor
	Socialite::Socialite() { }
	
	//Desctructor
	Socialite::~Socialite() { }
	
	//Inspector
	string Socialite::getFirst() const{
		return first_;
	}
	string Socialite::getLast() const{
		return last_;
	}
	string Socialite::getID() const{
		return ID_;
	}
	string Socialite::getPic() const{
		return pic_;
	}
	string Socialite::getSite() const{
		return site_;
	}
	string Socialite::getDesc() const{
		return desc_;
	}
	void Socialite::getClique() const{
		//This actually goes unused due to how I implement outputting the vector
	}	
	//Mutator
	void Socialite::setFirst(string first){
		first_ = first;
	}
	void Socialite::setLast(string last){
		last_ = last;
	}
	void Socialite::setID(string ID){
		ID_ = ID;
	}
	void Socialite::setPic(string pic){
		pic_ = pic;
	}
	void Socialite::setSite(string site){
		site_ = site;
	}
	void Socialite::setDesc(string desc){
		desc_ = desc;
	}
	void Socialite::setClique(vector<string> clique){
		cliques_.resize(int(clique.size()));
		for(int i = 0; i <= int(clique.size()) - 1; i++){
			cliques_[i] = clique[i];
		}
	}
	//Facilitators
	void Socialite::output(){
		ofstream out;
		out.open("output.txt");
		out << "Socialite: " << first_ << " " << last_<< endl;;
		out << "Userid: " << ID_ << endl;
		out << "Picture: " << pic_ << endl;
		out << "Shared Link: " << site_ << endl;
		out << "Description: " << desc_ << endl;
		out << "Cliques:" << endl;
		for(int x = 0; x <= int(cliques_.size()) - 1; x++){
			if(cliques_[x] != ""){
				out << cliques_[x] << endl; //Vector outputs its contents provided there is valid information in said vector
			}
		}
		out << "++++" << endl;
		out.close();
	}
	void Socialite::outputHTML(){
		//As it turns out, HTML looks like a big sloppy mess in C++, but it works.
		ofstream out;
		out.open("output.html");
		out <<  "<html><head><title>" << first_ << "'s Socialite Page" << "</title></head><body>" << endl;
		out << "<div style=\"text-align: right;\"><IMG SRC=\"" << pic_ << "\" ALT=\"profile picture\"></IMG></div>" << endl;
		out << "<h1>" << ID_ << "</h1><br>" << endl;
		out << "<h2>" << first_  << " " << last_ << "</H2><br>" << endl;
		out << "<p>" << first_ <<" wants to share <a href=\"" << site_ << "\"target=_blank>" << endl;
		out << desc_ << "</a> with you: <br/> " << site_ << "</p>" << endl;
		out << "<hr/>" << endl;
		out << "<p><i>Cliques:</i></p><br>" << endl;
		out << "<ul>" << endl;
		for (int y = 0; y <= int(cliques_.size()) - 1; y++){
			if(cliques_[y] != ""){
				out << "<li>" << cliques_[y] << "</li><br>";
			}
		}
		out << "</ul>";
		out << "</body></html>" << endl;
		out.close();
	}
	
