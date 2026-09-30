/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 05cf84a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(undefined1 param_1 [16],float param_2)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s9;
  float unaff_s10;
  
  fVar2 = param_2;
  FUN_069042b4();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar1 = (float)FUN_05cf4c60(*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar2 = unaff_s10 + unaff_s9 + (param_2 - fVar2);
      if (fVar2 <= fVar1 + fVar1) {
        fVar2 = fVar1 + fVar1;
      }
      FUN_05cf4f4c(fVar2,*(long *)(unaff_x19 + 0x20),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


