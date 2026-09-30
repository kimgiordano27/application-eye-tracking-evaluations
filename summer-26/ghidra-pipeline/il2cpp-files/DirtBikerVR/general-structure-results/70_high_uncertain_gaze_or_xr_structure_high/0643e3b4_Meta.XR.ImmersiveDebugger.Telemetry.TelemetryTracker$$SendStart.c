/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 0643e3b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40)) {
    thunk_FUN_03ac7604();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090(lVar2);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
      thunk_FUN_03ac7604();
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8ad40();
}


