/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 070b4d4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


bool System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long in_x9;
  
  uVar2 = (**(code **)(in_x9 + 0x1b8))
                    (*(undefined4 *)(param_1 + 0x2c),param_2,*(undefined8 *)(in_x9 + 0x1c0));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_070b5f88();
  }
  return bVar1;
}


