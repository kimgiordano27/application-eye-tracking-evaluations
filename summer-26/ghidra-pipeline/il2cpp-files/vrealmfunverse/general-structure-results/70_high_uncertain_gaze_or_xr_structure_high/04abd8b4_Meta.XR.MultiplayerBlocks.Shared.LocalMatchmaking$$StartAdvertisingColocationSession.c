/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartAdvertisingColocationSession
ENTRY_POINT: 04abd8b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartAdvertisingColocationSession
               (void *param_1,void *param_2,size_t param_3)

{
  long unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x21;
  
  memcpy(param_1,param_2,param_3);
  memcpy(unaff_x20 + 2,&stack0x00000008,0x280);
  thunk_FUN_02bb0e9c(unaff_x20 + 8,0);
  if (*unaff_x20 < 2) {
    return;
  }
  FUN_04d9f2a8(*(undefined8 *)(unaff_x19 + 0x288),*unaff_x21,*unaff_x20 + -1,0);
  return;
}


