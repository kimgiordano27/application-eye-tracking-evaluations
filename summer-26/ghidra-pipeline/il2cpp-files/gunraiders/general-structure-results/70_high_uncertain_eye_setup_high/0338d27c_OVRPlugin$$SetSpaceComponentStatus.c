/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 0338d27c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetSpaceComponentStatus(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 0xbe0);
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_SetCreateFunction__);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<TransitionStartEvent>_SetCreateFunction__);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<WheelEvent>_SetCreateFunction__);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<WheelEvent>_GetPooled__);
    *(undefined1 *)(unaff_x24 + 0x668) = 1;
  }
  FUN_031dd710(param_2,0);
  uVar1 = thunk_FUN_01c496e0(*unaff_x23);
  FUN_02b65188(uVar1,param_2,*unaff_x20,0);
  uVar2 = thunk_FUN_01c496e0(*unaff_x22);
  FUN_025ec1d8(uVar2,uVar1,*puVar3);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  return;
}


