/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnEnvironmentRaycasterCreated$$EndInvoke
ENTRY_POINT: 04dd755c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated__EndInvoke(long param_1)

{
  uint uVar1;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  uVar1 = Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished__BeginInvoke();
  return (uVar1 ^ 0xffffffff) & 1;
}


