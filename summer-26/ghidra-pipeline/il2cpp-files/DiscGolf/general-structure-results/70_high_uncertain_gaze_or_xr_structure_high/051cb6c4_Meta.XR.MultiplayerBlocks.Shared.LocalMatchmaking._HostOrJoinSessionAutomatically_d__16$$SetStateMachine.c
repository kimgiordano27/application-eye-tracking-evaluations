/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__16$$SetStateMachine
ENTRY_POINT: 051cb6c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16__SetStateMachine
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(param_1 + 0xb8) = unaff_x20;
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  LeanTween__value(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


