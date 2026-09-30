/*
FUNCTION_NAME: Meta.WitAi.WitRuntimeRequestConfiguration$$UpdateDataAssets
ENTRY_POINT: 013ddcf8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined1  [16] Meta_WitAi_WitRuntimeRequestConfiguration__UpdateDataAssets(void)

{
  ushort uVar1;
  long lVar2;
  undefined1 in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long in_stack_00000020;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  *(undefined1 *)(unaff_x21 + 0x82d) = in_w8;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000038 = 0;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x132);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_00d5941c(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  uVar4 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x58);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_00d5941c(lVar2);
  }
  (**(code **)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x58) + 0x10))(uVar4);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
LAB_013ddebc:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x132);
    lVar2 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_00d5941c(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
      lVar2 = *(long *)(unaff_x19 + 0x20);
    }
    uVar4 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_00d5941c(lVar2);
    }
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x20) + 0x10))(uVar4);
    uStack0000000000000038 = 0;
    uStack0000000000000040 = 0;
    uStack0000000000000048 = 0;
    FUN_02816678(&stack0x00000038,1,0);
    if (in_stack_00000020 == 0) goto LAB_013ddebc;
    FUN_00adb378(in_stack_00000020);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x132);
    lVar2 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_00d5941c(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
      lVar2 = *(long *)(unaff_x19 + 0x20);
    }
    uVar4 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x58);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_00d5941c(lVar2);
    }
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x58) + 0x10))(uVar4);
    lVar2 = *(long *)(unaff_x20 + 0x18);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


