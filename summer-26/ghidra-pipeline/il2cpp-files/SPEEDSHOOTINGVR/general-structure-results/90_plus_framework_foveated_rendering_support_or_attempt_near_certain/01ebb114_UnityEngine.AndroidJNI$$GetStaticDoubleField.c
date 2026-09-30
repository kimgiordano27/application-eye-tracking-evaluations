/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$GetStaticDoubleField
ENTRY_POINT: 01ebb114
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_AndroidJNI__GetStaticDoubleField(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0247eec0 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetFoveationEyeTrackedSupported";
    uStack_38 = 0x24;
    local_28 = 8;
    local_30 = DAT_00657688;
    local_24 = 0;
    DAT_0247eec0 = (code *)thunk_FUN_01040398(&local_50);
  }
  (*DAT_0247eec0)(param_1);
  return;
}


