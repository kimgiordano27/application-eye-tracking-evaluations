/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils.<>c$$<.cctor>b__2_3
ENTRY_POINT: 028ee618
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x028ee9ac) */
/* WARNING: Removing unreachable block (ram,0x028ee8bc) */

void Meta_XR_ImmersiveDebugger_Manager_WatchUtils_<>c__<_cctor>b__2_3(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar7 = *unaff_x21;
  uVar8 = unaff_x21[1];
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  uVar5 = FUN_02170a40(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f0));
  puVar1 = PTR_DAT_037f88d0;
  if ((uVar5 & 1) != 0) {
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    uVar7 = thunk_FUN_01851c08(PTR_DAT_037f9268);
    uVar7 = thunk_FUN_018617ec(uVar7,&stack0x00000020);
    uVar8 = thunk_FUN_01851c08(PTR_DAT_037fb678);
    uVar7 = FUN_02a473b8(uVar8,uVar7,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar8 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar8);
  }
  in_stack_00000088 = unaff_x21[1];
  in_stack_00000080 = *unaff_x21;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((unaff_x22 & 1) == 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x210));
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar7 = *unaff_x21;
    uVar8 = unaff_x21[1];
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4();
    }
    FUN_02170834(lVar4,uVar7,uVar8,lVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x218));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000070 = *(undefined8 *)(lVar3 + 0x80);
    in_stack_00000058 = *(undefined8 *)(lVar3 + 0x68);
    in_stack_00000050 = *(undefined8 *)(lVar3 + 0x60);
    in_stack_00000068 = *(undefined8 *)(lVar3 + 0x78);
    in_stack_00000060 = *(undefined8 *)(lVar3 + 0x70);
  }
  else {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar7 = *unaff_x21;
    uVar8 = unaff_x21[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    FUN_021782ec(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
    uVar2 = in_stack_000000a8;
    uVar8 = in_stack_000000a0;
    uVar7 = in_stack_00000098;
    in_stack_00000040 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000020 = 0;
    in_stack_00000030 = uVar8;
    in_stack_00000028 = uVar7;
    in_stack_00000038 = uVar2;
    thunk_FUN_0188fd20(&stack0x00000020,0);
    in_stack_00000040 = CONCAT53((int5)((ulong)in_stack_00000040 >> 0x18),0x10000);
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000070 = in_stack_00000040;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  FUN_028ef10c(&stack0x00000080,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x228));
  unaff_x20[4] = in_stack_00000070;
  unaff_x20[1] = in_stack_00000058;
  *unaff_x20 = in_stack_00000050;
  unaff_x20[3] = in_stack_00000068;
  unaff_x20[2] = in_stack_00000060;
  return;
}


