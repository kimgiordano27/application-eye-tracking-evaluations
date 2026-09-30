/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation
ENTRY_POINT: 085d2614
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


void Unity_XR_Oculus_Input_OculusHMD__set_rightEyeRotation
               (undefined1 param_1 [16],undefined8 param_2,float param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *unaff_x19;
  int iVar2;
  int *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000048;
  int *in_stack_00000058;
  float fStack000000000000007c;
  undefined4 uStack000000000000009c;
  float in_stack_000000b0;
  
  *(int *)(unaff_x25 + 1) = (int)param_2;
  fStack000000000000007c = param_3;
  uVar4 = FUN_05763aa8(param_4,*unaff_x23);
  iVar2 = *unaff_x23;
  fVar3 = 0.0;
  do {
    fVar6 = fVar3;
    *in_stack_00000058 = iVar2;
    iVar1 = 0;
    if (unaff_w27 != 0) {
      iVar1 = (iVar2 + 1) / unaff_w27;
    }
    uStack000000000000009c = *(undefined4 *)unaff_x19;
    uVar8 = *(undefined4 *)((long)unaff_x19 + 4);
    uVar9 = *(undefined4 *)(unaff_x19 + 1);
    iVar2 = (iVar2 + 1) - iVar1 * unaff_w27;
    FUN_05763aa8();
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_085cfc9c(uVar4,param_2,fStack000000000000007c,uStack000000000000009c,uVar8,uVar9,
                 &stack0x000000b0,&stack0x000000b8);
    fVar3 = in_stack_000000b0;
  } while (fVar6 < in_stack_000000b0);
  fVar3 = (float)uVar4 + (float)*unaff_x19 * fVar6;
  fVar5 = (float)param_2 + (float)((ulong)*unaff_x19 >> 0x20) * fVar6;
  fStack000000000000007c = fStack000000000000007c + fVar6 * *(float *)(unaff_x19 + 1);
  *in_stack_00000030 = CONCAT44(fVar5,fVar3);
  *(float *)(in_stack_00000030 + 1) = fStack000000000000007c;
  fVar6 = *(float *)(unaff_x26 + 1);
  fVar7 = *(float *)(unaff_x25 + 1);
  *in_stack_00000048 =
       CONCAT44((fVar5 + (float)((ulong)*unaff_x26 >> 0x20)) - (float)((ulong)*unaff_x25 >> 0x20),
                (fVar3 + (float)*unaff_x26) - (float)*unaff_x25);
  *(float *)(in_stack_00000048 + 1) = (fStack000000000000007c + fVar6) - fVar7;
  return;
}


