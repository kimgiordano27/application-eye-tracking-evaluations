/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastAnchorAllDelegate$$Invoke
ENTRY_POINT: 04dd9968
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


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastAnchorAllDelegate__Invoke(long param_1)

{
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x60);
  if ((*(ushort *)(*(long *)(lVar1 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79e7 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79e7 = '\x01';
  }
  lVar1 = *(long *)(lVar1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  return unaff_x20 + (long)unaff_w19 * 4 + 4;
}


