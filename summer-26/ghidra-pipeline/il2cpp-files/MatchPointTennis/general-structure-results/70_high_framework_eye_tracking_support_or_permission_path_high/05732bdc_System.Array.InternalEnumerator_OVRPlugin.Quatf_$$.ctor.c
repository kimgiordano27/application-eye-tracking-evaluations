/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$.ctor
ENTRY_POINT: 05732bdc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>___ctor
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c =
       System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
                 (param_1,param_2,
                  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48));
  thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28),
                     &stack0x0000000c);
  return;
}


