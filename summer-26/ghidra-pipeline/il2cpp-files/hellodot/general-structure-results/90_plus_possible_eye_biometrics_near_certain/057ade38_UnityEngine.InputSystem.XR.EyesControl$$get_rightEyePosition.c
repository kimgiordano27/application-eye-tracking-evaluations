/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyePosition
ENTRY_POINT: 057ade38
PROGRAM: hellodot-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__get_rightEyePosition(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  undefined8 uVar5;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  lVar2 = *unaff_x26;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *unaff_x26;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar2 = *unaff_x26;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06628878);
    FUN_04a5632c(uVar3,uVar5,*(undefined8 *)PTR_DAT_066288e8,0);
    *(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 8) = uVar3;
  }
  plVar4 = (long *)FUN_033df7a8();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06628588 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06628588)) {
      *(undefined1 *)((long)plVar4 + 0x1c) = 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x98) != 0) && (*(long *)(*(long *)(unaff_x20 + 0x98) + 0x10) != 0)) {
    FUN_034ff41c(&stack0x00000060);
    in_stack_00000050 = in_stack_00000070;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000070;
    *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000068;
    *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000060;
    *(byte *)(unaff_x20 + 0xd8) = unaff_w21 & 1;
    if (*(long *)(unaff_x20 + 0x98) != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x98) + 0x10);
      in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0xb8);
      in_stack_00000068 = *(undefined8 *)(unaff_x20 + 0xb0);
      in_stack_00000060 = *(undefined8 *)(unaff_x20 + 0xa8);
      FUN_0410ad0c(&stack0x00000008,&stack0x00000060,*(undefined8 *)PTR_DAT_065de370);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (lVar2 != 0) {
        in_stack_00000068 = in_stack_00000010;
        in_stack_00000060 = in_stack_00000008;
        in_stack_00000070 = in_stack_00000018;
        FUN_035019f0(&stack0x00000008,lVar2);
        unaff_x19[2] = in_stack_00000018;
        unaff_x19[1] = in_stack_00000010;
        *unaff_x19 = in_stack_00000008;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


