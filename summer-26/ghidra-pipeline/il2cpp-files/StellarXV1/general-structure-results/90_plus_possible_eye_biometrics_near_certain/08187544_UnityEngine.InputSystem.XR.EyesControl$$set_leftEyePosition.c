/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition
ENTRY_POINT: 08187544
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__set_leftEyePosition(long param_1)

{
  long unaff_x19;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (*(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10),
     *(int *)(param_1 + 0x18) != 1)) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


