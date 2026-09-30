/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion$$OnSessionListUpdated
ENTRY_POINT: 06e58160
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


void Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion__OnSessionListUpdated(void)

{
  ushort uVar1;
  bool in_ZR;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000138;
  
  if (in_ZR) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000138 = unaff_x21;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28),&stack0x00000138);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar2);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar2 + 0x135);
    }
    memcpy(&stack0x000000c0,(void *)(unaff_x20 + 0x18),0x58);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_03d8f26c(lVar2);
    }
    uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30),&stack0x000000c0);
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_07143704(&stack0x00000008,uVar3,uVar4,0);
    puVar5 = &stack0x00000120;
    in_stack_00000128 = in_stack_00000010;
    in_stack_00000120 = in_stack_00000008;
    uVar3 = *(undefined8 *)PTR_DAT_091add10;
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar2);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar2 + 0x135);
    }
    memcpy(&stack0x00000068,(void *)(unaff_x20 + 0x18),0x58);
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    in_stack_00000118 = 0;
    in_stack_00000110 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000d0 = 0;
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar2);
    }
    memcpy(&stack0x00000008,&stack0x00000068,0x58);
    FUN_05811b48(&stack0x000000c0);
    memcpy(&stack0x00000008,&stack0x000000c0,0x60);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    puVar5 = &stack0x00000008;
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10);
  }
  thunk_FUN_03d2eb70(uVar3,puVar5);
  return;
}


