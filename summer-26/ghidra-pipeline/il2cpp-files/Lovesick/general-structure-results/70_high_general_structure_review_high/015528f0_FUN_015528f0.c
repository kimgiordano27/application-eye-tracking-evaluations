/*
FUNCTION_NAME: FUN_015528f0
ENTRY_POINT: 015528f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_015528f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar3 = Method_System_Linq_Expressions_Interpreter_PropertyByRefUpdater_Update__;
  puVar4 = Method_Obi_ObiNativeList<int>_ResizeUninitialized__;
  puVar2 = 
  Method_System_Collections_Concurrent_ConcurrentDictionary<string,_VoiceServiceRequest>_ContainsKey__
  ;
  puVar1 = System_Runtime_Serialization_Formatters_Binary_NameInfo_TypeInfo;
  if ((DAT_03777b55 & 1) == 0) {
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_NameInfo_TypeInfo);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<ColliderRigidbody>_set_Item__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<DecodeText>d__116>__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<int>_ResizeUninitialized__);
    thunk_FUN_00d48444(StringLiteral_11742);
    thunk_FUN_00d48444(StringLiteral_7708);
    thunk_FUN_00d48444(System_Numerics_BigIntegerCalculator_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14089);
    thunk_FUN_00d48444(UnityEngine_UIElements_UIRUtility_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9417);
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<string,_VoiceServiceRequest>_ContainsKey__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Interpreter_PropertyByRefUpdater_Update__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_PlayerInputManager_PlayerLeftEvent_TypeInfo);
    DAT_03777b55 = 1;
  }
  FUN_01551ee8(param_1,param_2);
  lVar5 = FUN_010c5ec8(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  uVar6 = FUN_01145518(*(undefined8 *)puVar3,*(undefined8 *)puVar4);
  puVar3 = StringLiteral_14089;
  puVar2 = StringLiteral_7708;
  if (lVar5 != 0) {
    FUN_01541ed8(lVar5,uVar6,0);
    FUN_01542220(0,0,0,0,lVar5,0);
    FUN_01542204(lVar5,0,0);
    lVar5 = FUN_010c5ec8(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    *(long *)(param_1 + 0x80) = lVar5;
    uVar6 = FUN_01145518(*(undefined8 *)puVar2,*(undefined8 *)puVar4);
    puVar3 = StringLiteral_11742;
    puVar2 = StringLiteral_9417;
    if (lVar5 != 0) {
      FUN_01541ed8(lVar5,uVar6,0);
      lVar5 = FUN_010c5ec8(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
      *(long *)(param_1 + 0x88) = lVar5;
      uVar6 = FUN_01145518(*(undefined8 *)puVar3,*(undefined8 *)puVar4);
      puVar3 = Method_Obi_ObiNativeList<ColliderRigidbody>_set_Item__;
      puVar2 = UnityEngine_InputSystem_PlayerInputManager_PlayerLeftEvent_TypeInfo;
      puVar1 = UnityEngine_UIElements_UIRUtility_TypeInfo;
      if (lVar5 != 0) {
        FUN_01541ed8(lVar5,uVar6,0);
        lVar5 = FUN_010c5ec8(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
        *(long *)(param_1 + 0x90) = lVar5;
        uVar6 = FUN_01145518(*(undefined8 *)puVar2,*(undefined8 *)puVar4);
        puVar2 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<DecodeText>d__116>__
        ;
        puVar1 = System_Numerics_BigIntegerCalculator_TypeInfo;
        if (lVar5 != 0) {
          FUN_01541ed8(lVar5,uVar6,0);
          plVar7 = *(long **)(param_1 + 0x90);
          uVar6 = FUN_0113a140(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x1c8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x1d0));
            if ((*(long *)(param_1 + 0x90) != 0) &&
               (plVar7 = *(long **)(*(long *)(param_1 + 0x90) + 0x68), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01552b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar7 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar7,
                         *(undefined8 *)(*plVar7 + 0x2b0));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


