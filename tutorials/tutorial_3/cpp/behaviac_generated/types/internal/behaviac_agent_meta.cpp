﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#include "behaviac/common/meta.h"
#include "behaviac/common/member.h"
#include "behaviac_agent_meta.h"

namespace behaviac
{
	class CMethod_behaviac_Agent_VectorAdd : public CAgentMethodVoidBase
	{
		IInstanceMember* _param0;
		IInstanceMember* _param1;

	public: 
		CMethod_behaviac_Agent_VectorAdd() : _param0(0) , _param1(0) 
		{
		}

		CMethod_behaviac_Agent_VectorAdd(CMethod_behaviac_Agent_VectorAdd &rhs) : CAgentMethodVoidBase(rhs) , _param0(0) , _param1(0) 
		{
		}

		~CMethod_behaviac_Agent_VectorAdd()
		{
			BEHAVIAC_DELETE _param0;
			BEHAVIAC_DELETE _param1;
		}

		virtual IInstanceMember* clone()
		{
			return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd(*this);
		}

		virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
		{
			BEHAVIAC_ASSERT(paramStrs.size() == 2);

			behaviac::StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
			_param0 = AgentMeta::TParseProperty<IList >(paramStrs[0].c_str());
			_param1 = AgentMeta::TParseProperty<System::Object >(paramStrs[1].c_str());
		}

		virtual void run(Agent* self)
		{
			BEHAVIAC_ASSERT(_param0 != NULL);
			BEHAVIAC_ASSERT(_param1 != NULL);

			IList& pValue_param0 = *(IList*)_param0->GetValue(self, behaviac::Meta::IsVector<IList >::Result, behaviac::GetClassTypeNumberId<IList >());
			System::Object& pValue_param1 = *(System::Object*)_param1->GetValue(self, behaviac::Meta::IsVector<System::Object >::Result, behaviac::GetClassTypeNumberId<System::Object >());
			behaviac::Agent::VectorAdd(pValue_param0, pValue_param1);
		}
	};

	class CMethod_behaviac_Agent_VectorClear : public CAgentMethodVoidBase
	{
		IInstanceMember* _param0;

	public: 
		CMethod_behaviac_Agent_VectorClear() : _param0(0) 
		{
		}

		CMethod_behaviac_Agent_VectorClear(CMethod_behaviac_Agent_VectorClear &rhs) : CAgentMethodVoidBase(rhs) , _param0(0) 
		{
		}

		~CMethod_behaviac_Agent_VectorClear()
		{
			BEHAVIAC_DELETE _param0;
		}

		virtual IInstanceMember* clone()
		{
			return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear(*this);
		}

		virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
		{
			BEHAVIAC_ASSERT(paramStrs.size() == 1);

			behaviac::StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
			_param0 = AgentMeta::TParseProperty<IList >(paramStrs[0].c_str());
		}

		virtual void run(Agent* self)
		{
			BEHAVIAC_ASSERT(_param0 != NULL);

			IList& pValue_param0 = *(IList*)_param0->GetValue(self, behaviac::Meta::IsVector<IList >::Result, behaviac::GetClassTypeNumberId<IList >());
			behaviac::Agent::VectorClear(pValue_param0);
		}
	};

	class CMethod_behaviac_Agent_VectorContains : public CAgentMethodBase<bool>
	{
		IInstanceMember* _param0;
		IInstanceMember* _param1;

	public: 
		CMethod_behaviac_Agent_VectorContains() : _param0(0) , _param1(0) 
		{
		}

		CMethod_behaviac_Agent_VectorContains(CMethod_behaviac_Agent_VectorContains &rhs) : CAgentMethodBase<bool>(rhs) , _param0(0) , _param1(0) 
		{
		}

		~CMethod_behaviac_Agent_VectorContains()
		{
			BEHAVIAC_DELETE _param0;
			BEHAVIAC_DELETE _param1;
		}

		virtual IInstanceMember* clone()
		{
			return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains(*this);
		}

		virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
		{
			BEHAVIAC_ASSERT(paramStrs.size() == 2);

			behaviac::StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
			_param0 = AgentMeta::TParseProperty<IList >(paramStrs[0].c_str());
			_param1 = AgentMeta::TParseProperty<System::Object >(paramStrs[1].c_str());
		}

		virtual void run(Agent* self)
		{
			BEHAVIAC_ASSERT(_param0 != NULL);
			BEHAVIAC_ASSERT(_param1 != NULL);

			IList& pValue_param0 = *(IList*)_param0->GetValue(self, behaviac::Meta::IsVector<IList >::Result, behaviac::GetClassTypeNumberId<IList >());
			System::Object& pValue_param1 = *(System::Object*)_param1->GetValue(self, behaviac::Meta::IsVector<System::Object >::Result, behaviac::GetClassTypeNumberId<System::Object >());
			_returnValue->value = behaviac::Agent::VectorContains(pValue_param0, pValue_param1);
		}
	};

	class CMethod_behaviac_Agent_VectorLength : public CAgentMethodBase<int>
	{
		IInstanceMember* _param0;

	public: 
		CMethod_behaviac_Agent_VectorLength() : _param0(0) 
		{
		}

		CMethod_behaviac_Agent_VectorLength(CMethod_behaviac_Agent_VectorLength &rhs) : CAgentMethodBase<int>(rhs) , _param0(0) 
		{
		}

		~CMethod_behaviac_Agent_VectorLength()
		{
			BEHAVIAC_DELETE _param0;
		}

		virtual IInstanceMember* clone()
		{
			return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength(*this);
		}

		virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
		{
			BEHAVIAC_ASSERT(paramStrs.size() == 1);

			behaviac::StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
			_param0 = AgentMeta::TParseProperty<IList >(paramStrs[0].c_str());
		}

		virtual void run(Agent* self)
		{
			BEHAVIAC_ASSERT(_param0 != NULL);

			IList& pValue_param0 = *(IList*)_param0->GetValue(self, behaviac::Meta::IsVector<IList >::Result, behaviac::GetClassTypeNumberId<IList >());
			_returnValue->value = behaviac::Agent::VectorLength(pValue_param0);
		}
	};

	class CMethod_behaviac_Agent_VectorRemove : public CAgentMethodVoidBase
	{
		IInstanceMember* _param0;
		IInstanceMember* _param1;

	public: 
		CMethod_behaviac_Agent_VectorRemove() : _param0(0) , _param1(0) 
		{
		}

		CMethod_behaviac_Agent_VectorRemove(CMethod_behaviac_Agent_VectorRemove &rhs) : CAgentMethodVoidBase(rhs) , _param0(0) , _param1(0) 
		{
		}

		~CMethod_behaviac_Agent_VectorRemove()
		{
			BEHAVIAC_DELETE _param0;
			BEHAVIAC_DELETE _param1;
		}

		virtual IInstanceMember* clone()
		{
			return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove(*this);
		}

		virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
		{
			BEHAVIAC_ASSERT(paramStrs.size() == 2);

			behaviac::StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
			_param0 = AgentMeta::TParseProperty<IList >(paramStrs[0].c_str());
			_param1 = AgentMeta::TParseProperty<System::Object >(paramStrs[1].c_str());
		}

		virtual void run(Agent* self)
		{
			BEHAVIAC_ASSERT(_param0 != NULL);
			BEHAVIAC_ASSERT(_param1 != NULL);

			IList& pValue_param0 = *(IList*)_param0->GetValue(self, behaviac::Meta::IsVector<IList >::Result, behaviac::GetClassTypeNumberId<IList >());
			System::Object& pValue_param1 = *(System::Object*)_param1->GetValue(self, behaviac::Meta::IsVector<System::Object >::Result, behaviac::GetClassTypeNumberId<System::Object >());
			behaviac::Agent::VectorRemove(pValue_param0, pValue_param1);
		}
	};

	class BehaviorLoaderImplement : BehaviorLoader
	{
	public:
		BehaviorLoaderImplement()
		{
			AgentMeta::SetBehaviorLoader(this);
		}

		virtual ~BehaviorLoaderImplement()
		{
		}

		virtual bool load()
		{
			AgentMeta::SetTotalSignature(2144556769u);

			AgentMeta* meta = NULL;
			BEHAVIAC_UNUSED_VAR(meta);

			// behaviac::Agent
			meta = BEHAVIAC_NEW AgentMeta(24743406u);
			AgentMeta::GetAgentMetas()[1770892321u] = meta;
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_behaviac_Agent_LogMessage));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			// FirstAgent
			meta = BEHAVIAC_NEW AgentMeta(1086210822u);
			AgentMeta::GetAgentMetas()[1778122110u] = meta;
			meta->RegisterMemberProperty(2082220067u, BEHAVIAC_NEW CMemberProperty< int >("p1", Set_FirstAgent_p1, Get_FirstAgent_p1));
			meta->RegisterMemberProperty(1144200279u, BEHAVIAC_NEW CMemberProperty< SecondAgent* >("pInstance", Set_FirstAgent_pInstance, Get_FirstAgent_pInstance));
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_FirstAgent_LogMessage));
			meta->RegisterMethod(1505908390u, BEHAVIAC_NEW CAgentMethodVoid(FunctionPointer_FirstAgent_SayHello));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			// SecondAgent
			meta = BEHAVIAC_NEW AgentMeta(2420330950u);
			AgentMeta::GetAgentMetas()[2432194202u] = meta;
			meta->RegisterMemberProperty(1462860768u, BEHAVIAC_NEW CMemberProperty< int >("p2", Set_SecondAgent_p2, Get_SecondAgent_p2));
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_SecondAgent_LogMessage));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			AgentMeta::Register<behaviac::Agent>("behaviac::Agent");
			AgentMeta::Register<FirstAgent>("FirstAgent");
			AgentMeta::Register<SecondAgent>("SecondAgent");

			Agent::RegisterInstanceName<SecondAgent>("SecondAgentInstance");

			return true;
		}

		virtual bool unLoad()
		{
			AgentMeta::UnRegister<behaviac::Agent>("behaviac::Agent");
			AgentMeta::UnRegister<FirstAgent>("FirstAgent");
			AgentMeta::UnRegister<SecondAgent>("SecondAgent");

			Agent::UnRegisterInstanceName<SecondAgent>("SecondAgentInstance");

			return true;
		}
	};

	static BehaviorLoaderImplement _behaviorLoaderImplement_;

	static BehaviorLoaderImplement* _pBehaviorLoader_ = NULL;

	void InitBehaviorLoader()
	{
		_pBehaviorLoader_ = BEHAVIAC_NEW BehaviorLoaderImplement();
	}

	void DestroyBehaviorLoader()
	{
		if (_pBehaviorLoader_)
		{
			BEHAVIAC_DELETE _pBehaviorLoader_;
			_pBehaviorLoader_ = NULL;
		}
	}
}
