/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetTranslation
ENTRY_POINT: 027d63a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetTranslation(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_w9;
  uint uVar5;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  
  if (unaff_w21 < (in_w9 & 0xffff | 0x410000)) {
    uVar1 = 0x68db8;
    uVar5 = 3;
  }
  else {
    uVar1 = 0x28f5c28;
    uVar5 = 1;
  }
  if (unaff_w21 <= uVar1) {
    uVar5 = uVar5 + 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = uVar5 - 1;
  if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar2 = uVar5;
  if ((unaff_w21 == *(uint *)(param_1 + (ulong)uVar1 * 0x10 + 0x20)) &&
     (uVar2 = uVar1, unaff_x20 <= *(ulong *)(param_1 + (ulong)uVar1 * 0x10 + 0x28))) {
    uVar2 = uVar5;
  }
  if ((int)(uVar2 + unaff_w19) < 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
    uVar3 = thunk_FUN_01a89e68();
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
    FUN_0277bb94(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb20);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,uVar4);
  }
  return;
}


