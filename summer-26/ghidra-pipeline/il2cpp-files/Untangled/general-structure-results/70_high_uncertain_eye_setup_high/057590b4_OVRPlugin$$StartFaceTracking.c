/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 057590b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking(void)

{
  int iVar1;
  long *unaff_x19;
  
  while( true ) {
    FUN_05698e6c();
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar1 == 0xe) break;
    FUN_057591a0();
  }
  return;
}


