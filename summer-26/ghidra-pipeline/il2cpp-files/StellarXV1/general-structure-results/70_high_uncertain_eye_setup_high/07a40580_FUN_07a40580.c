/*
FUNCTION_NAME: FUN_07a40580
ENTRY_POINT: 07a40580
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_07a40580(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto OVRPlugin__get_bodyTrackingSupported;
    fVar5 = *(float *)(param_1 + 0x28);
    fVar3 = *(float *)(lVar2 + 0xa8);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    if (lVar2 == 0) {
OVRPlugin__get_bodyTrackingSupported:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    fVar3 = 0.0;
    fVar5 = 1.0;
    *(undefined4 *)(lVar2 + 0xa8) = 0;
    *(undefined1 *)(lVar2 + 0xa4) = 1;
  }
  if (DAT_09885627 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_09885627 = '\x01';
  }
  fVar6 = ABS(fVar5);
  if (ABS(fVar5) <= ABS(fVar3)) {
    fVar6 = ABS(fVar3);
  }
  fVar4 = **(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) * 8.0;
  fVar7 = fVar6 * DAT_01aecc74;
  if (fVar6 * DAT_01aecc74 <= fVar4) {
    fVar7 = fVar4;
  }
  if (fVar7 <= ABS(fVar3 - fVar5)) {
    fVar6 = *(float *)(lVar2 + 0xa8);
    fVar7 = *(float *)(param_1 + 0x28);
    fVar4 = *(float *)(lVar2 + 0xa0);
    fVar3 = (float)FUN_089d7e60(0);
    fVar5 = fVar4 * fVar3;
    *(undefined8 *)(param_1 + 0x18) = 0;
    fVar3 = -(fVar4 * fVar3);
    if (0.0 <= fVar7 - fVar6) {
      fVar3 = fVar5;
    }
    fVar3 = fVar6 + fVar3;
    if (ABS(fVar7 - fVar6) <= fVar5) {
      fVar3 = fVar7;
    }
    *(float *)(lVar2 + 0xa8) = fVar3;
    thunk_FUN_040ec700((undefined8 *)(param_1 + 0x18),0);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    uVar1 = 0;
    *(undefined1 *)(lVar2 + 0xa4) = 0;
  }
  return uVar1;
}


