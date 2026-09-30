/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp
ENTRY_POINT: 051a16e4
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp(long param_1)

{
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long lVar1;
  long unaff_x22;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (unaff_x22 != 0) {
    fVar2 = (float)FUN_05eaba3c(SQRT(unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 +
                                     unaff_s9 * unaff_s9));
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      fVar3 = (float)FUN_05eaba3c(SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 +
                                       unaff_s12 * unaff_s12) / unaff_s8,*(long *)(unaff_x19 + 0x40)
                                  ,0);
      if (fVar2 <= fVar3) {
        fVar3 = fVar2;
      }
      FUN_051a1808(fVar3);
      if (*(int *)(unaff_x21 + 0x20) - 2U < 3) {
        lVar1 = *(long *)(unaff_x19 + 0x48);
        if (DAT_06a67230 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
          DAT_06a67230 = '\x01';
        }
        fVar4 = *unaff_x20;
        fVar3 = unaff_x20[1];
        fVar2 = unaff_x20[2];
        if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (lVar1 == 0) goto LAB_051a1804;
        FUN_05eaba3c(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2),lVar1,0);
        FUN_051a1808();
      }
      return;
    }
  }
LAB_051a1804:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


