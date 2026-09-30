/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$SetStateMachine
ENTRY_POINT: 06e713dc
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
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__SetStateMachine
          (void)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_07199c28(0);
  lVar3 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    lVar3 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    lVar3 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30));
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_07143704(&stack0x00000020,uVar5,uVar4,0);
  auVar2._8_8_ = in_stack_00000028;
  auVar2._0_8_ = in_stack_00000020;
  return auVar2;
}


