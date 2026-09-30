/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05ba6308
PROGRAM: waitwhat-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  FUN_06a63558(unaff_s8 + param_2,unaff_s9 + param_3,unaff_s10 + param_4);
  return;
}


