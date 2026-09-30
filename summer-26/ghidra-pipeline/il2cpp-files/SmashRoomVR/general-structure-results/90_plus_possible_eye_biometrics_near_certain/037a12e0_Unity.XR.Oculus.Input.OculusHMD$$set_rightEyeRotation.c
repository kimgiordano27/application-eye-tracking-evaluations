/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation
ENTRY_POINT: 037a12e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 149
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_rightEyeRotation
               (undefined8 param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  long unaff_x22;
  uint uStack000000000000000c;
  
  puVar1 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if ((*(byte *)(unaff_x22 + 0xf20) & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    *(undefined1 *)(unaff_x22 + 0xf20) = 1;
  }
  uStack000000000000000c = (param_2 & 0xff) >> (ulong)(param_3 & 0x1f);
  thunk_FUN_01afa70c(*(undefined8 *)puVar1,&stack0x0000000c);
  return;
}


