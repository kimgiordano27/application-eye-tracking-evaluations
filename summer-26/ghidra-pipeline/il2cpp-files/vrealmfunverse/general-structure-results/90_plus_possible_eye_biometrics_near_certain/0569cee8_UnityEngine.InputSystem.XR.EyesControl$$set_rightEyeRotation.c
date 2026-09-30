/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation
ENTRY_POINT: 0569cee8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0569cf48) */

undefined8 UnityEngine_InputSystem_XR_EyesControl__set_rightEyeRotation(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = FUN_04ca74d8();
  uVar2 = thunk_FUN_02b488a8(lVar1,0);
  if (lVar1 != 0) {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04ca6e50(lVar1,0);
  }
  return uVar2;
}


