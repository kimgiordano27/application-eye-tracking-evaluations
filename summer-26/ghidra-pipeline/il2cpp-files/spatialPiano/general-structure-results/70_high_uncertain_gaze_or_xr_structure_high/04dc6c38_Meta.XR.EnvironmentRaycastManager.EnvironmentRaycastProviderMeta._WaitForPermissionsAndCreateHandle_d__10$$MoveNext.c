/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderMeta.<WaitForPermissionsAndCreateHandle>d__10$$MoveNext
ENTRY_POINT: 04dc6c38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_permission_setup
*/


long Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderMeta_<WaitForPermissionsAndCreateHandle>d__10__MoveNext
               (long param_1,int param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c(lVar1);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x60);
  if ((*(ushort *)(*(long *)(lVar1 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79d2 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79d2 = '\x01';
  }
  lVar1 = *(long *)(lVar1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  return param_1 + param_2 + 2;
}


