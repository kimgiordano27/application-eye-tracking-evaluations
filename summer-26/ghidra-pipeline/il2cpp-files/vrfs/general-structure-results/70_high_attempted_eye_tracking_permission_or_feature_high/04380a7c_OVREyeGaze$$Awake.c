/*
FUNCTION_NAME: OVREyeGaze$$Awake
ENTRY_POINT: 04380a7c
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Awake(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    (**(code **)(*(long *)(*(long *)(in_x9 + 0xc0) + 0x68) + 8))(param_1,param_2,param_3,param_4);
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) goto LAB_04380abc;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x24) goto LAB_04380ac0;
      if (unaff_x20 == 0) goto LAB_04380abc;
      lVar2 = lVar2 + unaff_x23;
      uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8) + 8))
                        (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                         *(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c));
    } while ((uVar1 & 1) == 0);
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x24) {
LAB_04380ac0:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    in_x9 = *(long *)(unaff_x19 + 0x20);
    lVar2 = lVar2 + unaff_x23;
    param_1 = *(undefined4 *)(lVar2 + 0x20);
    param_2 = *(undefined4 *)(lVar2 + 0x24);
    param_3 = *(undefined4 *)(lVar2 + 0x28);
    param_4 = *(undefined4 *)(lVar2 + 0x2c);
  }
LAB_04380abc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


