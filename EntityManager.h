#pragma once
#include "pch.h"
#include "Player.h"
#include "Ladder.h"
#include "Block.h"
#include "Dk.h"

class EntityManager
{
public:
	EntityManager();
	~EntityManager();

public:
	static std::shared_ptr<Player> m_Player;
	static std::shared_ptr<Dk> m_Dk;
	static std::vector<std::shared_ptr<Ladder>> m_Ladders;
	static std::vector<std::shared_ptr<Block>> m_Blocks;
};

