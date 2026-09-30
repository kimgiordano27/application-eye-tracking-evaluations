/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetTranslation
ENTRY_POINT: 07c5a610
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetTranslation
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar1 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar3 = param_2;
      fVar4 = param_3;
      fVar2 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* try { // try from 07c5a644 to 07d5a6b3 has its CatchHandler @ 07c5a824 */
        FUN_09539e3c(unaff_s10 + (fVar1 - fVar2),unaff_s9 + (param_2 - fVar3),
                     unaff_s8 + (param_3 - fVar4),*(long *)(unaff_x19 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


