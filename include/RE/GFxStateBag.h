#pragma once

#include "RE/GFxFileConstants.h"  // RE::GFxFileConstants
#include "RE/GFxState.h"  // RE::GFxState::StateType


namespace RE
{
	class GFxStateBag : public GFxFileConstants
	{
	protected:
		virtual	GFxStateBag*	GetStateBagImpl(void) const;

	public:
		virtual	~GFxStateBag();																							// 00

		// add
		virtual void	SetState(GFxState::StateType state, GFxState* pstate);											// 01
		virtual void*	GetStateAddRef(GFxState::StateType state) const;												// 02
		virtual void	GetStatesAddRef(GFxState** pstateList, const GFxState::StateType* pstates, UInt32 count) const;	// 03
	};
}
