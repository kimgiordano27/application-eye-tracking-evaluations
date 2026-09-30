/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 06dea7d8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0xb0) + 8;
    do {
      if (*(long *)(lVar1 + -8) == param_3) goto LAB_06dea81c;
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 != 0);
  }
  FUN_03d8f370();
LAB_06dea81c:
  FUN_068527b4();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_06deaf7c();
  return;
}


