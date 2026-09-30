/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpaceSharing
ENTRY_POINT: 0775c360
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000018;
  
  puVar1 = PTR_DAT_09f1e5b8;
  uStack0000000000000018 = *unaff_x19;
  uVar2 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x80),&stack0x00000018);
  in_stack_00000008 = unaff_x19[1];
  uVar3 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x80),&stack0x00000008);
  FUN_078b5afc(*unaff_x21,uVar2,uVar3,0);
  return;
}


