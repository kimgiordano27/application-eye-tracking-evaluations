/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionDiscoveredWithSpaceSharing
ENTRY_POINT: 06e6e8d8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionDiscoveredWithSpaceSharing
               (void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long *unaff_x21;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined1 *)(unaff_x20 + 0xd34) = in_w8;
  if (*(int *)((long)unaff_x21 + 0xc) != 0) {
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)((long)unaff_x21 + 0xc) != *(int *)(*unaff_x21 + 0x20) + 1) goto LAB_06e6e904;
  }
  FUN_07199c28(0);
LAB_06e6e904:
  lVar4 = unaff_x21[5];
  uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  if ((uVar3 & 1) == 0) {
    FUN_03d8f26c();
    uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  }
  lVar6 = unaff_x21[2];
  if ((uVar3 & 1) == 0) {
    FUN_03d8f26c();
  }
  lVar1 = unaff_x21[3];
  lVar2 = unaff_x21[4];
  if ((int)lVar4 == 1) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000018 = lVar1;
    in_stack_00000020 = lVar2;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30),&stack0x00000018);
    FUN_07143704();
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    uVar5 = *(undefined8 *)PTR_DAT_091add10;
  }
  else {
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    FUN_05814fd0(&stack0x00000018,lVar6,lVar1,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38))
    ;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10);
  }
  thunk_FUN_03d2eb70(uVar5);
  return;
}


