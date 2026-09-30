/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<OnColocationSessionFound>d__18$$MoveNext
ENTRY_POINT: 06e7728c
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


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<OnColocationSessionFound>d__18__MoveNext
               (void)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  FUN_07199c28(0);
  iVar1 = *(int *)(unaff_x21 + 0x30);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x21 + 0x10);
  uVar3 = *(ushort *)(lVar2 + 0x135);
  if (iVar1 == 1) {
    if ((uVar3 & 1) == 0) {
      FUN_03d8f26c();
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar2 + 0x135);
    }
    in_stack_00000050 = *(undefined8 *)(unaff_x21 + 0x28);
    in_stack_00000048 = *(undefined8 *)(unaff_x21 + 0x20);
    in_stack_00000040 = *(undefined8 *)(unaff_x21 + 0x18);
    if ((uVar3 & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30),&stack0x00000040);
    FUN_07143704();
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    uVar4 = *(undefined8 *)PTR_DAT_091add10;
  }
  else {
    if ((uVar3 & 1) == 0) {
      FUN_03d8f26c();
      uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    }
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    if ((uVar3 & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_05816624(&stack0x00000040,uVar4);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10);
  }
  thunk_FUN_03d2eb70(uVar4);
  return;
}


