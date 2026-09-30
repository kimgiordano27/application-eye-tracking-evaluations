/*
FUNCTION_NAME: FUN_014632b0
ENTRY_POINT: 014632b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_014632b0(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  local_24 = param_2;
  if ((DAT_03776aac & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                      );
    DAT_03776aac = 1;
  }
  puVar2 = StringLiteral_302;
  puVar1 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__;
  switch(param_2) {
  case 0:
    if (param_3 != 0) {
      FUN_0266bbc8(param_3,param_4,0);
      return;
    }
    break;
  default:
    uVar3 = FUN_0176eb1c(&local_24,0);
    uVar3 = FUN_015f5b28(*(undefined8 *)puVar1,uVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    FUN_026610e4(uVar3,0);
    return;
  case 2:
    if (param_3 != 0) {
      FUN_0266bc74(param_3,param_4,0);
      return;
    }
    break;
  case 3:
    if (param_3 != 0) {
      FUN_0266bd20(param_3,param_4,0);
      return;
    }
    break;
  case 4:
    if (param_3 != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem__StartTransition(param_3,param_4,0);
      return;
    }
    break;
  case 5:
    if (param_3 != 0) {
      FUN_0266be78(param_3,param_4,0);
      return;
    }
    break;
  case 6:
    if (param_3 != 0) {
      FUN_0266bf24(param_3,param_4,0);
      return;
    }
    break;
  case 7:
    if (param_3 != 0) {
      FUN_0266bfd0(param_3,param_4,0);
      return;
    }
    break;
  case 8:
    if (param_3 != 0) {
      FUN_0266c07c(param_3,param_4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


