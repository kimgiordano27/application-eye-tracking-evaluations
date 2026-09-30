/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 06af401c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__DestroyMarkerHandle
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
               ulong param_5,undefined1 *param_6,undefined8 param_7)

{
  uint uVar1;
  long unaff_x19;
  int unaff_w20;
  long lVar2;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
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
  ulong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  uint in_stack_000000d0;
  
  uStack0000000000000084 = param_3._8_8_;
  uVar3 = param_3._0_8_;
  uVar5 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  while( true ) {
    uStack0000000000000078 = (undefined4)uVar5;
    uStack000000000000007c = (undefined4)uVar3;
    uStack0000000000000080 = (undefined4)((ulong)uVar3 >> 0x20);
    uStack0000000000000070 = uVar4;
    FUN_05d171dc(param_4,param_5,param_6,param_7,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x110))
    ;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    lVar2 = *(long *)(unaff_x19 + 0x30);
    FUN_04bf96e8(&stack0x00000070,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    uVar4 = uStack0000000000000070;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04bf96e8(&stack0x00000070,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    uStack0000000000000064 = *(undefined8 *)((long)unaff_x28 + 0x14);
    in_stack_00000050 = *unaff_x28;
    uStack0000000000000060 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x28 + 0xc) >> 0x20);
    uStack0000000000000058 = (undefined4)unaff_x28[1];
    uStack000000000000005c = (undefined4)(unaff_x28[1] >> 0x20);
    if (lVar2 == 0) break;
    uStack000000000000001c = uStack000000000000005c;
    uStack0000000000000020 = uStack0000000000000060;
    in_stack_00000010 = in_stack_00000050;
    uStack0000000000000018 = uStack0000000000000058;
    uStack0000000000000024 = uStack0000000000000064;
    FUN_05d171dc(lVar2,uVar4 & 0xffffffff,&stack0x00000010,1,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x25 + 0x5c8) + 0x20) + 0xc0) + 0x110));
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
    FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    if (lVar2 == 0) break;
    FUN_04507008(lVar2,in_stack_00000010 & 0xffffffff,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x26 + 0x3d0) + 0x20) + 0xc0) + 0xa8));
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
    FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    uVar4 = in_stack_00000010;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    if (lVar2 == 0) break;
    FUN_05d10484(lVar2,uVar4 & 0xffffffff,in_stack_00000010._4_4_,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + 0x598) + 0x20) + 0xc0) + 0x110));
    lVar2 = *(long *)(unaff_x19 + 0x28);
    unaff_w20 = unaff_w20 + 1;
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= unaff_w20) {
      return;
    }
    param_4 = *(long *)(unaff_x19 + 0x38);
    FUN_04bf96e8(&stack0x000000d0,lVar2,unaff_w20,*(undefined8 *)(unaff_x24 + 0x1c8));
    uVar1 = in_stack_000000d0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04bf96e8(&stack0x000000d0,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    uVar3 = *(undefined8 *)((long)unaff_x27 + 0xc);
    uVar5 = unaff_x27[1];
    uVar4 = *unaff_x27;
    *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)((long)unaff_x27 + 0x14);
    *(undefined8 *)(unaff_x23 + 0xc) = uVar3;
    in_stack_000000b0 = uVar4;
    in_stack_000000b8 = uVar5;
    if (param_4 == 0) break;
    uStack0000000000000084 = *(undefined8 *)(unaff_x23 + 0x14);
    uVar3 = *(undefined8 *)(unaff_x23 + 0xc);
    param_6 = (undefined1 *)&stack0x00000070;
    param_1 = *(long *)(*(long *)(unaff_x25 + 0x5c8) + 0x20);
    param_7 = 1;
    param_5 = (ulong)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


