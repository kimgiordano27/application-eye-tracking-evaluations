/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation
ENTRY_POINT: 083ef1c0
PROGRAM: m3ar-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


long Unity_XR_Oculus_Input_OculusHMD__get_leftEyeRotation(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_d8;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x448));
  FUN_0403162c(PTR_DAT_08f65740);
  *(undefined1 *)(unaff_x20 + 0x264) = 1;
  if ((unaff_d8 >> 0x34 & 0x7ff) < 0x7ff) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar1 = FUN_07475db8(0);
    lVar2 = FUN_074cc144(&stack0x00000008,uVar1,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar3 = FUN_0736e238(lVar2,*(undefined8 *)PTR_DAT_08f65740,0);
    if ((((uVar3 & 1) == 0) &&
        (uVar3 = FUN_0736e238(lVar2,*(undefined8 *)PTR_DAT_08f67210,0), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_0736e238(lVar2,*(undefined8 *)PTR_DAT_08f76158,0), (uVar3 & 1) == 0)) {
      lVar2 = FUN_0735c7b4(lVar2,*(undefined8 *)PTR_DAT_08fa6448,0);
    }
  }
  else {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar1 = FUN_07475db8(0);
    lVar2 = FUN_074cc144(&stack0x00000008,uVar1,0);
  }
  return lVar2;
}


