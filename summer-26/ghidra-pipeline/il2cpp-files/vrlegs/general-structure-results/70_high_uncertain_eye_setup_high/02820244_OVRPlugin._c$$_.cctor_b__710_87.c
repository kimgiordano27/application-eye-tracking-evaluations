/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_87
ENTRY_POINT: 02820244
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


uint OVRPlugin_<>c__<_cctor>b__710_87
               (ulong param_1,undefined8 param_2,ulong param_3,undefined4 param_4,
               undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x24;
  long *plVar10;
  long unaff_x25;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  plVar10 = *(long **)(unaff_x24 + 0x788);
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfe788);
    FUN_01ab69ac(PTR_DAT_03cfdb18);
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    *(undefined1 *)(unaff_x25 + 0x3bb) = 1;
  }
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d0 = 0;
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_0281eea4(&stack0x000000a0,param_2,param_3 & 0xffffffff,param_3 >> 0x20);
  puVar2 = PTR_DAT_03cfdb18;
  if ((uVar5 & 1) == 0) {
    *param_5 = 0;
    goto LAB_02820644;
  }
  in_stack_00000048 = in_stack_000000a8;
  in_stack_00000040 = in_stack_000000a0;
  in_stack_00000058 = in_stack_000000b8;
  in_stack_00000050 = in_stack_000000b0;
  in_stack_00000068 = in_stack_000000c8;
  in_stack_00000060 = in_stack_000000c0;
  in_stack_00000070 = in_stack_000000d0;
  if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_00000098 = FUN_02820664();
  uVar4 = in_stack_000000c0;
  puVar1 = PTR_DAT_03cc4b20;
  if (in_stack_000000c0._4_4_ == 1) {
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar7 = FUN_0274322c(&stack0x00000098,0);
    uVar8 = 1;
LAB_028205d4:
    FUN_02742a20(&stack0x00000098,lVar7,uVar8,0);
  }
  else {
    uVar3 = in_stack_000000b8._4_4_;
    if (in_stack_000000c0._4_4_ == 2) {
      if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02784594(&stack0x00000090,uVar3,uVar4 & 0xffffffff,0,0);
      plVar10 = (long *)PTR_DAT_03cbeeb0;
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar6 = FUN_0274322c(&stack0x00000098,0);
      lVar6 = in_stack_00000090 + lVar6;
      in_stack_00000088 = *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x18);
      lVar7 = FUN_0274322c(&stack0x00000088,0);
      uVar8 = in_stack_00000098;
      if (lVar7 < lVar6) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar7 = FUN_0281f99c(uVar8);
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar9);
        }
        lVar9 = *plVar10;
        lVar7 = lVar7 + lVar6;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *plVar10;
        }
        in_stack_00000088 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
        lVar6 = FUN_0274322c(&stack0x00000088,0);
        if (lVar6 < lVar7) {
          lVar7 = *plVar10;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = *plVar10;
          }
          in_stack_00000088 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
LAB_028205a4:
          lVar7 = FUN_0274322c(&stack0x00000088,0);
        }
        goto LAB_028205b8;
      }
LAB_028205e0:
      in_stack_00000040 = 0;
      FUN_02742a20(&stack0x00000040,lVar6,1,0);
      in_stack_00000088 = in_stack_00000040;
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000098 = FUN_02745234(&stack0x00000088,0);
    }
    else if (in_stack_000000c0._4_4_ == 3) {
      if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02784594(&stack0x00000080,uVar3,uVar4 & 0xffffffff,0,0);
      plVar10 = (long *)PTR_DAT_03cbeeb0;
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar6 = FUN_0274322c(&stack0x00000098,0);
      lVar6 = lVar6 - in_stack_00000080;
      in_stack_00000088 = *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x10);
      lVar7 = FUN_0274322c(&stack0x00000088,0);
      uVar8 = in_stack_00000098;
      if (lVar7 <= lVar6) goto LAB_028205e0;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar7 = FUN_0281f99c(uVar8);
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar9);
      }
      lVar9 = *plVar10;
      lVar7 = lVar7 + lVar6;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *plVar10;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
      lVar6 = FUN_0274322c(&stack0x00000088,0);
      if (lVar7 < lVar6) {
        lVar7 = *plVar10;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar7 = *plVar10;
        }
        in_stack_00000088 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
        goto LAB_028205a4;
      }
LAB_028205b8:
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = 2;
      goto LAB_028205d4;
    }
  }
  uVar8 = in_stack_00000098;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_0281fa84(uVar8,param_4);
  *param_5 = uVar8;
LAB_02820644:
  return uVar5 & 1;
}


