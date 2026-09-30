/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetTranslation
ENTRY_POINT: 027d6394
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetTranslation(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_w9;
  uint uVar7;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  
  if (unaff_w21 < in_w9) {
    if (unaff_w21 < 0x1ae) {
      bVar2 = 0x29 < unaff_w21;
      bVar3 = unaff_w21 == 0x2a;
      uVar7 = 7;
    }
    else {
      bVar2 = 0x10c5 < unaff_w21;
      bVar3 = unaff_w21 == 0x10c6;
      uVar7 = 5;
    }
  }
  else if (unaff_w21 < 0x418938) {
    bVar2 = 0x68db7 < unaff_w21;
    bVar3 = unaff_w21 == 0x68db8;
    uVar7 = 3;
  }
  else {
    bVar2 = 0x28f5c27 < unaff_w21;
    bVar3 = unaff_w21 == 0x28f5c28;
    uVar7 = 1;
  }
  if (!bVar2 || bVar3) {
    uVar7 = uVar7 + 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = uVar7 - 1;
  if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar4 = uVar7;
  if ((unaff_w21 == *(uint *)(param_1 + (ulong)uVar1 * 0x10 + 0x20)) &&
     (uVar4 = uVar1, unaff_x20 <= *(ulong *)(param_1 + (ulong)uVar1 * 0x10 + 0x28))) {
    uVar4 = uVar7;
  }
  if ((int)(uVar4 + unaff_w19) < 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
    FUN_0277bb94(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb20);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar6);
  }
  return;
}


