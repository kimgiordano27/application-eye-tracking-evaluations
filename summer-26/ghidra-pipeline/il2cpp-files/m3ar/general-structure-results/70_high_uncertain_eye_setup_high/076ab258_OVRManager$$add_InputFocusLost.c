/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 076ab258
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_InputFocusLost(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float fVar9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fVar3 = (float)FUN_076ab0e8();
  if (0.0 <= unaff_s12 * param_3 + unaff_s8 * fVar3 + unaff_s11 * param_2) {
    if (DAT_09539e17 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    puVar1 = PTR_DAT_08f65580;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar3 = SQRT(unaff_s8 * unaff_s8 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
    if ((*(float *)(unaff_x19 + 0x20) <= fVar3) && (fVar3 <= *(float *)(unaff_x19 + 0x24))) {
      uVar2 = FUN_085849e0();
      FUN_076b6d64((long)&stack0x00000010 + 4,uVar2,0,0);
      fVar7 = fStack0000000000000018;
      if (DAT_09539e19 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e19 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar4 = (unaff_s11 + fVar7) - unaff_s10;
      fVar6 = (unaff_s8 + fStack0000000000000014) - unaff_s9;
      fVar9 = *(float *)(unaff_x19 + 0x24);
      fStack0000000000000010 = (unaff_s12 + fStack000000000000001c) - fStack0000000000000010;
      fVar5 = tanf(*(float *)(unaff_x19 + 0x2c) * DAT_01a2ef6c);
      fVar3 = fVar3 / fVar9;
      fVar7 = 1.0;
      if (fVar3 <= 1.0) {
        fVar7 = fVar3;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar3) {
        fVar8 = fVar7;
      }
      return SQRT(fStack0000000000000010 * fStack0000000000000010 + fVar6 * fVar6 + fVar4 * fVar4)
             <= *(float *)(unaff_x19 + 0x28) +
                (fVar9 * fVar5 - *(float *)(unaff_x19 + 0x28)) * fVar8;
    }
  }
  return false;
}


