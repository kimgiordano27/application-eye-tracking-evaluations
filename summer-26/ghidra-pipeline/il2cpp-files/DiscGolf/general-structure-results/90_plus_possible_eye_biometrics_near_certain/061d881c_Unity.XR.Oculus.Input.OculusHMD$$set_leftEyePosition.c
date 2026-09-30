/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition
ENTRY_POINT: 061d881c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyePosition(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  
  thunk_FUN_02df485c();
  lVar1 = FUN_0376b380();
  if (lVar1 != 0) {
    lVar1 = FUN_0634ee08(lVar1,0);
    *unaff_x20 = lVar1;
    LeanTween__value();
    lVar1 = *unaff_x20;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar2 = FUN_0634eb94(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*unaff_x20 != 0) && (lVar1 = FUN_0634bbcc(*unaff_x20,0), lVar1 != 0)) {
      FUN_0634f038(lVar1,*(char *)(unaff_x19 + 0x58) == '\0',0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


