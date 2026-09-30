/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastRoomDelegate$$EndInvoke
ENTRY_POINT: 04dd9440
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastRoomDelegate__EndInvoke
               (void *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  memset(param_1,0,0x208);
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  FUN_04ade228(param_1,param_2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x2b8));
  return;
}


