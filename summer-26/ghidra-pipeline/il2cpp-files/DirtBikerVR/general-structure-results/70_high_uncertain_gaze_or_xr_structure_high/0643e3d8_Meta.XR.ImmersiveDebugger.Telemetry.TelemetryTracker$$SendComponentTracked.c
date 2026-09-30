/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 0643e3d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  
  lVar2 = *(long *)(param_1 + 0x48);
  uStack0000000000000030 = *(undefined8 *)(param_3 + 0x10);
  uStack0000000000000020 = param_2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090(lVar2);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
    thunk_FUN_03ac7604();
    uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8ad40();
}


