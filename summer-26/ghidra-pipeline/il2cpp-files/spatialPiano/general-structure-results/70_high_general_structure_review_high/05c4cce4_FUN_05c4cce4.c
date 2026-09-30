/*
FUNCTION_NAME: FUN_05c4cce4
ENTRY_POINT: 05c4cce4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05c4cce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_Newtonsoft_Json_Serialization_DefaultContractResolver_IsValidCallback__;
  if ((DAT_06bc2ef1 & 1) == 0) {
    FUN_02f08768(System_ComponentModel_TypeConverter_TypeInfo);
    FUN_02f08768(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                );
    FUN_02f08768(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_char>>__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_KeyCode>>__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationDeviceType,_EventModifiers>>__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<Vector2,_NavigationDeviceType,_EventModifiers>>__
                );
    FUN_02f08768(Method_Newtonsoft_Json_Serialization_DefaultContractResolver_IsValidCallback__);
    DAT_06bc2ef1 = 1;
  }
  lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05116b38(lVar4,0);
  puVar3 = 
  Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationDeviceType,_EventModifiers>>__
  ;
  puVar2 = 
  Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_KeyCode>>__
  ;
  puVar1 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_1;
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_05c4ce2c();
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_04df840c(uVar6,lVar4,*(undefined8 *)puVar3,0);
    puVar2 = 
    Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<Vector2,_NavigationDeviceType,_EventModifiers>>__
    ;
    puVar1 = System_ComponentModel_TypeConverter_TypeInfo;
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x50) = uVar6;
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c(uVar6,lVar4,*(undefined8 *)puVar2,0);
      *(undefined8 *)(lVar5 + 0x58) = uVar6;
      *(undefined8 *)(lVar5 + 0x60) = param_2;
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


