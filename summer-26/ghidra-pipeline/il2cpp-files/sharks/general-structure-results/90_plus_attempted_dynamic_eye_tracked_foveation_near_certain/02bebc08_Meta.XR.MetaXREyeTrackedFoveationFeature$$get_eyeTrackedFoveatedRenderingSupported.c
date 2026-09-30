/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 02bebc08
PROGRAM: sharks-libil2cpp.so
SCORE: 134
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported
               (undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_037f3df8;
  if ((DAT_03a25d0a & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f3df8);
    DAT_03a25d0a = 1;
  }
  uVar1 = *param_1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02b4ee0c(uVar1,0);
  return;
}


