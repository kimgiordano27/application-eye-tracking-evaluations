/*
FUNCTION_NAME: OVRManager$$get_sdkVersion
ENTRY_POINT: 05307d24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_sdkVersion(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 unaff_d13;
  
  *(undefined1 *)(unaff_x21 + 0x2c7) = 1;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar3 = (float)((ulong)unaff_d13 >> 0x20);
  fVar4 = unaff_s9 * unaff_s9;
  fVar5 = SQRT((float)unaff_d13 * (float)unaff_d13 + fVar3 * fVar3 + fVar4);
  fVar2 = (float)FUN_060fdea8();
  fVar3 = -fVar5;
  if (0.0 <= unaff_s10 * param_3 + unaff_s11 * fVar2 + unaff_s12 * fVar4) {
    fVar3 = fVar5;
  }
  *(float *)(unaff_x19 + 0x160) = fVar3;
  fVar2 = -1.0;
  if (0.0 <= fVar3) {
    fVar2 = 1.0;
  }
  if (unaff_s8 != fVar2) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05307dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  return;
}


