/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplDestroyMarkerHandle
ENTRY_POINT: 06af40ec
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


void OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long unaff_x19;
  int unaff_w20;
  long lVar3;
  long lVar4;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  undefined8 uVar5;
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
  undefined8 uStack0000000000000084;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined4 in_stack_000000d0;
  
  while( true ) {
    FUN_04507008(param_2,param_3,*(undefined8 *)(param_1 + 0xa8));
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
    FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    uVar1 = in_stack_00000010;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    if (lVar4 == 0) break;
    FUN_05d10484(lVar4,uVar1 & 0xffffffff,in_stack_00000010._4_4_,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + 0x598) + 0x20) + 0xc0) + 0x110));
    lVar4 = *(long *)(unaff_x19 + 0x28);
    unaff_w20 = unaff_w20 + 1;
    if (lVar4 == 0) break;
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
      return;
    }
    lVar3 = *(long *)(unaff_x19 + 0x38);
    FUN_04bf96e8(&stack0x000000d0,lVar4,unaff_w20,*(undefined8 *)(unaff_x24 + 0x1c8));
    uVar2 = in_stack_000000d0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04bf96e8(&stack0x000000d0,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    uVar5 = *(undefined8 *)((long)unaff_x27 + 0xc);
    in_stack_000000b8 = unaff_x27[1];
    in_stack_000000b0 = *unaff_x27;
    *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)((long)unaff_x27 + 0x14);
    *(undefined8 *)(unaff_x23 + 0xc) = uVar5;
    if (lVar3 == 0) break;
    uStack0000000000000084 = *(undefined8 *)(unaff_x23 + 0x14);
    uStack0000000000000078 = (undefined4)in_stack_000000b8;
    uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x23 + 0xc);
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0xc) >> 0x20);
    in_stack_00000070 = in_stack_000000b0;
    FUN_05d171dc(lVar3,uVar2,&stack0x00000070,1,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x25 + 0x5c8) + 0x20) + 0xc0) + 0x110));
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    lVar4 = *(long *)(unaff_x19 + 0x30);
    FUN_04bf96e8(&stack0x00000070,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    uVar1 = in_stack_00000070;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04bf96e8(&stack0x00000070,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    uStack0000000000000064 = *(undefined8 *)((long)unaff_x28 + 0x14);
    in_stack_00000050 = *unaff_x28;
    uStack0000000000000060 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x28 + 0xc) >> 0x20);
    uStack0000000000000058 = (undefined4)unaff_x28[1];
    uStack000000000000005c = (undefined4)(unaff_x28[1] >> 0x20);
    if (lVar4 == 0) break;
    uStack000000000000001c = uStack000000000000005c;
    uStack0000000000000020 = uStack0000000000000060;
    in_stack_00000010 = in_stack_00000050;
    uStack0000000000000018 = uStack0000000000000058;
    uStack0000000000000024 = uStack0000000000000064;
    FUN_05d171dc(lVar4,uVar1 & 0xffffffff,&stack0x00000010,1,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x25 + 0x5c8) + 0x20) + 0xc0) + 0x110));
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    param_2 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
    FUN_04bf96e8(&stack0x00000010,*(long *)(unaff_x19 + 0x28),unaff_w20,
                 *(undefined8 *)(unaff_x24 + 0x1c8));
    if (param_2 == 0) break;
    param_3 = in_stack_00000010 & 0xffffffff;
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x26 + 0x3d0) + 0x20) + 0xc0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


