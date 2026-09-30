/*
FUNCTION_NAME: OVRManager$$set_suggestedGpuPerfLevel
ENTRY_POINT: 0530540c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedGpuPerfLevel(float param_1)

{
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long lVar1;
  float fVar2;
  float unaff_s8;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar2 = (float)FUN_0609fe3c(SQRT(unaff_s10 * unaff_s10 + unaff_s12 * unaff_s12 +
                                     unaff_s11 * unaff_s11) / unaff_s8,*(long *)(unaff_x19 + 0x40),0
                               );
    if (param_1 <= fVar2) {
      fVar2 = param_1;
    }
    FUN_053054fc(fVar2);
    if (*(int *)(unaff_x21 + 0x20) - 2U < 3) {
      lVar1 = *(long *)(unaff_x19 + 0x48);
      if (DAT_06bb42c7 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bb42c7 = '\x01';
      }
      fVar2 = *unaff_x20;
      uVar4 = *(undefined8 *)(unaff_x20 + 1);
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (lVar1 == 0) goto LAB_053054f8;
      fVar3 = (float)uVar4;
      fVar5 = (float)((ulong)uVar4 >> 0x20);
      FUN_0609fe3c(SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5),lVar1,0);
      FUN_053054fc();
    }
    return;
  }
LAB_053054f8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


