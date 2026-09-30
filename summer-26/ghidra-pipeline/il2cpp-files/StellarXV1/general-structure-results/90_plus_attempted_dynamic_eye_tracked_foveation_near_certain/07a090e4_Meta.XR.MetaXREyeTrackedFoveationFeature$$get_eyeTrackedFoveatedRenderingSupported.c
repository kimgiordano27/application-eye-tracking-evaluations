/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 07a090e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 134
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long unaff_x19;
  undefined4 *unaff_x20;
  float fVar1;
  
  fVar1 = (float)FUN_089dda60(*unaff_x20);
  return param_3 * param_3 + fVar1 * fVar1 + param_2 * param_2 <=
         *(float *)(unaff_x19 + 0x28) * *(float *)(unaff_x19 + 0x28);
}


