#pragma once
#include "TransitionBuilder.h"

class StateBuilderRoot {};

template<typename _StateMachineType, typename _lVars>
class StateBuilder : public StateBuilderRoot
{
private:
	template<typename _A, typename _B>
	friend class TransitionBuilder;

	using StateMachineType = _StateMachineType;
	using StateEnumType = typename StateMachineType::StateEnumType;
	using gVars = typename StateMachineType::gVars;
	using lVars = _lVars;
public:
	class Passkey
	{
	private:
		template<typename _A, typename _B>
		friend class StateMachine;
		Passkey() = default;
	};

	StateBuilder(Passkey pk, StateMachineType stateId)
	{

	}
private:

};