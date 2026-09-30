/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion$$SelectSessionToJoinFromList
ENTRY_POINT: 06e580e8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion__SelectSessionToJoinFromList
               (long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
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
  long in_stack_00000138;
  
  if ((bRam0000000009840d09 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091add10);
    bRam0000000009840d09 = 1;
  }
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x20) + 1) goto LAB_06e58144;
  }
  FUN_07199c28(0);
LAB_06e58144:
  lVar2 = param_1[0xe];
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  lVar6 = param_1[2];
  if ((int)lVar2 == 1) {
    lVar2 = *(long *)(param_2 + 0x20);
    in_stack_00000138 = lVar6;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28),&stack0x00000138);
    lVar2 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar2);
      lVar2 = *(long *)(param_2 + 0x20);
      uVar1 = *(ushort *)(lVar2 + 0x135);
    }
    memcpy(&stack0x000000c0,param_1 + 3,0x58);
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
    lVar2 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar2);
      lVar2 = *(long *)(param_2 + 0x20);
      uVar1 = *(ushort *)(lVar2 + 0x135);
    }
    memcpy(&stack0x00000068,param_1 + 3,0x58);
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
      lVar2 = FUN_03d8f26c(lVar2);
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38);
    memcpy(&stack0x00000008,&stack0x00000068,0x58);
    FUN_05811b48(&stack0x000000c0,lVar6,&stack0x00000008,uVar3);
    memcpy(&stack0x00000008,&stack0x000000c0,0x60);
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    puVar5 = &stack0x00000008;
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10);
  }
  thunk_FUN_03d2eb70(uVar3,puVar5);
  return;
}


