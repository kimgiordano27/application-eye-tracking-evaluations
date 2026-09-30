/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 0579219c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel(ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02feb2c4();
  }
  lVar2 = **(long **)(param_2 + 0xb8);
  thunk_FUN_02fc2c1c();
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = FUN_05792244(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
    thunk_FUN_02fc2c1c();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    **(long **)(lVar1 + 0xb8) = lVar2;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    thunk_FUN_03048534(*(undefined8 *)(lVar1 + 0xb8),lVar2);
  }
  return lVar2;
}


