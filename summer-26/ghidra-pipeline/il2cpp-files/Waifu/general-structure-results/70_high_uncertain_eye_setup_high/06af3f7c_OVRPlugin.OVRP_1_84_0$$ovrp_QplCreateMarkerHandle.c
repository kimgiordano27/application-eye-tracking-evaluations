/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 06af3f7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(void)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  int iVar4;
  long lVar5;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  ulong in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  ulong in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined8 uStack000000000000008c;
  ulong in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined4 in_stack_000000d0;
  undefined1 in_stack_000000f0 [16];
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined8 in_stack_00000108;
  
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) {
    iVar4 = 0;
    while( true ) {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return;
      }
      lVar5 = *(long *)(unaff_x19 + 0x38);
      FUN_04bf96e8(&stack0x000000d0,lVar3,iVar4,DAT_083f61c8);
      uVar2 = in_stack_000000d0;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      FUN_04bf96e8(&stack0x000000d0,*(long *)(unaff_x19 + 0x28),iVar4,DAT_083f61c8);
      uStack00000000000000c4 = in_stack_00000108;
      uStack00000000000000c0 = uStack0000000000000104;
      uStack00000000000000b8 = in_stack_000000f0._12_4_;
      uStack00000000000000bc = uStack0000000000000100;
      in_stack_000000b0 = in_stack_000000f0._4_8_;
      if (lVar5 == 0) break;
      uStack0000000000000078 = in_stack_000000f0._12_4_;
      in_stack_00000070 = in_stack_000000f0._4_8_;
      uStack0000000000000084 = (undefined4)in_stack_00000108;
      uStack0000000000000088 = (undefined4)((ulong)in_stack_00000108 >> 0x20);
      uStack000000000000007c = uStack0000000000000100;
      uStack0000000000000080 = uStack0000000000000104;
      FUN_05d171dc(lVar5,uVar2,&stack0x00000070,1,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110));
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      lVar3 = *(long *)(unaff_x19 + 0x30);
      FUN_04bf96e8(&stack0x00000070,*(long *)(unaff_x19 + 0x28),iVar4,DAT_083f61c8);
      uVar1 = in_stack_00000070;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      FUN_04bf96e8(&stack0x00000070,*(long *)(unaff_x19 + 0x28),iVar4,DAT_083f61c8);
      in_stack_00000050 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      uStack0000000000000064 = uStack000000000000008c;
      uStack0000000000000060 = uStack0000000000000088;
      uStack0000000000000058 = uStack0000000000000080;
      uStack000000000000005c = uStack0000000000000084;
      if (lVar3 == 0) break;
      uStack0000000000000018 = uStack0000000000000080;
      uStack0000000000000024 = uStack000000000000008c;
      uStack000000000000001c = uStack0000000000000084;
      uStack0000000000000020 = uStack0000000000000088;
      in_stack_00000010 = in_stack_00000050;
      FUN_05d171dc(lVar3,uVar1 & 0xffffffff,&stack0x00000010,1,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110));
      if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
      FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),iVar4,DAT_083f61c8);
      if (lVar3 == 0) break;
      FUN_04507008(lVar3,in_stack_00000010 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083ec3d0 + 0x20) + 0xc0) + 0xa8));
      if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
      FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),iVar4,DAT_083f61c8);
      uVar1 = in_stack_00000010;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),iVar4,DAT_083f61c8);
      if (lVar3 == 0) break;
      FUN_05d10484(lVar3,uVar1 & 0xffffffff,in_stack_00000010._4_4_,2,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083e0598 + 0x20) + 0xc0) + 0x110));
      lVar3 = *(long *)(unaff_x19 + 0x28);
      iVar4 = iVar4 + 1;
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


