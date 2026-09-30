/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion$$ClearSessionList
ENTRY_POINT: 06e57fcc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion__ClearSessionList(long param_1)

{
  int in_w9;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar4;
  long unaff_x24;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  while( true ) {
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = unaff_w23 + 1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar4 = unaff_w23 + 1;
    if (-1 < *(int *)(lVar1 + (long)(int)unaff_w23 * (long)in_w9 + 0x20)) break;
    unaff_w23 = uVar4;
    if (unaff_w22 <= uVar4) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      *(undefined8 *)(unaff_x19 + 0x68) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
LAB_06e580a4:
      return uVar4 < unaff_w22;
    }
  }
  lVar1 = lVar1 + (long)(int)unaff_w23 * 0x68;
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  memcpy(&stack0x00000008,(void *)(lVar1 + 0x30),0x58);
  *(undefined8 *)(unaff_x24 + 0x48) = 0;
  *(undefined8 *)(unaff_x24 + 0x40) = 0;
  *(undefined8 *)(unaff_x24 + 0x58) = 0;
  *(undefined8 *)(unaff_x24 + 0x50) = 0;
  *(undefined8 *)(unaff_x24 + 0x38) = 0;
  *(undefined8 *)(unaff_x24 + 0x30) = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38);
  memcpy(&stack0x000000c8,&stack0x00000008,0x58);
  FUN_05811b48(&stack0x00000060,uVar3,&stack0x000000c8,uVar2);
  memcpy((void *)(unaff_x19 + 0x10),&stack0x00000060,0x60);
  thunk_FUN_03d1023c(unaff_x19 + 0x18,0);
  uVar4 = unaff_w23;
  goto LAB_06e580a4;
}


