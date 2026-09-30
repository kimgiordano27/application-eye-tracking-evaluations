/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05730d7c
PROGRAM: Untangled-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_x9;
  
                    /* WARNING: Could not recover jumptable at 0x05730d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x9 + 0x6a8))(param_2,param_1,param_4,*(undefined8 *)(in_x9 + 0x6b0));
  return;
}


