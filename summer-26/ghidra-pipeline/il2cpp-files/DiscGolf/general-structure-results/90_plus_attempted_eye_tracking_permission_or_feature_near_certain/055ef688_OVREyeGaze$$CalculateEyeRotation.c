/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 055ef688
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 106
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVREyeGaze__CalculateEyeRotation(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  long *unaff_x21;
  long lVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x21);
  }
  uVar1 = FUN_063542dc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x19 + 0x88);
  uVar2 = FUN_0634bb04();
  if ((lVar4 != 0) && (FUN_063249b4(lVar4,uVar2,0), *(long *)(unaff_x19 + 0x88) != 0)) {
    FUN_06324aac();
    lVar4 = *(long *)(unaff_x19 + 0x30);
    if (lVar4 != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x88);
      if (*(char *)(lVar4 + 0x68) == '\0') {
        NEON_fmov(0x3f800000,4);
      }
      else {
        if (*(long *)(lVar4 + 0x60) == 0) goto LAB_055ef754;
        FUN_0632749c(&stack0x00000020,*(long *)(lVar4 + 0x60),0);
      }
      if (lVar3 != 0) {
        FUN_0631bf7c(lVar3);
        return;
      }
    }
  }
LAB_055ef754:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


