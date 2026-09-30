/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 06e7d1b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
          (long param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    param_1 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    param_1 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_03d8f26c();
  }
  uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x30));
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_07143704(&stack0x00000010,uVar4,uVar3,0);
  auVar2._8_8_ = in_stack_00000018;
  auVar2._0_8_ = in_stack_00000010;
  return auVar2;
}


