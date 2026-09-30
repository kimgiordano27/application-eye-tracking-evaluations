/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameBgraPixels
ENTRY_POINT: 0569db24
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x21;
  
  puVar2 = Unity_Services_Matchmaker_Response<StoredMatchmakingResults>_TypeInfo;
  puVar1 = Oculus_Platform_Request<UserList>_TypeInfo;
                    /* try { // try from 0569db2c to 0579db33 has its CatchHandler @ 0569dfb8 */
  if ((*(byte *)(unaff_x21 + 0x887) & 1) == 0) {
    FUN_02d965b8(Oculus_Platform_Request<UserList>_TypeInfo);
                    /* try { // try from 0569db4c to 0579db4f has its CatchHandler @ 0569df9c */
    FUN_02d965b8(Unity_Services_Matchmaker_Response<StoredMatchmakingResults>_TypeInfo);
                    /* try { // try from 0569db54 to 0579db5b has its CatchHandler @ 0569dfbc */
    *(undefined1 *)(unaff_x21 + 0x887) = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = *(undefined8 *)puVar2;
  LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  return;
}


