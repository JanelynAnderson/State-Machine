#pragma once
#include "ForwardDeclarations.h"

template<typename StateBuilderType>
class TransitionBuilder
{
private:
	using StateMachineType = typename StateBuilderType::StateMachineType;
	using StateEnumType = typename StateBuilderType::StateEnumType;
	using gVars = typename StateBuilderType::gVars;
	using lVars = typename StateBuilderType::lVars;
public:
	class Passkey
	{
	private:
		template<typename _A, typename _B>
		friend class StateBuilder;
		Passkey() = default;
	};

	TransitionBuilder(Passkey pk) {}

	TransitionBuilder<StateBuilderType>& SetTargetState(StateEnumType _stateId) { stateId = stateId; }
	template<typename F>
	TransitionBuilder<StateBuilderType>& OnTransition(F&& onTransitionFunc)
	{

	}
private:
	StateEnumType stateId;
};