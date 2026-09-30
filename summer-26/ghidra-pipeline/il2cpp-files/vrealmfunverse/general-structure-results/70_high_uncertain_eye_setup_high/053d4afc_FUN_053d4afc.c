/*
FUNCTION_NAME: FUN_053d4afc
ENTRY_POINT: 053d4afc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_053d4afc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(*(long *)(param_1 + 0x40) + 0xd0) == 0) {
    return;
  }
  uVar1 = FUN_053d2290();
  thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
  uVar2 = thunk_FUN_02b79644();
  FUN_053f0c5c(uVar2,uVar1,0);
  uVar1 = FUN_0540c738(uVar2,0);
  uVar2 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_3_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,uVar2);
}


