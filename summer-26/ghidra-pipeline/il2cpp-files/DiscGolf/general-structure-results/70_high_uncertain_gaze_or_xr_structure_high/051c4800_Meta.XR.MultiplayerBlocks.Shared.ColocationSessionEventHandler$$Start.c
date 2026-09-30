/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 051c4800
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_02dfd288(&DAT_06b34e30);
  uVar1 = thunk_FUN_02dd3144();
  uVar2 = thunk_FUN_02dfd288(&DAT_06b90130);
  FUN_054e802c(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar1);
}


