/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07a2245c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled
               (long param_1,float param_2,float param_3,float param_4,long param_5)

{
  float in_w9;
  float fVar1;
  
  fVar1 = *(float *)(param_5 + 100);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 200) * in_w9;
  *(float *)(param_1 + 0x68) =
       *(float *)(param_1 + 200) * ((((param_3 + param_4) - param_2) - fVar1) / (param_3 + param_4))
  ;
  FUN_0797afa4(param_1,0);
  return;
}


