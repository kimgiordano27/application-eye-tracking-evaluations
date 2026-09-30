/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion.<>c__DisplayClass25_0$$<GetSessionList>b__0
ENTRY_POINT: 06e58188
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


void Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion_<>c__DisplayClass25_0__<GetSessionList>b__0
               (void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar3 = thunk_FUN_03d2eb70();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c(lVar5);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
  }
  memcpy(&stack0x000000c0,(void *)(unaff_x20 + 0x18),0x58);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30),&stack0x000000c0);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_07143704(&stack0x00000008,uVar3,uVar4,0);
  puVar2 = PTR_DAT_091add10;
  *(undefined8 *)(unaff_x23 + 0x68) = in_stack_00000010;
  *(undefined8 *)(unaff_x23 + 0x60) = in_stack_00000008;
  thunk_FUN_03d2eb70(*(undefined8 *)puVar2,&stack0x00000120);
  return;
}


