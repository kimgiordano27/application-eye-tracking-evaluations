/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 090ac6c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__StartFaceTracking(long param_1)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar7;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  fVar6 = *(float *)(param_1 + 8);
  fVar3 = (float)FUN_090abc9c();
  if (DAT_0b32d33b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32d33b = '\x01';
  }
  puVar1 = PTR_DAT_0ac0a830;
  fStack000000000000002c = unaff_s15;
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar7 = SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 + fVar6 * fVar6);
  if (fVar3 < fVar7) {
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (fVar7 <= DAT_01df50c4) {
      if (*(char *)(unaff_x22 + 999) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x22 + 999) = 1;
      }
      pfVar2 = *(float **)(*unaff_x21 + 0xb8);
      fVar4 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
    }
    else {
      fVar4 = unaff_s13 / fVar7;
      fVar5 = unaff_s14 / fVar7;
      fVar6 = fVar6 / fVar7;
    }
    unaff_s13 = fVar3 * fVar4;
    unaff_s14 = fVar3 * fVar5;
    fVar6 = fVar3 * fVar6;
  }
  if (unaff_s10 * fVar6 + fStack000000000000002c * unaff_s13 + unaff_s9 * unaff_s14 < 0.0) {
    if (*(char *)(unaff_x22 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x22 + 999) = 1;
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    unaff_s13 = *pfVar2;
    unaff_s14 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000024 + unaff_s14);
  fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000028 + unaff_s13);
  fStack0000000000000020 = fStack0000000000000020 - (in_stack_00000010._4_4_ + fVar6);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar3 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar3) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar3) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar3) / unaff_s8;
  }
  if (DAT_0b31f3e6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b31f3e6 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar3 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar3 <= DAT_01df50c4) {
    if (*(char *)(unaff_x22 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x22 + 999) = 1;
    }
    fStack0000000000000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar3;
  }
  fVar6 = (float)FUN_090ab800();
  fVar7 = (float)FUN_0901abf4(0);
  fVar7 = fVar7 - (float)(int)(fVar7 / 360.0) * 360.0;
  fVar3 = 360.0;
  if (fVar7 <= 360.0) {
    fVar3 = fVar7;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar7) {
    fVar4 = fVar3;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar3 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar3 < fVar4) && (fStack0000000000000018 = fVar6, ABS(fVar4 - fVar3) < ABS(360.0 - fVar4))
       ) {
      fStack0000000000000018 = (float)FUN_090ab8ac();
    }
    fVar3 = (float)FUN_090abac0();
    return in_stack_00000028 + unaff_s13 + fStack0000000000000018 * fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


