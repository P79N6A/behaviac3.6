﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_AGENT_PROPERTIES_H_
#define _BEHAVIAC_AGENT_PROPERTIES_H_

#include "behaviac_agent_headers.h"
#include "behaviac_agent_member_visitor.h"

namespace behaviac
{
	// ---------------------------------------------------------------------
	// Delegate methods
	// ---------------------------------------------------------------------

	inline void FunctionPointer_behaviac_Agent_LogMessage(char* param0) { behaviac::Agent::LogMessage(param0); }

	inline void Set_FirstAgent_p1(Agent* self, int value) { ((FirstAgent*)self)->_Get_Property_<PROPERTY_TYPE_FirstAgent_p1, int >() = value; };
	inline const void* Get_FirstAgent_p1(Agent* self) { return &((FirstAgent*)self)->_Get_Property_<PROPERTY_TYPE_FirstAgent_p1, int >(); };

	inline void FunctionPointer_FirstAgent_event_task(Agent* self, int param0) { } /* event_task */
	inline void FunctionPointer_FirstAgent_LogMessage(char* param0) { FirstAgent::LogMessage(param0); }
}
#endif // _BEHAVIAC_AGENT_PROPERTIES_H_
