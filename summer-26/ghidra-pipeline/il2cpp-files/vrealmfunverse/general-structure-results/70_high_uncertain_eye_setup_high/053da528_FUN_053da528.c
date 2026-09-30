/*
FUNCTION_NAME: FUN_053da528
ENTRY_POINT: 053da528
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053da528(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_02ba3594(PTR_DAT_06313048);
  uVar1 = FUN_02b3c908(uVar1,2);
  thunk_FUN_02b4c898(param_1,0);
  uVar2 = FUN_053d6158();
  FUN_0275e13c(uVar1);
  FUN_0275a400(uVar1,uVar2);
  FUN_0275a434(uVar1,0,uVar2);
  FUN_053d7bb8(param_1);
  uVar2 = FUN_053d6158();
  FUN_0275a400(uVar1,uVar2);
  FUN_0275a434(uVar1,1,uVar2);
  uVar2 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_91_0_TypeInfo);
  uVar1 = FUN_0540ce80(uVar2,uVar1,0);
  thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
  uVar2 = thunk_FUN_02b79644();
  FUN_053f0c5c(uVar2,uVar1,0);
  uVar1 = FUN_0540c738(uVar2,0);
  uVar2 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_93_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,uVar2);
}


