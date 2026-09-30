/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastAnchorDelegate$$EndInvoke
ENTRY_POINT: 04dd98b4
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


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastAnchorDelegate__EndInvoke(ulong param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79e7 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79e7 = '\x01';
  }
  lVar1 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  *(undefined4 *)(unaff_x21 + (long)unaff_w20 * 4 + 4) = unaff_w19;
  return;
}


