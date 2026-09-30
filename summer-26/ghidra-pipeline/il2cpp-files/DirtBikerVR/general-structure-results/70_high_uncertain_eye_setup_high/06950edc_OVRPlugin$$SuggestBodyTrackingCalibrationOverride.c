/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 06950edc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestBodyTrackingCalibrationOverride
               (undefined4 param_1,float param_2,float param_3,float param_4)

{
  long unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 06950edc to 06a50ef3 has its CatchHandler @ 069510f0 */
  FUN_07c8afa8(param_1,param_2 * param_4,param_3 * param_4);
  if (unaff_x20 != 0) {
                    /* try { // try from 06950ef4 to 06a5108b has its CatchHandler @ 06950bac */
    FUN_07cac5a0();
    if ((*(char *)(unaff_x19 + 0x12) == '\0') || (*(float *)(unaff_x19 + 0x30) == 0.0)) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_07cac280(*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        FUN_07cac280(*(long *)(unaff_x19 + 0x18),0);
        if (DAT_08974e27 == '\0') {
          FUN_03a8a718(PTR_DAT_08486c60);
          DAT_08974e27 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_07cacacc(*(long *)(unaff_x19 + 0x28),0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_07cacba4(*(long *)(unaff_x19 + 0x28),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


