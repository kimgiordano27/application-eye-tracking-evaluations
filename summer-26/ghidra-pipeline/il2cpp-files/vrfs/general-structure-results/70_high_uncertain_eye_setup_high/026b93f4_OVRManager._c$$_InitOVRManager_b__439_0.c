/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__439_0
ENTRY_POINT: 026b93f4
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRManager_<>c__<InitOVRManager>b__439_0(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    *(int *)(unaff_x19 + 8) = *(int *)(param_1 + 0x18) + 1;
    memset((void *)(unaff_x19 + 0x10),0,0x1a8);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


