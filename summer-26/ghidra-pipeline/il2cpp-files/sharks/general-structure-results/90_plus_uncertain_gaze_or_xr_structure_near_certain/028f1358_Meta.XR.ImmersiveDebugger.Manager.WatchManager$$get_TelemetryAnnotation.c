/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 028f1358
PROGRAM: sharks-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation
               (ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    FUN_02170a40(lVar1,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb638);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


