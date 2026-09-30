/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_89
ENTRY_POINT: 02820320
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


uint OVRPlugin_<>c__<_cctor>b__710_89
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  uint unaff_w21;
  long *unaff_x24;
  long *plVar7;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  int iStack00000000000000c4;
  
  uStack0000000000000020 = param_4;
  uStack0000000000000030 = param_1;
  in_stack_00000098 = FUN_02820664();
  uVar2 = uStack00000000000000c0;
  puVar1 = PTR_DAT_03cc4b20;
  if (iStack00000000000000c4 == 1) {
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = FUN_0274322c(&stack0x00000098,0);
    uVar5 = 1;
  }
  else {
    if (iStack00000000000000c4 == 2) {
      if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02784594(&stack0x00000090,in_stack_000000b8._4_4_,uVar2,0,0);
      plVar7 = (long *)PTR_DAT_03cbeeb0;
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar3 = FUN_0274322c(&stack0x00000098,0);
      lVar3 = in_stack_00000090 + lVar3;
      in_stack_00000088 = *(undefined8 *)(*(long *)(*plVar7 + 0xb8) + 0x18);
      lVar4 = FUN_0274322c(&stack0x00000088,0);
      uVar5 = in_stack_00000098;
      if (lVar3 <= lVar4) {
LAB_028205e0:
        in_stack_00000040 = 0;
        FUN_02742a20(&stack0x00000040,lVar3,1,0);
        in_stack_00000088 = in_stack_00000040;
        if (*(int *)(*plVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000098 = FUN_02745234(&stack0x00000088,0);
        goto LAB_02820620;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar4 = FUN_0281f99c(uVar5);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar6);
      }
      lVar6 = *plVar7;
      lVar4 = lVar4 + lVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *plVar7;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
      lVar3 = FUN_0274322c(&stack0x00000088,0);
      if (lVar3 < lVar4) {
        lVar4 = *plVar7;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *plVar7;
        }
        in_stack_00000088 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
LAB_028205a4:
        lVar4 = FUN_0274322c(&stack0x00000088,0);
      }
    }
    else {
      if (iStack00000000000000c4 != 3) goto LAB_02820620;
      if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02784594(&stack0x00000080,in_stack_000000b8._4_4_,uVar2,0,0);
      plVar7 = (long *)PTR_DAT_03cbeeb0;
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar3 = FUN_0274322c(&stack0x00000098,0);
      lVar3 = lVar3 - in_stack_00000080;
      in_stack_00000088 = *(undefined8 *)(*(long *)(*plVar7 + 0xb8) + 0x10);
      lVar4 = FUN_0274322c(&stack0x00000088,0);
      uVar5 = in_stack_00000098;
      if (lVar4 <= lVar3) goto LAB_028205e0;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar4 = FUN_0281f99c(uVar5);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar6);
      }
      lVar6 = *plVar7;
      lVar4 = lVar4 + lVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *plVar7;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
      lVar3 = FUN_0274322c(&stack0x00000088,0);
      if (lVar4 < lVar3) {
        lVar4 = *plVar7;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *plVar7;
        }
        in_stack_00000088 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
        goto LAB_028205a4;
      }
    }
    if (*(int *)(*plVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = 2;
  }
  FUN_02742a20(&stack0x00000098,lVar4,uVar5,0);
LAB_02820620:
  uVar5 = in_stack_00000098;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_0281fa84(uVar5,unaff_w20);
  *unaff_x19 = uVar5;
  return unaff_w21 & 1;
}


