#include "ai.h"

////////////////////////////////////////////////////////////////////////////////
/// \brief Конструктор по умолчанию
AI::AI()
{

}

////////////////////////////////////////////////////////////////////////////////
/// \brief Конструктор с параметрами
/// \param IDTEAM - идентификационный номер команды
AI::AI(IDTeam IDTEAM)
{
	setInfo ("AI", 1000, 0, IDTEAM);
}

////////////////////////////////////////////////////////////////////////////////
/// \brief Деструктор
AI::~AI ()
{

}
