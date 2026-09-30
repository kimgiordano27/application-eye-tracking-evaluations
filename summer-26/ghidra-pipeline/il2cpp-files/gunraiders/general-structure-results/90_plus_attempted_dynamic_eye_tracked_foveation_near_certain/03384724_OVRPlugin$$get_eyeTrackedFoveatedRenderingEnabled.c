/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03384724
PROGRAM: gunraiders-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(long param_1,short param_2)

{
  bool bVar1;
  short sVar2;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    bVar1 = false;
  }
  else {
    sVar2 = FUN_0314e438(param_1,*(int *)(param_1 + 0x10) + -1,0);
    bVar1 = sVar2 == param_2;
  }
  return bVar1;
}


