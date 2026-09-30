/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition
ENTRY_POINT: 085d2584
PROGRAM: cac-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyePosition(long param_1)

{
  int iVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  int iVar2;
  int *unaff_x23;
  int unaff_w25;
  undefined8 *unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined4 unaff_s10;
  undefined4 uVar12;
  undefined4 unaff_s11;
  undefined4 uVar13;
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
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_085cfc9c(in_stack_00000080,in_stack_00000060,in_stack_00000078._4_4_,in_stack_00000098._4_4_
                 ,unaff_s10,unaff_s11,(long)&stack0x000000b0 + 4,&stack0x000000b8);
    fVar3 = fStack00000000000000b4;
    if (fStack00000000000000b4 <= in_stack_000000a0) break;
    *unaff_x23 = unaff_w25;
    iVar2 = 0;
    if (unaff_w27 != 0) {
      iVar2 = (unaff_w25 + 1) / unaff_w27;
    }
    in_stack_00000098._4_4_ = *(undefined4 *)unaff_x20;
    unaff_s10 = *(undefined4 *)((long)unaff_x20 + 4);
    unaff_s11 = *(undefined4 *)(unaff_x20 + 1);
    unaff_w25 = (unaff_w25 + 1) - iVar2 * unaff_w27;
    FUN_05763aa8();
    param_1 = *unaff_x28;
    in_stack_000000a0 = fVar3;
  }
  uVar9 = (ulong)(uint)in_stack_00000078._4_4_;
  in_stack_00000078._4_4_ = in_stack_00000078._4_4_ + in_stack_000000a0 * *(float *)(unaff_x20 + 1);
  uVar8 = (ulong)(uint)in_stack_00000078._4_4_;
  *in_stack_00000038 =
       CONCAT44((float)in_stack_00000060 + (float)((ulong)*unaff_x20 >> 0x20) * in_stack_000000a0,
                (float)in_stack_00000080 + (float)*unaff_x20 * in_stack_000000a0);
  *(float *)(in_stack_00000038 + 1) = in_stack_00000078._4_4_;
  uVar4 = FUN_05763aa8();
  iVar2 = *unaff_x23;
  fVar3 = 0.0;
  do {
    fVar7 = fVar3;
    *in_stack_00000058 = iVar2;
    iVar1 = 0;
    if (unaff_w27 != 0) {
      iVar1 = (iVar2 + 1) / unaff_w27;
    }
    uVar6 = *(undefined4 *)unaff_x19;
    uVar12 = *(undefined4 *)((long)unaff_x19 + 4);
    uVar13 = *(undefined4 *)(unaff_x19 + 1);
    iVar2 = (iVar2 + 1) - iVar1 * unaff_w27;
    FUN_05763aa8();
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_085cfc9c(uVar4,uVar8,uVar9 & 0xffffffff,uVar6,uVar12,uVar13,&stack0x000000b0,
                 &stack0x000000b8);
    fVar3 = fStack00000000000000b0;
  } while (fVar7 < fStack00000000000000b0);
  fVar3 = (float)uVar4 + (float)*unaff_x19 * fVar7;
  fVar5 = (float)uVar8 + (float)((ulong)*unaff_x19 >> 0x20) * fVar7;
  fVar7 = (float)uVar9 + fVar7 * *(float *)(unaff_x19 + 1);
  *in_stack_00000030 = CONCAT44(fVar5,fVar3);
  *(float *)(in_stack_00000030 + 1) = fVar7;
  fVar10 = *(float *)(unaff_x26 + 1);
  fVar11 = *(float *)(in_stack_00000038 + 1);
  *in_stack_00000048 =
       CONCAT44((fVar5 + (float)((ulong)*unaff_x26 >> 0x20)) -
                (float)((ulong)*in_stack_00000038 >> 0x20),
                (fVar3 + (float)*unaff_x26) - (float)*in_stack_00000038);
  *(float *)(in_stack_00000048 + 1) = (fVar7 + fVar10) - fVar11;
  return;
}


