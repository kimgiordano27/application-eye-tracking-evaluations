/*
FUNCTION_NAME: OVRManager$$get_isSupportedPlatform
ENTRY_POINT: 05655664
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


bool OVRManager__get_isSupportedPlatform(undefined4 param_1)

{
  int iVar1;
  long unaff_x20;
  long unaff_x21;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x21 + 0x1a0);
  if ((*(byte *)(unaff_x20 + 0x535) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(Unity_Services_Vivox_IReadOnlyDictionary<ChannelId,_IChannelSession>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyDictionary<ulong,_PendingClient>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x535) = 1;
  }
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar1 = FUN_056499e4(param_1);
  return iVar1 == 0;
}


