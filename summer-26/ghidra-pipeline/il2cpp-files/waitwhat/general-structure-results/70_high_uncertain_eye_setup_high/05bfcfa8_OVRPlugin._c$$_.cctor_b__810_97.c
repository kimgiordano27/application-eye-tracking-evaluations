/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_97
ENTRY_POINT: 05bfcfa8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_97(long param_1)

{
  undefined8 uVar1;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar2;
  float unaff_s8;
  float fVar3;
  undefined8 unaff_d9;
  float fVar4;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar3 = (float)((ulong)unaff_d9 >> 0x20);
  if (SQRT(unaff_s8 * unaff_s8 + (float)unaff_d9 * (float)unaff_d9 + fVar3 * fVar3) <
      *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc)) {
    if (unaff_x20 == 0) goto LAB_05bfd12c;
    uVar1 = 0;
    goto LAB_05bfcfe8;
  }
  fVar3 = *unaff_x19;
  uVar1 = *(undefined8 *)(unaff_x19 + 1);
  if (DAT_07546bbf == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbf = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar2 = (float)uVar1;
  fVar4 = (float)((ulong)uVar1 >> 0x20);
  fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar3 <= DAT_012e3cb4) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    uVar1 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
  }
  else {
    uVar1 = CONCAT44((float)((ulong)*(undefined8 *)unaff_x19 >> 0x20) / fVar3,
                     (float)*(undefined8 *)unaff_x19 / fVar3);
    fVar3 = unaff_x19[2] / fVar3;
  }
  fVar2 = (float)((ulong)uVar1 >> 0x20);
  *(undefined8 *)unaff_x19 = uVar1;
  unaff_x19[2] = fVar3;
  if (ABS((float)uVar1) <= ABS(fVar2)) {
    if (fVar2 <= 0.0) {
      if (unaff_x20 == 0) goto LAB_05bfd12c;
      uVar1 = 4;
    }
    else {
      if (unaff_x20 == 0) goto LAB_05bfd12c;
      uVar1 = 5;
    }
  }
  else if ((float)uVar1 <= 0.0) {
    if (unaff_x20 == 0) goto LAB_05bfd12c;
    uVar1 = 3;
  }
  else {
    if (unaff_x20 == 0) {
LAB_05bfd12c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar1 = 2;
  }
LAB_05bfcfe8:
                    /* WARNING: Could not recover jumptable at 0x05bfd004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x40),uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


