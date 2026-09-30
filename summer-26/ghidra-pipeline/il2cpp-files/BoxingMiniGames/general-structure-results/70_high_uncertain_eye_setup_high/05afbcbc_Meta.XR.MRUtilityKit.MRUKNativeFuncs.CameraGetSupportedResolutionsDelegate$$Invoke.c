/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.CameraGetSupportedResolutionsDelegate$$Invoke
ENTRY_POINT: 05afbcbc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_CameraGetSupportedResolutionsDelegate__Invoke
               (long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  lVar3 = **(long **)(param_1 + 0xb8);
  thunk_FUN_03650fbc();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar3 = FUN_05afbd70(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    thunk_FUN_03650fbc();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    **(long **)(lVar1 + 0xb8) = lVar3;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    thunk_FUN_036b7ad0(*(undefined8 *)(lVar1 + 0xb8),lVar3);
  }
  return lVar3;
}


