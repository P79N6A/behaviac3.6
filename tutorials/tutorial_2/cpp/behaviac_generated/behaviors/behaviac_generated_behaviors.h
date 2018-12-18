﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_GENERATED_BEHAVIORS_H_
#define _BEHAVIAC_GENERATED_BEHAVIORS_H_

#include "../types/behaviac_types.h"

namespace behaviac
{
	// Source file: LoopBT

	class DecoratorLoop_bt_LoopBT_node1 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_LoopBT_node1, DecoratorLoop);
		DecoratorLoop_bt_LoopBT_node1()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 3;
		}
	};

	class Action_bt_LoopBT_node0 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_LoopBT_node0, Action);
		Action_bt_LoopBT_node0()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((FirstAgent*)pAgent)->SayHello();
			return BT_SUCCESS;
		}
	};

	class bt_LoopBT
	{
	public:
		static bool Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("LoopBT");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("FirstAgent");
#endif
			// children
			{
				DecoratorLoop_bt_LoopBT_node1* node1 = BEHAVIAC_NEW DecoratorLoop_bt_LoopBT_node1;
				node1->SetClassNameString("DecoratorLoop");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("FirstAgent");
#endif
				pBT->AddChild(node1);
				{
					Action_bt_LoopBT_node0* node0 = BEHAVIAC_NEW Action_bt_LoopBT_node0;
					node0->SetClassNameString("Action");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("FirstAgent");
#endif
					node1->AddChild(node0);
					node1->SetHasEvents(node1->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}
	};

	// Source file: SelectBT

	class Assignment_bt_SelectBT_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_SelectBT_node4, Assignment);
		Assignment_bt_SelectBT_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 6;
			((FirstAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_FirstAgent_p1, int >() = opr;
			return result;
		}
	};

	class Condition_bt_SelectBT_node2 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_SelectBT_node2, Condition);
		Condition_bt_SelectBT_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((FirstAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_FirstAgent_p1, int >();
			int opr = 8;
			bool op = PrivateDetails::Greater(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_SelectBT_node0 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_SelectBT_node0, Action);
		Action_bt_SelectBT_node0()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((FirstAgent*)pAgent)->SayHello();
			return BT_SUCCESS;
		}
	};

	class bt_SelectBT
	{
	public:
		static bool Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("SelectBT");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("FirstAgent");
#endif
			// children
			{
				Sequence* node3 = BEHAVIAC_NEW Sequence;
				node3->SetClassNameString("Sequence");
				node3->SetId(3);
#if !BEHAVIAC_RELEASE
				node3->SetAgentType("FirstAgent");
#endif
				pBT->AddChild(node3);
				{
					Assignment_bt_SelectBT_node4* node4 = BEHAVIAC_NEW Assignment_bt_SelectBT_node4;
					node4->SetClassNameString("Assignment");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("FirstAgent");
#endif
					node3->AddChild(node4);
					node3->SetHasEvents(node3->HasEvents() | node4->HasEvents());
				}
				{
					Selector* node1 = BEHAVIAC_NEW Selector;
					node1->SetClassNameString("Selector");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("FirstAgent");
#endif
					node3->AddChild(node1);
					{
						Condition_bt_SelectBT_node2* node2 = BEHAVIAC_NEW Condition_bt_SelectBT_node2;
						node2->SetClassNameString("Condition");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("FirstAgent");
#endif
						node1->AddChild(node2);
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					{
						Action_bt_SelectBT_node0* node0 = BEHAVIAC_NEW Action_bt_SelectBT_node0;
						node0->SetClassNameString("Action");
						node0->SetId(0);
#if !BEHAVIAC_RELEASE
						node0->SetAgentType("FirstAgent");
#endif
						node1->AddChild(node0);
						node1->SetHasEvents(node1->HasEvents() | node0->HasEvents());
					}
					node3->SetHasEvents(node3->HasEvents() | node1->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node3->HasEvents());
			}
			return true;
		}
	};

	// Source file: SequenceBT

	class Assignment_bt_SequenceBT_node3 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_SequenceBT_node3, Assignment);
		Assignment_bt_SequenceBT_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 6;
			((FirstAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_FirstAgent_p1, int >() = opr;
			return result;
		}
	};

	class Condition_bt_SequenceBT_node2 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_SequenceBT_node2, Condition);
		Condition_bt_SequenceBT_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((FirstAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_FirstAgent_p1, int >();
			int opr = 8;
			bool op = PrivateDetails::Greater(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_SequenceBT_node0 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_SequenceBT_node0, Action);
		Action_bt_SequenceBT_node0()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((FirstAgent*)pAgent)->SayHello();
			return BT_SUCCESS;
		}
	};

	class bt_SequenceBT
	{
	public:
		static bool Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("SequenceBT");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("FirstAgent");
#endif
			// children
			{
				Sequence* node1 = BEHAVIAC_NEW Sequence;
				node1->SetClassNameString("Sequence");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("FirstAgent");
#endif
				pBT->AddChild(node1);
				{
					Assignment_bt_SequenceBT_node3* node3 = BEHAVIAC_NEW Assignment_bt_SequenceBT_node3;
					node3->SetClassNameString("Assignment");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("FirstAgent");
#endif
					node1->AddChild(node3);
					node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
				}
				{
					Condition_bt_SequenceBT_node2* node2 = BEHAVIAC_NEW Condition_bt_SequenceBT_node2;
					node2->SetClassNameString("Condition");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("FirstAgent");
#endif
					node1->AddChild(node2);
					node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_SequenceBT_node0* node0 = BEHAVIAC_NEW Action_bt_SequenceBT_node0;
					node0->SetClassNameString("Action");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("FirstAgent");
#endif
					node1->AddChild(node0);
					node1->SetHasEvents(node1->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}
	};

}
#endif // _BEHAVIAC_GENERATED_BEHAVIORS_H_
