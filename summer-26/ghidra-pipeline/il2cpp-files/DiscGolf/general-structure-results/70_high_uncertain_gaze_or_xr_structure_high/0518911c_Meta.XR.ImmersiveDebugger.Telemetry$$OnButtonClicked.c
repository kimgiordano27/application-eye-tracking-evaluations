/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked
ENTRY_POINT: 0518911c
PROGRAM: DiscGolf-libil2cpp.so
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
  undefined8 uVar2;
  
  thunk_FUN_02dfd288();
  uVar1 = thunk_FUN_02dd3144();
  uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a108a8);
  FUN_054e8008(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar1);
}


