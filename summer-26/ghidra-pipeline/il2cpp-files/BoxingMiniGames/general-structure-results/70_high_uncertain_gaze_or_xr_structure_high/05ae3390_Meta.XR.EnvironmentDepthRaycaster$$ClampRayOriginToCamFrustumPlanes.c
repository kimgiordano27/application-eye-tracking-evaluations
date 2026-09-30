/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClampRayOriginToCamFrustumPlanes
ENTRY_POINT: 05ae3390
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


long Meta_XR_EnvironmentDepthRaycaster__ClampRayOriginToCamFrustumPlanes(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  thunk_FUN_03650fbc();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = FUN_05ae345c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
    thunk_FUN_03650fbc();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    **(long **)(lVar2 + 0xb8) = lVar1;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    thunk_FUN_036b7ad0(*(undefined8 *)(lVar2 + 0xb8),lVar1);
  }
  return lVar1;
}


