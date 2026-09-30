/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition
ENTRY_POINT: 085d25f4
PROGRAM: cac-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__get_rightEyePosition
               (undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  int iVar3;
  int *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000048;
  int *in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined4 uStack000000000000009c;
  float in_stack_000000b0;
  
  uVar8 = (ulong)(uint)in_stack_00000078._4_4_;
  in_stack_00000078._4_4_ = in_stack_00000078._4_4_ + param_5 * param_2;
  uVar7 = (ulong)(uint)in_stack_00000078._4_4_;
  *unaff_x25 = CONCAT44(param_4 + (float)((ulong)param_1 >> 0x20) * param_5,
                        param_3 + (float)param_1 * param_5);
  uVar2 = *unaff_x29;
  *(float *)(unaff_x25 + 1) = in_stack_00000078._4_4_;
  uVar2 = FUN_05763aa8(param_6,*unaff_x23,uVar2);
  iVar3 = *unaff_x23;
  fVar4 = 0.0;
  do {
    fVar6 = fVar4;
    *in_stack_00000058 = iVar3;
    iVar1 = 0;
    if (unaff_w27 != 0) {
      iVar1 = (iVar3 + 1) / unaff_w27;
    }
    uStack000000000000009c = *(undefined4 *)unaff_x19;
    uVar11 = *(undefined4 *)((long)unaff_x19 + 4);
    uVar12 = *(undefined4 *)(unaff_x19 + 1);
    iVar3 = (iVar3 + 1) - iVar1 * unaff_w27;
    FUN_05763aa8();
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_085cfc9c(uVar2,uVar7,uVar8 & 0xffffffff,uStack000000000000009c,uVar11,uVar12,
                 &stack0x000000b0,&stack0x000000b8);
    fVar4 = in_stack_000000b0;
  } while (fVar6 < in_stack_000000b0);
  fVar4 = (float)uVar2 + (float)*unaff_x19 * fVar6;
  fVar5 = (float)uVar7 + (float)((ulong)*unaff_x19 >> 0x20) * fVar6;
  fVar6 = (float)uVar8 + fVar6 * *(float *)(unaff_x19 + 1);
  *in_stack_00000030 = CONCAT44(fVar5,fVar4);
  *(float *)(in_stack_00000030 + 1) = fVar6;
  fVar9 = *(float *)(unaff_x26 + 1);
  fVar10 = *(float *)(unaff_x25 + 1);
  *in_stack_00000048 =
       CONCAT44((fVar5 + (float)((ulong)*unaff_x26 >> 0x20)) - (float)((ulong)*unaff_x25 >> 0x20),
                (fVar4 + (float)*unaff_x26) - (float)*unaff_x25);
  *(float *)(in_stack_00000048 + 1) = (fVar6 + fVar9) - fVar10;
  return;
}


