/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 04380b04
PROGRAM: vrfs-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


ulong OVREyeGaze__PrepareHeadDirection(undefined8 param_1,uint param_2,int param_3)

{
  ulong uVar1;
  uint in_w8;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar4;
  long lVar5;
  
  uVar3 = (ulong)param_2;
  if (in_w8 < param_2) {
    FUN_031dc210(0);
  }
  if ((param_3 < 0) || (*(int *)(unaff_x22 + 0x18) - param_3 < (int)param_2)) {
    FUN_031dc23c(0);
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    uVar4 = -(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4;
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    do {
      lVar2 = *(long *)(unaff_x22 + 0x10);
      if (lVar2 == 0) {
LAB_04380bcc:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (unaff_x21 == 0) goto LAB_04380bcc;
      lVar2 = lVar2 + uVar4;
      uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8) + 8))
                        (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                         *(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c));
      if ((uVar1 & 1) != 0) {
        return uVar3;
      }
      uVar3 = (ulong)((uint)uVar3 + 1);
      lVar5 = lVar5 + -1;
      uVar4 = uVar4 + 0x10;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


