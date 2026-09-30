/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.WatchManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 0727bb20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_WatchManagerFromInspector__get_TelemetryAnnotation
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar1 = thunk_FUN_040b4efc();
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092a4bb8);
    FUN_075ce0d0(uVar1,uVar2,0);
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c1540);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar1,uVar2);
  }
  if (param_1 != 0) {
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_040ec700();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


