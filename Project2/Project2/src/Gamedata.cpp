#include "Gamedata.h"

ostream& operator<<(ostream& sm, Gamedata& data)
{
	sm << data.getGameid() << '\t'
	   << data.getDuration() << '\t'
	   << data.getWinner() << '\t';
	
	for (int i = 0; i < 5; i++) sm << data.getTeamA()[i] << '\t';
	for (int i = 0; i < 5; i++)	sm << data.getTeamB()[i] << '\t';

	return sm;
}
istream& operator>>(istream& sm, Gamedata& data)
{
	int gid, dtime, win;
	char* team_a_name[5];
	char* team_b_name[5];

	for (int i = 0; i < 5; i++)
	{
		// 20 : name_length
		// allocates heap memory for team name
		team_a_name[i] = new char[20]; 
		team_b_name[i] = new char[20];
	}
	
	sm >> gid
	   >> dtime
	   >> win;

	for (int i = 0; i < 5; i++) sm >> team_a_name[i];
	for (int i = 0; i < 5; i++)	sm >> team_b_name[i];

	data.setGameid(gid);
	data.setDuration(dtime);
	data.setWinner(win);

	for (int i = 0; i < 5; i++) data.setTeamA(team_a_name[i], i);
	for (int i = 0; i < 5; i++) data.setTeamB(team_b_name[i], i);

	for (int i = 0; i < 5; i++)
	{
		// deallocates memory of heap
		delete[] team_a_name[i];
		delete[] team_b_name[i];
	}

	return sm;
}

