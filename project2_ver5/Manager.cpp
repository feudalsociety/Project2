#include "Manager.h"
Manager::Manager(int bpOrder) {

}

Manager::~Manager() {
}

void Manager::run(const char* command_txt) {

}

bool Manager::LOAD(char* loadfile) {

	return true;//file load complete
}
bool Manager::UPDATE(char* updatefile) {
	
	return true;//file update complete
}

bool Manager::SEARCH_GAME(int id1) {

	return true;//game search complete
}

bool Manager::SEARCH_CHARACTER(char* Charactername1, char* Charactername2) {

	return true;//character search complete
}

bool Manager::PRINT_GAME() {

	return true;//print Game in gameid ascending order(id	winner	duration	teama	teamb)
}

bool Manager::PRINT_CHARACTER() {
	return true;//charater print complete
}

bool Manager::PRINT_PICK() {
	return true;//print complete(no print return false)
}

bool Manager::PRINT_WINRATIO() {
	return true;//print complete(no print return false)
}
void Manager::printErrorCode(int n) {
	ofstream fout;
	fout.open("log.txt", ofstream::app);
	fout << "----------------------------------------------------------------------------------------------------------------------" <<endl;
	fout << "                                                        ERROR                                                         " <<endl;
	fout << "----------------------------------------------------------------------------------------------------------------------" <<endl;
	fout << n << endl;
	fout.close();
}

