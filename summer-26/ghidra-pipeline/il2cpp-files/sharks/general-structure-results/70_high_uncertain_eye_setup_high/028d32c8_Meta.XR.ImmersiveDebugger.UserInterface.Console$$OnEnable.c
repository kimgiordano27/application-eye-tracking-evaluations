/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$OnEnable
ENTRY_POINT: 028d32c8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x028d3504) */
/* WARNING: Removing unreachable block (ram,0x028d35f8) */

void Meta_XR_ImmersiveDebugger_UserInterface_Console__OnEnable(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long *unaff_x26;
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
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  if ((unaff_x22 & 1) == 0) {
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0185daa4();
    }
    lVar4 = FUN_01b793c4(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x210));
    lVar5 = *unaff_x26;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *unaff_x26;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar6 = *unaff_x26;
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4();
    }
    FUN_02170834(lVar5,uVar1,uVar2,lVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x218));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000070 = *(undefined8 *)(lVar4 + 0x80);
    in_stack_00000058 = *(undefined8 *)(lVar4 + 0x68);
    in_stack_00000050 = *(undefined8 *)(lVar4 + 0x60);
    in_stack_00000068 = *(undefined8 *)(lVar4 + 0x78);
    in_stack_00000060 = *(undefined8 *)(lVar4 + 0x70);
  }
  else {
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *unaff_x26;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar5 = *unaff_x26;
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    FUN_0215e9f4(lVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x1f8));
    uVar3 = in_stack_000000a8;
    uVar2 = in_stack_000000a0;
    uVar1 = in_stack_00000098;
    in_stack_00000040 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000030 = uVar2;
    in_stack_00000028 = uVar1;
    in_stack_00000038 = uVar3;
    thunk_FUN_0188fd20(&stack0x00000030,0);
    in_stack_00000020 = 0;
    thunk_FUN_0188fd20(&stack0x00000020,0);
    in_stack_00000040 = CONCAT53((int5)((ulong)in_stack_00000040 >> 0x18),0x10000);
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000070 = in_stack_00000040;
  }
  lVar4 = *unaff_x26;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = thunk_FUN_0181d094(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x228));
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *unaff_x26;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  FUN_028d3d70(&stack0x00000080,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x228));
  unaff_x19[4] = in_stack_00000070;
  unaff_x19[1] = in_stack_00000058;
  *unaff_x19 = in_stack_00000050;
  unaff_x19[3] = in_stack_00000068;
  unaff_x19[2] = in_stack_00000060;
  return;
}


