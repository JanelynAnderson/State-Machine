#pragma once
#include "StateBuilder.h"
#include <unordered_map>
#include <vector>
#include <deque>
#include <memory>

template<typename _StateEnumType, typename _gVars>
class StateMachine
{
private:
	template<typename _A, typename _B>
	friend class StateBuilder;

	template<typename _A, typename _B>
	friend class TransitionBuilder;

	using StateEnumType = _StateEnumType;
	using gVars = _gVars;
public:
	StateMachine()
	{

	}

private:
	std::deque < std::shared_ptr<Root> > states;
	std::unordered_map< StateEnumType , size_t> stateMap;
};