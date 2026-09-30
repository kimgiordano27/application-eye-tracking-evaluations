/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.WatchManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 04c06d70
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_WatchManagerFromInspector__get_TelemetryAnnotation
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long in_x9;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(in_x9 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  *(undefined8 *)(unaff_x19 + 0x10) = *puVar3;
  puVar1 = PTR_DAT_065dd1f0;
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a6975a == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd1f0);
    DAT_06a6975a = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    FUN_04c1ace0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


