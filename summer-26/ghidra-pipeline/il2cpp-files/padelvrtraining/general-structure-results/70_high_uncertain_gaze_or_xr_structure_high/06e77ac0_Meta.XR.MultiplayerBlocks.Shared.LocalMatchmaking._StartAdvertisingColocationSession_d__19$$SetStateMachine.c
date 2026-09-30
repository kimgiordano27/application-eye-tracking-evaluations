/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$SetStateMachine
ENTRY_POINT: 06e77ac0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__SetStateMachine
               (ulong param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long *unaff_x21;
  long lVar5;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091add10);
    *(undefined1 *)(unaff_x20 + 0xd46) = 1;
  }
  if (*(int *)((long)unaff_x21 + 0xc) != 0) {
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)((long)unaff_x21 + 0xc) != *(int *)(*unaff_x21 + 0x20) + 1) goto LAB_06e77b00;
  }
  FUN_07199c28(0);
LAB_06e77b00:
  lVar2 = unaff_x21[4];
  uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  }
  lVar4 = unaff_x21[2];
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
  }
  lVar5 = unaff_x21[3];
  if ((int)lVar2 == 1) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000028 = lVar5;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30),&stack0x00000028);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_07143704(&stack0x00000010,lVar4,uVar3,0);
    uVar3 = *(undefined8 *)PTR_DAT_091add10;
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    FUN_05816798(&stack0x00000010,lVar4,lVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10);
  }
  thunk_FUN_03d2eb70(uVar3);
  return;
}


