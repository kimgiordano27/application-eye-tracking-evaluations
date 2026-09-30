/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartDiscoveringColocationSessions
ENTRY_POINT: 06e76c48
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartDiscoveringColocationSessions(long param_1)

{
  undefined1 auVar1 [16];
  long unaff_x19;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 0x18);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x30),&stack0x00000008);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_07143704(&stack0x00000010);
  auVar1._8_8_ = in_stack_00000018;
  auVar1._0_8_ = in_stack_00000010;
  return auVar1;
}


