/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 0321f554
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdatePassthroughColorLut(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined1 in_w8;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long lVar3;
  long *unaff_x26;
  
  *(undefined1 *)(unaff_x24 + 0xeb3) = in_w8;
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(int *)(unaff_x23 + 0x10) == 1) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      lVar3 = *(long *)(unaff_x21 + 8);
      uVar2 = FUN_02521d48();
      *(undefined2 *)(lVar3 + (long)(int)uVar1 * 2) = uVar2;
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      goto LAB_0321f6d0;
    }
  }
  FUN_025eb69c();
LAB_0321f6d0:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_0322484c();
  return;
}


