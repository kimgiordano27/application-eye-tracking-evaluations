/*
FUNCTION_NAME: RootMotion.FinalIK.RagdollUtility$$Start
ENTRY_POINT: 029c9294
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029c9304) */

undefined8 RootMotion_FinalIK_RagdollUtility__Start(void)

{
  long unaff_x20;
  char in_stack_00000008;
  
  FUN_029a2674();
  if (unaff_x20 != 0) {
    FUN_029b3ef8();
    if (in_stack_00000008 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


