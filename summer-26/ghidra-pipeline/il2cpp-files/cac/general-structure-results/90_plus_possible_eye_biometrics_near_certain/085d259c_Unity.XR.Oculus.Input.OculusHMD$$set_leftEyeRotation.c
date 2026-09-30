/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation
ENTRY_POINT: 085d259c
PROGRAM: cac-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyeRotation(void)

{
  int iVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  int iVar2;
  int *unaff_x23;
  undefined4 *unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  ulong in_d4;
  undefined4 in_s5;
  undefined4 unaff_s8;
  undefined4 uVar15;
  undefined4 unaff_s9;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  float unaff_s14;
  undefined4 unaff_s15;
  undefined4 uVar20;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  float fStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000048;
  int *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000098;
  float in_stack_000000a0;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  
  fStack0000000000000008 = unaff_s14;
  while (uStack0000000000000000 = unaff_s12, uStack0000000000000004 = unaff_s13,
        uStack0000000000000010 = unaff_s15, uStack0000000000000014 = unaff_s8,
        uStack0000000000000018 = unaff_s9, fVar9 = in_stack_00000078._4_4_,
        FUN_085cfc9c(in_stack_00000080,in_stack_00000060,in_stack_00000078._4_4_,
                     in_stack_00000098._4_4_,in_d4,in_s5,(long)&stack0x000000b0 + 4,&stack0x000000b8
                    ), fVar4 = fStack00000000000000b4, in_stack_000000a0 < fStack00000000000000b4) {
    *unaff_x23 = unaff_w25;
    iVar2 = 0;
    if (unaff_w27 != 0) {
      iVar2 = (unaff_w25 + 1) / unaff_w27;
    }
    in_stack_00000098._4_4_ = *(undefined4 *)unaff_x20;
    uVar17 = *(uint *)((long)unaff_x20 + 4);
    in_s5 = *(undefined4 *)(unaff_x20 + 1);
    unaff_w25 = (unaff_w25 + 1) - iVar2 * unaff_w27;
    unaff_s13 = in_stack_00000098._4_4_;
    unaff_s12 = FUN_05763aa8();
    unaff_s15 = *unaff_x24;
    unaff_s8 = unaff_x24[1];
    unaff_s9 = unaff_x24[2];
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    in_d4 = (ulong)uVar17;
    fStack0000000000000008 = fVar9;
    in_stack_000000a0 = fVar4;
  }
  uVar11 = (ulong)(uint)in_stack_00000078._4_4_;
  in_stack_00000078._4_4_ = in_stack_00000078._4_4_ + in_stack_000000a0 * *(float *)(unaff_x20 + 1);
  uVar10 = (ulong)(uint)in_stack_00000078._4_4_;
  *in_stack_00000038 =
       CONCAT44((float)in_stack_00000060 + (float)((ulong)*unaff_x20 >> 0x20) * in_stack_000000a0,
                (float)in_stack_00000080 + (float)*unaff_x20 * in_stack_000000a0);
  *(float *)(in_stack_00000038 + 1) = in_stack_00000078._4_4_;
  uVar5 = FUN_05763aa8();
  iVar2 = *unaff_x23;
  uVar12 = uVar11;
  fVar4 = 0.0;
  do {
    fVar9 = fVar4;
    fVar4 = (float)uVar12;
    *in_stack_00000058 = iVar2;
    iVar1 = 0;
    if (unaff_w27 != 0) {
      iVar1 = (iVar2 + 1) / unaff_w27;
    }
    uVar7 = *(undefined4 *)unaff_x19;
    uVar18 = *(undefined4 *)((long)unaff_x19 + 4);
    uVar19 = *(undefined4 *)(unaff_x19 + 1);
    iVar2 = (iVar2 + 1) - iVar1 * unaff_w27;
    uVar8 = uVar7;
    uVar3 = FUN_05763aa8();
    uVar20 = *(undefined4 *)unaff_x20;
    uVar15 = *(undefined4 *)((long)unaff_x20 + 4);
    uVar16 = *(undefined4 *)(unaff_x20 + 1);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = uVar11 & 0xffffffff;
    uStack0000000000000000 = uVar3;
    uStack0000000000000004 = uVar8;
    fStack0000000000000008 = fVar4;
    uStack0000000000000010 = uVar20;
    uStack0000000000000014 = uVar15;
    uStack0000000000000018 = uVar16;
    FUN_085cfc9c(uVar5,uVar10,uVar12,uVar7,uVar18,uVar19,&stack0x000000b0,&stack0x000000b8);
    fVar4 = fStack00000000000000b0;
  } while (fVar9 < fStack00000000000000b0);
  fVar4 = (float)uVar5 + (float)*unaff_x19 * fVar9;
  fVar6 = (float)uVar10 + (float)((ulong)*unaff_x19 >> 0x20) * fVar9;
  fVar9 = (float)uVar11 + fVar9 * *(float *)(unaff_x19 + 1);
  *in_stack_00000030 = CONCAT44(fVar6,fVar4);
  *(float *)(in_stack_00000030 + 1) = fVar9;
  fVar13 = *(float *)(unaff_x26 + 1);
  fVar14 = *(float *)(in_stack_00000038 + 1);
  *in_stack_00000048 =
       CONCAT44((fVar6 + (float)((ulong)*unaff_x26 >> 0x20)) -
                (float)((ulong)*in_stack_00000038 >> 0x20),
                (fVar4 + (float)*unaff_x26) - (float)*in_stack_00000038);
  *(float *)(in_stack_00000048 + 1) = (fVar9 + fVar13) - fVar14;
  return;
}


