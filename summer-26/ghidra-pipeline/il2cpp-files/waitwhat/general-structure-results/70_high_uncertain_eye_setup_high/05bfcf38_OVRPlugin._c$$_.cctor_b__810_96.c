/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_96
ENTRY_POINT: 05bfcf38
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_96(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float *unaff_x19;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_07117008;
  lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
  }
  lVar2 = thunk_FUN_031c3cac(lVar2,*(undefined8 *)puVar1);
  if (DAT_07546bbc == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbc = '\x01';
  }
  puVar1 = PTR_DAT_070c22f8;
  fVar4 = *unaff_x19;
  uVar5 = *(undefined8 *)(unaff_x19 + 1);
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar3 = (float)uVar5;
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6) <
      *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc)) {
    if (lVar2 == 0) goto LAB_05bfd12c;
    uVar5 = 0;
    goto LAB_05bfcfe8;
  }
  fVar4 = *unaff_x19;
  uVar5 = *(undefined8 *)(unaff_x19 + 1);
  if (DAT_07546bbf == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbf = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar3 = (float)uVar5;
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar4 <= DAT_012e3cb4) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    uVar5 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
  }
  else {
    uVar5 = CONCAT44((float)((ulong)*(undefined8 *)unaff_x19 >> 0x20) / fVar4,
                     (float)*(undefined8 *)unaff_x19 / fVar4);
    fVar4 = unaff_x19[2] / fVar4;
  }
  fVar3 = (float)((ulong)uVar5 >> 0x20);
  *(undefined8 *)unaff_x19 = uVar5;
  unaff_x19[2] = fVar4;
  if (ABS((float)uVar5) <= ABS(fVar3)) {
    if (fVar3 <= 0.0) {
      if (lVar2 == 0) goto LAB_05bfd12c;
      uVar5 = 4;
    }
    else {
      if (lVar2 == 0) goto LAB_05bfd12c;
      uVar5 = 5;
    }
  }
  else if ((float)uVar5 <= 0.0) {
    if (lVar2 == 0) goto LAB_05bfd12c;
    uVar5 = 3;
  }
  else {
    if (lVar2 == 0) {
LAB_05bfd12c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar5 = 2;
  }
LAB_05bfcfe8:
                    /* WARNING: Could not recover jumptable at 0x05bfd004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
  return;
}


