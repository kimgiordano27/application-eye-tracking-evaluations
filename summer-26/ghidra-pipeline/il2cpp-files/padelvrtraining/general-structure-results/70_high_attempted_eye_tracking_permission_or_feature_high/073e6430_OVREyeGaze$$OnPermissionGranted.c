/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 073e6430
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(void)

{
  ulong uVar1;
  long lVar2;
  undefined4 unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  if (unaff_w20 != in_stack_00000008._4_4_) {
    lVar2 = *(long *)(unaff_x21 + 0x28);
    if (lVar2 == 0) {
LAB_073e6494:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar2 + 0x18) <= in_stack_00000008._4_4_) {
LAB_073e6498:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(undefined4 *)(lVar2 + (long)(int)in_stack_00000008._4_4_ * 4 + 0x20) = 0;
    uVar1 = FUN_073e61d0();
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x28);
      if (lVar2 == 0) goto LAB_073e6494;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_073e6498;
      *(undefined4 *)(lVar2 + (long)(int)unaff_w20 * 4 + 0x20) = unaff_w19;
    }
  }
  return;
}


