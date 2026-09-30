/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation
ENTRY_POINT: 03a444fc
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


long UnityEngine_InputSystem_XR_EyesControl__set_rightEyeRotation(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  double in_stack_00000000;
  double in_stack_00000030;
  double in_stack_00000038;
  
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  lVar5 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046a70c0);
  FUN_034bc64c(lVar5,uVar1,*(undefined8 *)PTR_DAT_046a70b8);
  FUN_034bd874(&stack0x00000020);
  puVar4 = PTR_DAT_046a70b0;
  puVar3 = PTR_DAT_046a7088;
  while( true ) {
    uVar6 = FUN_02ffa3b0(&stack0x00000020,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) {
      FUN_02ffa3ac(&stack0x00000020,*(undefined8 *)PTR_DAT_046a7080);
      return lVar5;
    }
    if (lVar5 == 0) break;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar2 * 0x10;
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      *(double *)(lVar7 + 0x28) = in_stack_00000038 * in_stack_00000000;
      *(double *)(lVar7 + 0x20) = in_stack_00000030 * in_stack_00000000;
    }
    else {
      FUN_034bce6c(in_stack_00000030 * in_stack_00000000,in_stack_00000038 * in_stack_00000000,lVar5
                   ,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


