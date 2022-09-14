#pragma once

#include <vector>
#include <string>
#include "LevelGUI.h"



class LevelGUI;


class Mediator
{
public:

	
	void Add(LevelGUI* pL) 
	{
		v.push_back(pL);
	}

	void Notify(std::string message) 
	{
		
		if (!v.empty())
		{

			for (LevelGUI* it : v)
			{
				
				it->BeNotified(message);
			}
		}
	}
private:

	std::vector<LevelGUI*> v;
	

};

