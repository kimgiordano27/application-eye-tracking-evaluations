/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 02aeeb34
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions_FaceExpressionsEnumerator__Dispose(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint in_w9;
  int in_w10;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  if (in_w10 < (int)in_w9) {
    lVar7 = 1;
  }
  else {
    iVar1 = *(int *)(unaff_x19 + 0x20) + 1;
    iVar2 = 0;
    if (in_w9 != 0) {
      iVar2 = iVar1 / (int)in_w9;
    }
    lVar7 = (long)(int)(iVar1 - iVar2 * in_w9);
  }
  if (in_w9 <= (uint)lVar7) goto LAB_02aeed84;
  *unaff_x20 = *(long *)(param_1 + lVar7 * 8 + 0x20);
  thunk_FUN_01656ef8();
  lVar7 = **(long **)(*unaff_x25 + 0xb8);
  if (lVar7 == 0) {
    return;
  }
  plVar3 = (long *)FUN_0160edfc(*unaff_x22,4);
  lVar4 = thunk_FUN_015d01b0(*unaff_x24,&stack0x0000000c);
  if (plVar3 == (long *)0x0) {
LAB_02aeed80:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_02aeed88;
  if ((int)plVar3[3] == 0) goto LAB_02aeed84;
  plVar3[4] = lVar4;
  thunk_FUN_01656ef8(plVar3 + 4,lVar4);
  if (*unaff_x20 == 0) goto LAB_02aeed80;
  in_stack_00000008 = *(undefined4 *)(*unaff_x20 + 0x30);
  lVar4 = thunk_FUN_015d01b0(*unaff_x24,&stack0x00000008);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_02aeed88;
  if (*(uint *)(plVar3 + 3) < 2) goto LAB_02aeed84;
  plVar3[5] = lVar4;
  thunk_FUN_01656ef8(plVar3 + 5,lVar4);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_02aeed80;
  in_stack_00000000._4_4_ = (undefined4)*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
  lVar4 = thunk_FUN_015d01b0(*unaff_x24,(long)&stack0x00000000 + 4);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_02aeed88:
    uVar6 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar6,0);
  }
  if (2 < *(uint *)(plVar3 + 3)) {
    plVar3[6] = lVar4;
    thunk_FUN_01656ef8(plVar3 + 6,lVar4);
    lVar4 = thunk_FUN_015d01b0(*unaff_x24);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_02aeed88;
    if (3 < *(uint *)(plVar3 + 3)) {
      plVar3[7] = lVar4;
      thunk_FUN_01656ef8(plVar3 + 7,lVar4);
      uVar6 = FUN_0252739c(*unaff_x23,plVar3,0);
      plVar3 = *(long **)(lVar7 + 0x18);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x198))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x1a0));
        return;
      }
      goto LAB_02aeed80;
    }
  }
LAB_02aeed84:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


