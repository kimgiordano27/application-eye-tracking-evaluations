/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 04380a1c
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  while (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_x24) {
LAB_04380ac0:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    if (unaff_x20 == 0) break;
    param_1 = param_1 + unaff_x23;
    uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8) + 8))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x24) goto LAB_04380ac0;
      lVar2 = lVar2 + unaff_x23;
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68) + 8))
                (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                 *(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c));
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      return;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


