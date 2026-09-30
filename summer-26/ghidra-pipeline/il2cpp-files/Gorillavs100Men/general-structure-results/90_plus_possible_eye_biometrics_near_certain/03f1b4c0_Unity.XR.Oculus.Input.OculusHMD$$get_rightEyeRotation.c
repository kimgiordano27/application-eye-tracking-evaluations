/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation
ENTRY_POINT: 03f1b4c0
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


long Unity_XR_Oculus_Input_OculusHMD__get_rightEyeRotation(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if ((*(byte *)(unaff_x19 + 0xade) & 1) == 0) {
    FUN_020612a4(PTR_DAT_046bf1d8);
    FUN_020612a4(PTR_DAT_046bf1e0);
    FUN_020612a4(PTR_DAT_046bf1e8);
    FUN_020612a4(PTR_DAT_046bf1f0);
    FUN_020612a4(StringLiteral_8731);
    *(undefined1 *)(unaff_x19 + 0xade) = 1;
  }
  puVar2 = StringLiteral_8731;
  lVar4 = FUN_03f0c2e8(param_1);
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar4 + 0x58);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
  uVar5 = FUN_040cbf6c(param_1,uVar8,0);
  puVar3 = PTR_DAT_046bf1e8;
  puVar2 = PTR_DAT_046bf1d8;
  if ((uVar5 & 1) != 0) {
    lVar4 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046bf1f0);
    FUN_034b1d4c(lVar4,*(undefined8 *)puVar3);
    uVar8 = thunk_FUN_040cfa2c(param_1,0);
    uVar9 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_020b5864(*(long *)(StringLiteral_8735 + 0xe0));
    }
    uVar9 = FUN_03842574(uVar9,0);
    FUN_040e5244(uVar8,0,uVar9,0);
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)PTR_DAT_046bf1e0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x20;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000008;
          *(undefined8 *)(lVar6 + 0x20) = in_stack_00000000;
          *(undefined8 *)(lVar6 + 0x38) = in_stack_00000018;
          *(undefined8 *)(lVar6 + 0x30) = in_stack_00000010;
          thunk_FUN_020ccb58(lVar6 + 0x20,0);
        }
        else {
          in_stack_00000048 = in_stack_00000008;
          in_stack_00000040 = in_stack_00000000;
          in_stack_00000058 = in_stack_00000018;
          in_stack_00000050 = in_stack_00000010;
          FUN_034b2640(lVar4,&stack0x00000040,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        return lVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  lVar4 = FUN_03f0eae8(param_1);
  return lVar4;
}


