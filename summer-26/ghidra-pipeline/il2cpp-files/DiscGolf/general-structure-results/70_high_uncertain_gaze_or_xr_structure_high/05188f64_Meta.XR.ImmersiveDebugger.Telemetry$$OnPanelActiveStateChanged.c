/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnPanelActiveStateChanged
ENTRY_POINT: 05188f64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnPanelActiveStateChanged(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_02dfd288(*(undefined8 *)(param_1 + 0x3c8));
  uVar1 = thunk_FUN_02dd3144();
  uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a108a8);
  FUN_054e8008(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar1,param_2);
}


