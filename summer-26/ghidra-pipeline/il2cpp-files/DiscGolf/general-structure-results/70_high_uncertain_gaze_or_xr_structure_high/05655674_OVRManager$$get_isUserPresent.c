/*
FUNCTION_NAME: OVRManager$$get_isUserPresent
ENTRY_POINT: 05655674
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


bool OVRManager__get_isUserPresent(void)

{
  int iVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  
  FUN_02d965b8(PTR_DAT_06a0f1a0);
  FUN_02d965b8(Unity_Services_Vivox_IReadOnlyDictionary<ChannelId,_IChannelSession>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_IReadOnlyDictionary<ulong,_PendingClient>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x535) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar1 = FUN_056499e4(unaff_w19);
  return iVar1 == 0;
}


