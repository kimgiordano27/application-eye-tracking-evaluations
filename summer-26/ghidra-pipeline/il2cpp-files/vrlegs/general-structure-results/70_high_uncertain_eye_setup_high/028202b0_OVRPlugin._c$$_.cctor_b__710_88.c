/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_88
ENTRY_POINT: 028202b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_<>c__<_cctor>b__710_88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long *plVar9;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  int iStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  
  uStack00000000000000d0 = 0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_0281eea4(&stack0x000000a0);
  puVar2 = PTR_DAT_03cfdb18;
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    goto LAB_02820644;
  }
  in_stack_00000058 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
  in_stack_00000060 = CONCAT44(iStack00000000000000c4,uStack00000000000000c0);
  in_stack_00000048 = in_stack_000000a8;
  in_stack_00000040 = in_stack_000000a0;
  in_stack_00000050 = in_stack_000000b0;
  in_stack_00000068 = in_stack_000000c8;
  in_stack_00000070 = uStack00000000000000d0;
  if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_00000098 = FUN_02820664();
  uVar3 = uStack00000000000000c0;
  puVar1 = PTR_DAT_03cc4b20;
  if (iStack00000000000000c4 == 1) {
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_0274322c(&stack0x00000098,0);
    uVar7 = 1;
LAB_028205d4:
    FUN_02742a20(&stack0x00000098,lVar6,uVar7,0);
  }
  else if (iStack00000000000000c4 == 2) {
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02784594(&stack0x00000090,uStack00000000000000bc,uVar3,0,0);
    plVar9 = (long *)PTR_DAT_03cbeeb0;
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_0274322c(&stack0x00000098,0);
    lVar5 = in_stack_00000090 + lVar5;
    in_stack_00000088 = *(undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x18);
    lVar6 = FUN_0274322c(&stack0x00000088,0);
    uVar7 = in_stack_00000098;
    if (lVar6 < lVar5) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar6 = FUN_0281f99c(uVar7);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar8);
      }
      lVar8 = *plVar9;
      lVar6 = lVar6 + lVar5;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *plVar9;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
      lVar5 = FUN_0274322c(&stack0x00000088,0);
      if (lVar5 < lVar6) {
        lVar6 = *plVar9;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *plVar9;
        }
        in_stack_00000088 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
LAB_028205a4:
        lVar6 = FUN_0274322c(&stack0x00000088,0);
      }
      goto LAB_028205b8;
    }
LAB_028205e0:
    in_stack_00000040 = 0;
    FUN_02742a20(&stack0x00000040,lVar5,1,0);
    in_stack_00000088 = in_stack_00000040;
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000098 = FUN_02745234(&stack0x00000088,0);
  }
  else if (iStack00000000000000c4 == 3) {
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02784594(&stack0x00000080,uStack00000000000000bc,uVar3,0,0);
    plVar9 = (long *)PTR_DAT_03cbeeb0;
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_0274322c(&stack0x00000098,0);
    lVar5 = lVar5 - in_stack_00000080;
    in_stack_00000088 = *(undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x10);
    lVar6 = FUN_0274322c(&stack0x00000088,0);
    uVar7 = in_stack_00000098;
    if (lVar6 <= lVar5) goto LAB_028205e0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_0281f99c(uVar7);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
    }
    lVar8 = *plVar9;
    lVar6 = lVar6 + lVar5;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *plVar9;
    }
    in_stack_00000088 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
    lVar5 = FUN_0274322c(&stack0x00000088,0);
    if (lVar6 < lVar5) {
      lVar6 = *plVar9;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *plVar9;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
      goto LAB_028205a4;
    }
LAB_028205b8:
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = 2;
    goto LAB_028205d4;
  }
  uVar7 = in_stack_00000098;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_0281fa84(uVar7,unaff_w20);
  *unaff_x19 = uVar7;
LAB_02820644:
  return uVar4 & 1;
}


