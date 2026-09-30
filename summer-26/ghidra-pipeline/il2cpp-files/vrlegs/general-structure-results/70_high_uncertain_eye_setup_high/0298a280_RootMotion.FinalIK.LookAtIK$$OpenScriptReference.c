/*
FUNCTION_NAME: RootMotion.FinalIK.LookAtIK$$OpenScriptReference
ENTRY_POINT: 0298a280
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298a2d0) */

undefined4 RootMotion_FinalIK_LookAtIK__OpenScriptReference(void)

{
  undefined4 unaff_w19;
  long unaff_x24;
  char cStack0000000000000008;
  char cStack000000000000000c;
  
  if (cStack0000000000000008 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x24 == 0) {
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


