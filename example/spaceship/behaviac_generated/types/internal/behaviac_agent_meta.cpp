﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#include "behaviac/common/meta.h"
#include "behaviac/common/member.h"
#include "behaviac_agent_meta.h"

namespace behaviac
{
	class CInstanceConst_StructTest : public CInstanceConstBase<StructTest>
	{
		IInstanceMember* _a;

	public: 
		CInstanceConst_StructTest(const char* valueStr) : CInstanceConstBase<StructTest>(valueStr)
		{
			behaviac::vector<behaviac::string> paramStrs = behaviac::StringUtils::SplitTokensForStruct(valueStr);
			BEHAVIAC_ASSERT(paramStrs.size() == 1);

			_a = AgentMeta::TParseProperty<bool >(paramStrs[0].c_str());
		}

		~CInstanceConst_StructTest()
		{
			BEHAVIAC_DELETE _a;
		}

		virtual void run(Agent* self)
		{
			BEHAVIAC_ASSERT(_a != NULL);

			_value.a = *(bool*)_a->GetValue(self, behaviac::Meta::IsVector<bool >::Result, behaviac::GetClassTypeNumberId<bool >());
		}
	};

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
			AgentMeta::SetTotalSignature(2613446811u);

			AgentMeta* meta = NULL;
			BEHAVIAC_UNUSED_VAR(meta);

			// StructTest
			meta = BEHAVIAC_NEW AgentMeta(2864333320u);
			AgentMeta::GetAgentMetas()[2798931971u] = meta;
			meta->RegisterMemberProperty(3049752432u, BEHAVIAC_NEW CMemberProperty< bool >("a", Set_StructTest_a, Get_StructTest_a));

			// behaviac::Agent
			meta = BEHAVIAC_NEW AgentMeta(24743406u);
			AgentMeta::GetAgentMetas()[1770892321u] = meta;
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_behaviac_Agent_LogMessage));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			// framework::GameObject
			meta = BEHAVIAC_NEW AgentMeta(2956570330u);
			AgentMeta::GetAgentMetas()[1407918510u] = meta;
			meta->RegisterMemberProperty(2436539256u, BEHAVIAC_NEW CMemberProperty< long >("age", Set_framework_GameObject_age, Get_framework_GameObject_age));
			meta->RegisterMemberProperty(713213677u, BEHAVIAC_NEW CMemberProperty< unsigned int >("HP", Set_framework_GameObject_HP, Get_framework_GameObject_HP));
			meta->RegisterMethod(828258197u, BEHAVIAC_NEW CAgentMethod< bool >(FunctionPointer_framework_GameObject_alignedWithPlayer));
			meta->RegisterMethod(1552598362u, BEHAVIAC_NEW CAgentMethod< float >(FunctionPointer_framework_GameObject_distanceToPlayer));
			meta->RegisterMethod(1340929876u, BEHAVIAC_NEW CAgentMethodVoid_1<int>(FunctionPointer_framework_GameObject_GoStraight));
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_framework_GameObject_LogMessage));
			meta->RegisterMethod(4083678003u, BEHAVIAC_NEW CAgentMethod< bool >(FunctionPointer_framework_GameObject_playerIsAligned));
			meta->RegisterMethod(3456887588u, BEHAVIAC_NEW CAgentMethod_1< bool, float >(FunctionPointer_framework_GameObject_projectileNearby));
			meta->RegisterMethod(966632266u, BEHAVIAC_NEW CAgentMethod_1< int, float >(FunctionPointer_framework_GameObject_TurnTowardsTarget));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			// framework::Projectile
			meta = BEHAVIAC_NEW AgentMeta(2335840074u);
			AgentMeta::GetAgentMetas()[2189145894u] = meta;
			meta->RegisterMemberProperty(2436539256u, BEHAVIAC_NEW CMemberProperty< long >("age", Set_framework_GameObject_age, Get_framework_GameObject_age));
			meta->RegisterMemberProperty(713213677u, BEHAVIAC_NEW CMemberProperty< unsigned int >("HP", Set_framework_GameObject_HP, Get_framework_GameObject_HP));
			meta->RegisterMethod(828258197u, BEHAVIAC_NEW CAgentMethod< bool >(FunctionPointer_framework_Projectile_alignedWithPlayer));
			meta->RegisterMethod(1552598362u, BEHAVIAC_NEW CAgentMethod< float >(FunctionPointer_framework_Projectile_distanceToPlayer));
			meta->RegisterMethod(1340929876u, BEHAVIAC_NEW CAgentMethodVoid_1<int>(FunctionPointer_framework_Projectile_GoStraight));
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_framework_Projectile_LogMessage));
			meta->RegisterMethod(4083678003u, BEHAVIAC_NEW CAgentMethod< bool >(FunctionPointer_framework_Projectile_playerIsAligned));
			meta->RegisterMethod(3456887588u, BEHAVIAC_NEW CAgentMethod_1< bool, float >(FunctionPointer_framework_Projectile_projectileNearby));
			meta->RegisterMethod(966632266u, BEHAVIAC_NEW CAgentMethod_1< int, float >(FunctionPointer_framework_Projectile_TurnTowardsTarget));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			// framework::Ship
			meta = BEHAVIAC_NEW AgentMeta(1919942410u);
			AgentMeta::GetAgentMetas()[1271307080u] = meta;
			meta->RegisterMemberProperty(2436539256u, BEHAVIAC_NEW CMemberProperty< long >("age", Set_framework_GameObject_age, Get_framework_GameObject_age));
			meta->RegisterMemberProperty(713213677u, BEHAVIAC_NEW CMemberProperty< unsigned int >("HP", Set_framework_GameObject_HP, Get_framework_GameObject_HP));
			meta->RegisterMethod(828258197u, BEHAVIAC_NEW CAgentMethod< bool >(FunctionPointer_framework_Ship_alignedWithPlayer));
			meta->RegisterMethod(2990669001u, BEHAVIAC_NEW CAgentMethod_1< behaviac::EBTStatus, bool >(FunctionPointer_framework_Ship_checkresult));
			meta->RegisterMethod(1098272789u, BEHAVIAC_NEW CAgentMethodVoid_1<float>(FunctionPointer_framework_Ship_DestroyAllNearbyProjectiles));
			meta->RegisterMethod(1552598362u, BEHAVIAC_NEW CAgentMethod< float >(FunctionPointer_framework_Ship_distanceToPlayer));
			meta->RegisterMethod(3771923015u, BEHAVIAC_NEW CAgentMethod< bool >(FunctionPointer_framework_Ship_Fire));
			meta->RegisterMethod(1143237114u, BEHAVIAC_NEW CAgentMethod< double >(FunctionPointer_framework_Ship_GetConstDoubleValue));
			meta->RegisterMethod(2224959841u, BEHAVIAC_NEW CAgentMethod< float >(FunctionPointer_framework_Ship_GetConstFloatValue));
			meta->RegisterMethod(2770306674u, BEHAVIAC_NEW CAgentMethod< float >(FunctionPointer_framework_Ship_getXPosition));
			meta->RegisterMethod(1256058188u, BEHAVIAC_NEW CAgentMethod< float >(FunctionPointer_framework_Ship_getYPosition));
			meta->RegisterMethod(1340929876u, BEHAVIAC_NEW CAgentMethodVoid_1<int>(FunctionPointer_framework_Ship_GoStraight));
			meta->RegisterMethod(2536101085u, BEHAVIAC_NEW CAgentMethod_3< bool, float, float, float >(FunctionPointer_framework_Ship_GotoPoint));
			meta->RegisterMethod(244921611u, BEHAVIAC_NEW CAgentMethod_3< bool, float, float, float >(FunctionPointer_framework_Ship_GotoPointRelative));
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_framework_Ship_LogMessage));
			meta->RegisterMethod(4083678003u, BEHAVIAC_NEW CAgentMethod< bool >(FunctionPointer_framework_Ship_playerIsAligned));
			meta->RegisterMethod(3456887588u, BEHAVIAC_NEW CAgentMethod_1< bool, float >(FunctionPointer_framework_Ship_projectileNearby));
			meta->RegisterMethod(966632266u, BEHAVIAC_NEW CAgentMethod_1< int, float >(FunctionPointer_framework_Ship_TurnTowardsTarget));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			// framework::WorldState
			meta = BEHAVIAC_NEW AgentMeta(2811602544u);
			AgentMeta::GetAgentMetas()[2541539938u] = meta;
			meta->RegisterMemberProperty(2389310492u, BEHAVIAC_NEW CMemberProperty< unsigned int >("HealthHP", Set_framework_WorldState_HealthHP, Get_framework_WorldState_HealthHP));
			meta->RegisterMemberProperty(404245629u, BEHAVIAC_NEW CMemberProperty< bool >("SyncSignal", Set_framework_WorldState_SyncSignal, Get_framework_WorldState_SyncSignal));
			meta->RegisterMemberProperty(743044588u, BEHAVIAC_NEW CMemberProperty< unsigned int >("time", Set_framework_WorldState_time, Get_framework_WorldState_time));
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_framework_WorldState_LogMessage));
			meta->RegisterMethod(2535312399u, BEHAVIAC_NEW CAgentMethod< bool >(FunctionPointer_framework_WorldState_NextWave));
			meta->RegisterMethod(3070336447u, BEHAVIAC_NEW CAgentMethod< int >(FunctionPointer_framework_WorldState_PlayerHP));
			meta->RegisterMethod(692130487u, BEHAVIAC_NEW CAgentMethodVoid_1<int>(FunctionPointer_framework_WorldState_SpawnShip));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			AgentMeta::Register<behaviac::Agent>("behaviac::Agent");
			AgentMeta::Register<framework::GameObject>("framework::GameObject");
			AgentMeta::Register<framework::Projectile>("framework::Projectile");
			AgentMeta::Register<framework::Ship>("framework::Ship");
			AgentMeta::Register<framework::WorldState>("framework::WorldState");
			AgentMeta::Register<behaviac::EBTStatus>("behaviac::EBTStatus");
			AgentMeta::Register<ETest>("ETest");
			AgentMeta::Register<IList>("IList");
			AgentMeta::Register<System::Object>("System::Object");
			AgentMeta::Register<StructTest>("StructTest");

			Agent::RegisterInstanceName<framework::WorldState>("framework::WorldState");

			return true;
		}

		virtual bool unLoad()
		{
			AgentMeta::UnRegister<behaviac::Agent>("behaviac::Agent");
			AgentMeta::UnRegister<framework::GameObject>("framework::GameObject");
			AgentMeta::UnRegister<framework::Projectile>("framework::Projectile");
			AgentMeta::UnRegister<framework::Ship>("framework::Ship");
			AgentMeta::UnRegister<framework::WorldState>("framework::WorldState");
			AgentMeta::UnRegister<behaviac::EBTStatus>("behaviac::EBTStatus");
			AgentMeta::UnRegister<ETest>("ETest");
			AgentMeta::UnRegister<IList>("IList");
			AgentMeta::UnRegister<System::Object>("System::Object");
			AgentMeta::UnRegister<StructTest>("StructTest");

			Agent::UnRegisterInstanceName<framework::WorldState>("framework::WorldState");

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
