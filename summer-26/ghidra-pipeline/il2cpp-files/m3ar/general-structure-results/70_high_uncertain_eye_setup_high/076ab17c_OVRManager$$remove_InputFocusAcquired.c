/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 076ab17c
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__remove_InputFocusAcquired(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fVar11 = param_2;
  fStack0000000000000010 = param_3;
  lVar2 = FUN_085849e0(param_4,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  fVar5 = (float)FUN_08598884(lVar2,0);
  fVar12 = fVar11;
  fVar8 = param_3;
  fVar6 = (float)FUN_076ab0e8(param_4);
  fVar10 = fVar8;
  if (DAT_0953c2f4 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_0953c2f4 = '\x01';
  }
  fVar7 = fVar8 * fVar8 + fVar6 * fVar6 + fVar12 * fVar12;
  fVar9 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8);
  if (fVar9 <= fVar7) {
    fVar9 = (fStack0000000000000010 - param_3) * fVar8 +
            (param_1 - fVar5) * fVar6 + (param_2 - fVar11) * fVar12;
    fVar11 = (fVar6 * fVar9) / fVar7;
    fVar10 = fVar12 * fVar9;
    fVar9 = fVar8 * fVar9;
    fVar12 = fVar10 / fVar7;
    fVar7 = fVar9 / fVar7;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar11 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar7 = pfVar4[2];
  }
  fVar8 = (float)FUN_076ab0e8(param_4);
  if (0.0 <= fVar7 * fVar10 + fVar11 * fVar8 + fVar12 * fVar9) {
    if (DAT_09539e17 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    puVar1 = PTR_DAT_08f65580;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar8 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar7 * fVar7);
    if ((*(float *)(param_4 + 0x20) <= fVar8) && (fVar8 <= *(float *)(param_4 + 0x24))) {
      uVar3 = FUN_085849e0(param_4,0);
      FUN_076b6d64((long)&stack0x00000010 + 4,uVar3,0,0);
      fVar10 = fStack0000000000000018;
      if (DAT_09539e19 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e19 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      param_2 = (fVar12 + fVar10) - param_2;
      param_1 = (fVar11 + fStack0000000000000014) - param_1;
      fVar5 = *(float *)(param_4 + 0x24);
      fVar10 = (fVar7 + fStack000000000000001c) - fStack0000000000000010;
      fVar12 = tanf(*(float *)(param_4 + 0x2c) * DAT_01a2ef6c);
      fVar8 = fVar8 / fVar5;
      fVar11 = 1.0;
      if (fVar8 <= 1.0) {
        fVar11 = fVar8;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar8) {
        fVar6 = fVar11;
      }
      return SQRT(fVar10 * fVar10 + param_1 * param_1 + param_2 * param_2) <=
             *(float *)(param_4 + 0x28) + (fVar5 * fVar12 - *(float *)(param_4 + 0x28)) * fVar6;
    }
  }
  return false;
}


