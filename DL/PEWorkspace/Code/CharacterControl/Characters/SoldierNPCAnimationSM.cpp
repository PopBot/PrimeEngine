#include "PrimeEngine/APIAbstraction/APIAbstractionDefines.h"

#include "PrimeEngine/Lua/LuaEnvironment.h"

#include "SoldierNPCAnimationSM.h"
#include "SoldierNPC.h"

using namespace PE::Components;
using namespace PE::Events;

namespace CharacterControl{

namespace Events{
PE_IMPLEMENT_CLASS1(SoldierNPCAnimSM_Event_STOP, Event);

PE_IMPLEMENT_CLASS1(SoldierNPCAnimSM_Event_WALK, Event);

PE_IMPLEMENT_CLASS1(SoldierNPCAnimSM_Event_RUN, Event);

}
namespace Components{

PE_IMPLEMENT_CLASS1(SoldierNPCAnimationSM, DefaultAnimationSM);

SoldierNPCAnimationSM::SoldierNPCAnimationSM(PE::GameContext &context, PE::MemoryArena arena, PE::Handle hMyself) : DefaultAnimationSM(context, arena, hMyself)
{
	m_curId = NONE;
}

void SoldierNPCAnimationSM::addDefaultComponents()
{
	DefaultAnimationSM::addDefaultComponents();
    // PE_REGISTER_EVENT_HANDLER(Events::SoldierNPCAnimSM_Event_STAND_SHOOT, SoldierNPCAnimationSM::do_SoldierNPCAnimSM_Event_STAND_SHOOT);
	PE_REGISTER_EVENT_HANDLER(Events::SoldierNPCAnimSM_Event_STOP, SoldierNPCAnimationSM::do_SoldierNPCAnimSM_Event_STOP);
	PE_REGISTER_EVENT_HANDLER(Events::SoldierNPCAnimSM_Event_WALK, SoldierNPCAnimationSM::do_SoldierNPCAnimSM_Event_WALK);
}

//void SoldierNPCAnimationSM::do_soldierNPCAnimSM_Event_STAND_SHOOT(PE::Events::Event *pEvt)
//{
//
//}

void SoldierNPCAnimationSM::do_SoldierNPCAnimSM_Event_STOP(PE::Events::Event *pEvt)
{
	
	if (m_curId != SoldierNPCAnimationSM::STAND)
	{
		m_curId = SoldierNPCAnimationSM::STAND;
		
		setAnimation(0, SoldierNPCAnimationSM::STAND,
		0, 0, 1, 1,
		PE::LOOPING);
	}
}

void SoldierNPCAnimationSM::do_SoldierNPCAnimSM_Event_WALK(PE::Events::Event *pEvt)
{
	if (m_curId != SoldierNPCAnimationSM::WALK)
	{
		m_curId = SoldierNPCAnimationSM::WALK;
		setAnimation(0, SoldierNPCAnimationSM::WALK,
			0, 0, 1, 1,
			PE::LOOPING);
	}
}


void SoldierNPCAnimationSM::do_SoldierNPCAnimSM_Event_RUN(PE::Events::Event* pEvt)
{
	if (m_curId != SoldierNPCAnimationSM::RUN)
	{
		m_curId = SoldierNPCAnimationSM::RUN;
		setAnimation(0, SoldierNPCAnimationSM::RUN,
			0, 0, 1, 1,
			PE::LOOPING);
	}
}


}}




