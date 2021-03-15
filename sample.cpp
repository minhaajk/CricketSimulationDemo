class CricketSimulator
{
	public :
	std::list<Team> teams;
	std::list<Player> players;
	MatchTemplate match;
	enum actions{wicket,bowl,bat,run,dot};
	
	CricketSimulator(){}
	~CricketSimulator(){}
	CricketSimulator(const CricketSimulator&) = delete;
	void operator=(const CricketSimulator&) = delete;
	
	void TeamFormation()
	{
			// Call Team member function FormTeam() and it will append to the list of teams
	}
	
	void CreateMatch()
	{
		// SetMatch rules called for new match
	}
	void ScoreUpdate()
	{
		action currentAction = match.palyingteam.player.DoAction();
		switch(currentAction)
		{
			case wicket : // 
			
			case bowl : 
			
			// so on
			
		}
	}
	
};



