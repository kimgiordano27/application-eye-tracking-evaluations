/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 02bc1b7c
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint OVRFaceExpressions__ToArray(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x24;
  long *unaff_x26;
  double dVar8;
  double dVar9;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  double in_stack_00000038;
  
  uVar6 = FUN_02bbe850();
  if ((uVar6 & 1) == 0) {
LAB_02bc1c04:
    FUN_02bc7d70();
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 02bc1b9c to 02cc1b9f has its CatchHandler @ 02bc1c38 */
                    /* try { // try from 02bc1ba0 to 02cc1bab has its CatchHandler @ 02bc1c40 */
    FUN_02bc723c();
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 02bc1bbc to 02cc1bdb has its CatchHandler @ 02bc1c48 */
    uVar6 = FUN_02bc6e64();
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
                    /* try { // try from 02bc1bdc to 02cc1be7 has its CatchHandler @ 02bc1c3c */
      uVar6 = FUN_02bbe850();
      if ((uVar6 & 1) == 0) goto LAB_02bc1c04;
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar6 = FUN_02bc601c();
    if ((uVar6 & 1) != 0) goto LAB_02bc1c04;
    if (*(int *)(*(long *)PTR_DAT_03806f58 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    plVar7 = (long *)FUN_02b6c994(0);
    uVar2 = *(undefined4 *)(unaff_x22 + 0x10);
    uVar3 = FUN_02bc7c3c();
    uVar4 = FUN_02bc7c3c();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar6 = (**(code **)(*plVar7 + 0x2b8))
                      (plVar7,uVar2,uVar3,uVar4,uStack0000000000000034,uStack0000000000000030,
                       in_stack_00000028._4_4_,0);
    dVar9 = in_stack_00000020;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      dVar9 = dVar9 * DAT_009a5ab0;
      dVar8 = modf(dVar9,&stack0x00000038);
      if (0.0 <= dVar9) {
        if (dVar8 == 0.5) {
          dVar9 = 1.0;
          goto LAB_02bc1d50;
        }
        dVar8 = (double)(long)(dVar9 + 0.5);
      }
      else if (dVar8 == -0.5) {
        dVar9 = -1.0;
LAB_02bc1d50:
        dVar8 = in_stack_00000038;
        if (((long)in_stack_00000038 & 1U) != 0) {
          dVar8 = in_stack_00000038 + dVar9;
        }
      }
      else {
        dVar8 = (double)(long)(dVar9 + -0.5);
      }
      if (*(int *)(*(long *)PTR_DAT_037f3058 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar1 = -0x8000000000000000;
      if (dVar8 != INFINITY) {
        lVar1 = (long)dVar8;
      }
      in_stack_00000018 = FUN_02bb0d94(&stack0x00000018,lVar1);
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000018;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar5 = FUN_02bc206c();
      goto LAB_02bc1c14;
    }
    FUN_02bc7dc0();
  }
  uVar5 = 0;
LAB_02bc1c14:
  return uVar5 & 1;
}


