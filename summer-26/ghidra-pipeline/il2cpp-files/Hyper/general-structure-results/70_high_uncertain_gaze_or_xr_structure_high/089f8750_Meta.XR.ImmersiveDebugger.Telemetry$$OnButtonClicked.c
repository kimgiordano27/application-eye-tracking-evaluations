/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked
ENTRY_POINT: 089f8750
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnButtonClicked(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = thunk_FUN_04983f60();
  FUN_08dbf2f0(uVar1,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
  thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


