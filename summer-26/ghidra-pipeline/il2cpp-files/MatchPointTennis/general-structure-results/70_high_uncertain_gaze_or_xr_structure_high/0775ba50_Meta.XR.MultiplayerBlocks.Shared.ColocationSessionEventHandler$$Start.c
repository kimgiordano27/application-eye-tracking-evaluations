/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 0775ba50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xd88));
  *(undefined1 *)(unaff_x21 + 0x294) = 1;
  uVar1 = FUN_04447c90(*unaff_x22,0);
  **(undefined8 **)(*unaff_x19 + 0xb8) = uVar1;
  thunk_FUN_044bb4b4(*(undefined8 *)(*unaff_x19 + 0xb8),uVar1);
  uVar1 = FUN_04447c90(*unaff_x20,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_044bb4b4(puVar2,uVar1);
  return;
}


