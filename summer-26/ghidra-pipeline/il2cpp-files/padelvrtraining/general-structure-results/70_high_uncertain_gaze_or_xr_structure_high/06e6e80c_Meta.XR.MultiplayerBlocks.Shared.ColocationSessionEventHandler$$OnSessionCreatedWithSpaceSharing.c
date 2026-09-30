/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpaceSharing
ENTRY_POINT: 06e6e80c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing
               (long param_1)

{
  long unaff_x19;
  uint unaff_w24;
  uint unaff_w25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_05814fd0(&stack0x00000008);
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
  return unaff_w25 < unaff_w24;
}


