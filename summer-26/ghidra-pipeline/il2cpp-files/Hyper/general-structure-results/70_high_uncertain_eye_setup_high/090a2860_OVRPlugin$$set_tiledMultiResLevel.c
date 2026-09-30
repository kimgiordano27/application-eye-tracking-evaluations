/*
FUNCTION_NAME: OVRPlugin$$set_tiledMultiResLevel
ENTRY_POINT: 090a2860
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_tiledMultiResLevel(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac78ec8);
  FUN_04947ee4(PTR_DAT_0ac78d18);
  FUN_04947ee4(PTR_DAT_0ac78ec0);
  FUN_04947ee4(PTR_DAT_0ac78eb8);
  *(undefined1 *)(unaff_x23 + 0x285) = 1;
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  lVar5 = thunk_FUN_04983f60(*unaff_x22);
  FUN_06cadac0(lVar5,*unaff_x21);
  puVar4 = PTR_DAT_0ac78ec8;
  puVar3 = PTR_DAT_0ac78d08;
  puVar2 = PTR_DAT_0ac78d00;
  if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x130) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_06b8097c(&stack0x00000088,*(long *)(unaff_x20 + 0x130),*(undefined8 *)PTR_DAT_0ac78d18);
  while( true ) {
    uVar6 = FUN_05fefd38(&stack0x00000088,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) {
      FUN_05fefd34(&stack0x00000088,*(undefined8 *)puVar2);
      in_stack_00000080 = 0;
      uStack0000000000000084 = 0;
      in_stack_00000048 = 0;
      in_stack_00000058 = 0;
      uStack000000000000005c = 0;
      in_stack_00000050 = 0;
      uStack0000000000000054 = 0;
      in_stack_00000068 = 0;
      uStack000000000000006c = 0;
      in_stack_00000060 = 0;
      uStack0000000000000064 = 0;
      in_stack_00000078 = 0;
      uStack000000000000007c = 0;
      in_stack_00000070 = 0;
      uStack0000000000000074 = 0;
      in_stack_00000040 = lVar5;
      thunk_FUN_049ee3d8(&stack0x00000040,lVar5);
      in_stack_00000050 = *(undefined4 *)(unaff_x20 + 0xdc);
      in_stack_00000048 =
           CONCAT44(*(undefined4 *)(unaff_x20 + 0x128),*(undefined4 *)(unaff_x20 + 0xe4));
      uStack000000000000005c = (undefined4)*(undefined8 *)(unaff_x20 + 0xf0);
      in_stack_00000060 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xf0) >> 0x20);
      uStack0000000000000054 = (undefined4)*(undefined8 *)(unaff_x20 + 0xe8);
      in_stack_00000058 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xe8) >> 0x20);
      uStack0000000000000064 = (undefined4)*(undefined8 *)(unaff_x20 + 0xf8);
      in_stack_00000068 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xf8) >> 0x20);
      uStack0000000000000074 = (undefined4)*(undefined8 *)(unaff_x20 + 0x108);
      in_stack_00000078 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x108) >> 0x20);
      uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x20 + 0x100);
      in_stack_00000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x100) >> 0x20);
      uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x20 + 0x110);
      in_stack_00000080 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x110) >> 0x20);
      memcpy(unaff_x19,&stack0x00000040,0x48);
      return;
    }
    FUN_090a2448(&stack0x000000a0,in_stack_00000098);
    if (lVar5 == 0) break;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
      *(undefined8 *)(lVar7 + 0x38) = in_stack_000000b8;
      *(undefined8 *)(lVar7 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(lVar7 + 0x48) = in_stack_000000c8;
      *(undefined8 *)(lVar7 + 0x40) = in_stack_000000c0;
      thunk_FUN_049ee3d8(lVar7 + 0x40,0);
    }
    else {
      FUN_06cae3e8(lVar5,&stack0x000000a0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


