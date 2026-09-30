/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyePosition
ENTRY_POINT: 03a444dc
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


long UnityEngine_InputSystem_XR_EyesControl__get_rightEyePosition(double param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 in_w8;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  double in_stack_00000000;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  double dStack0000000000000030;
  double dStack0000000000000038;
  
  *(undefined1 *)(unaff_x19 + 0x70f) = in_w8;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  dStack0000000000000038 = 0.0;
  dStack0000000000000030 = 0.0;
  if (param_1 != 1.0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
    unaff_x20 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046a70c0);
    FUN_034bc64c(unaff_x20,uVar1,*(undefined8 *)PTR_DAT_046a70b8);
    FUN_034bd874(&stack0x00000020);
    puVar4 = PTR_DAT_046a70b0;
    puVar3 = PTR_DAT_046a7088;
    while (uVar5 = FUN_02ffa3b0(&stack0x00000020,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      if (unaff_x20 == 0) {
LAB_03a44600:
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      lVar6 = *(long *)(unaff_x20 + 0x10);
      lVar7 = *(long *)puVar4;
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_03a44600;
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar2 * 0x10;
        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
        *(double *)(lVar6 + 0x28) = dStack0000000000000038 * in_stack_00000000;
        *(double *)(lVar6 + 0x20) = dStack0000000000000030 * in_stack_00000000;
      }
      else {
        FUN_034bce6c(dStack0000000000000030 * in_stack_00000000,
                     dStack0000000000000038 * in_stack_00000000,unaff_x20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_02ffa3ac(&stack0x00000020,*(undefined8 *)PTR_DAT_046a7080);
  }
  return unaff_x20;
}


