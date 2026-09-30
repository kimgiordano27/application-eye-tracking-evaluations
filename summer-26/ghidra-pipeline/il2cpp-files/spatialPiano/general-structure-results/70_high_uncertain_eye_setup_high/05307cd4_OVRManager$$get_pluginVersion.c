/*
FUNCTION_NAME: OVRManager$$get_pluginVersion
ENTRY_POINT: 05307cd4
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


void OVRManager__get_pluginVersion
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  fVar4 = *(float *)(param_1 + 1);
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar3 = (float)uVar6;
  fVar2 = (float)((ulong)uVar6 >> 0x20);
  fVar4 = fVar4 * fVar4;
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4);
  fVar2 = (float)FUN_060fdea8();
  fVar3 = -fVar5;
  if (0.0 <= unaff_s10 * param_4 + unaff_s11 * fVar2 + unaff_s12 * fVar4) {
    fVar3 = fVar5;
  }
  *(float *)(unaff_x19 + 0x160) = fVar3;
  fVar4 = -1.0;
  if (0.0 <= fVar3) {
    fVar4 = 1.0;
  }
  if (unaff_s8 != fVar4) {
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


