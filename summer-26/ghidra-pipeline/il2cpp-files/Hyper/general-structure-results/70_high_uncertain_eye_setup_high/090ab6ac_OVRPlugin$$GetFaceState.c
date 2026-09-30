/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 090ab6ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    fVar3 = (float)*(undefined8 *)(lVar1 + 0x1c) - (float)*(undefined8 *)(lVar1 + 0x10);
    fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1c) >> 0x20) -
            (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
    fVar5 = *(float *)(lVar1 + 0x24) - *(float *)(lVar1 + 0x18);
    fVar3 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
    if (fVar3 <= DAT_01df4f4c) {
      if (DAT_0b31f3e4 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e4 = '\x01';
      }
      uVar2 = *(undefined8 *)PTR_DAT_0ac0def8;
    }
    else {
      if (DAT_0b31f3e6 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0a830);
        DAT_0b31f3e6 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (SQRT(fVar3) <= DAT_01df50c4) {
        if (DAT_0b31f3e7 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          DAT_0b31f3e7 = '\x01';
        }
        uVar2 = *(undefined8 *)PTR_DAT_0ac0def8;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


