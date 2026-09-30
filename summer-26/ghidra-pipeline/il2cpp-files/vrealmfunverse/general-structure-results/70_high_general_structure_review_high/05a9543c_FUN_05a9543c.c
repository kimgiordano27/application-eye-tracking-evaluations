/*
FUNCTION_NAME: FUN_05a9543c
ENTRY_POINT: 05a9543c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_05a9543c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = Method_Newtonsoft_Json_Serialization_DefaultContractResolver_IsValidCallback__;
  if ((DAT_066d41de & 1) == 0) {
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                );
    FUN_02b3c81c(PTR_DAT_0631ee88);
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_DefaultContractResolver_IsValidCallback__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_char>>__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_KeyCode>>__
                );
    DAT_066d41de = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
                              );
    FUN_05a9524c(uVar3,0,*(undefined8 *)
                          Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_KeyCode>>__
                );
    if (*(int *)(*(long *)PTR_DAT_0631ee88 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = FUN_0316a0a4(uVar3,*(undefined8 *)
                                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                        );
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  }
  *param_1 = lVar2;
  return;
}


