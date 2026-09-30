/*
FUNCTION_NAME: Oculus.Movement.Tracking.BlendshapeModifier.FaceExpressionModifierArray$$.ctor
ENTRY_POINT: 02ae0354
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context
*/


undefined8
Oculus_Movement_Tracking_BlendshapeModifier_FaceExpressionModifierArray___ctor(long param_1)

{
  ulong uVar1;
  long in_x4;
  undefined8 *unaff_x19;
  long in_stack_00000008;
  
  uVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x28) + 8))();
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(in_x4 + 0x20) + 0xc0) + 0x98) + 8))();
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  *unaff_x19 = 0;
  return 0;
}


