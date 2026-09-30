/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 08a158a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x259) = 1;
  if (unaff_x20 == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_075077d0(*(long *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x20 + 0x18),
                 *(undefined8 *)PTR_DAT_0ac51d50);
    puVar2 = (undefined8 *)(unaff_x19 + 0x10);
    uVar1 = FUN_088edab4(*puVar2,*(undefined8 *)(unaff_x20 + 0x10),0);
    *puVar2 = uVar1;
    thunk_FUN_049ee3d8(puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


