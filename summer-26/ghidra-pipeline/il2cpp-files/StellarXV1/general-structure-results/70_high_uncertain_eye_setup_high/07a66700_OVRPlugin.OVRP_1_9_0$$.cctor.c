/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$.cctor
ENTRY_POINT: 07a66700
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_9_0___cctor(void)

{
  int iVar1;
  undefined8 uVar2;
  long *unaff_x24;
  
  iVar1 = OVRPlugin_OVRP_1_8_0__ovrp_Update2();
  if (iVar1 != 0) {
    return 0xfffff767;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_07a65b54();
  return uVar2;
}


