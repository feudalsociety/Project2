#include "Manager.h"
Manager::Manager(int bpOrder) {

}

Manager::~Manager() {
}

void Manager::run(const char* command_txt) {
	ifstream c(command_txt); // command_list.txt
	char cmd[20];
	c >> cmd;
	if (strcmp(cmd, "LOAD") == 0)
	{
		char filename[20]; // file name buffer, game_load.txt
		ifstream l(filename);
		string line;
		while (getline(l, line))
		{
			Gamedata * data = new Gamedata;

		}
		l.close();
	}
	else if (strcmp(cmd, "PRINT_PICK") == 0)
	{

	}
	else if (strcmp(cmd, "PRINT_WINRATIO") == 0)
	{

	}
	else if (strcmp(cmd, "PRINT_WINRATIO") == 0)
	{

	}
	else if (strcmp(cmd, "SEARCH_CHARACTER") == 0)
	{
		char start[20]; // Anivia
		char end[20];  // Trundle
	}
	else if (strcmp(cmd, "PRINT_CHARACTER") == 0)
	{

	}
	else if (strcmp(cmd, "PRINT_GAME") == 0)
	{

	}
	else if (strcmp(cmd, "UPDATE") == 0)
	{
		char filename[20]; // game_update.txt
		ifstream u(filename);

		u.close();
	}
	c.close();
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

