/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$ToFloatArray
ENTRY_POINT: 01ebb8a8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 90
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_AndroidJNI__ToFloatArray(void)

{
  code *pcVar1;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_GetEyeTrackingEnabled";
  uStack0000000000000018 = 0x1a;
  uStack0000000000000028 = 8;
  uStack0000000000000020 = DAT_00657688;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_01040398();
  *(code **)(unaff_x20 + 0xf40) = pcVar1;
  (*pcVar1)();
  return;
}


