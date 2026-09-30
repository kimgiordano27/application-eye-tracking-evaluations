/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughInitialized
ENTRY_POINT: 06abf3a8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__IsInsightPassthroughInitialized(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 uVar8;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cd2b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cffc8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0x1fd) = 1;
  }
  if (unaff_w19 == 0) {
    if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_07a1747c(&stack0x00000060,0);
  }
  else {
    lVar3 = FUN_06abc834();
    if (lVar3 == 0) {
      uStack0000000000000074 = *(undefined8 *)((long)unaff_x21 + 0x14);
      in_stack_00000060 = *unaff_x21;
      uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      uStack0000000000000068 = (undefined4)unaff_x21[1];
      uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
    }
    else {
      plVar4 = (long *)FUN_06abc834();
      uStack0000000000000014 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar8 = *unaff_x21;
      in_stack_00000050 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      uVar2 = in_stack_00000050;
      in_stack_00000048 = (undefined4)unaff_x21[1];
      uVar1 = in_stack_00000048;
      uStack000000000000004c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
      in_stack_00000040 = uVar8;
      uStack0000000000000054 = uStack0000000000000014;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uStack000000000000000c = uStack000000000000004c;
      lVar3 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_083cd2b8) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_06abf4b0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_0338f71c(plVar4,DAT_083cd2b8,1);
LAB_06abf4b0:
      uStack0000000000000068 = uVar1;
      uStack0000000000000074 = uStack0000000000000014;
      uStack000000000000006c = uStack000000000000000c;
      uStack0000000000000070 = uVar2;
      in_stack_00000060 = uVar8;
      (*(code *)*puVar5)(&stack0x00000020,plVar4,&stack0x00000060,puVar5[1]);
      uStack0000000000000068 = uStack0000000000000028;
      in_stack_00000060 = in_stack_00000020;
      uStack0000000000000074 = uStack0000000000000034;
      uStack000000000000006c = uStack000000000000002c;
      uStack0000000000000070 = uStack0000000000000030;
    }
  }
  *(undefined8 *)((long)unaff_x20 + 0x14) = uStack0000000000000074;
  *(ulong *)((long)unaff_x20 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
  unaff_x20[1] = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  *unaff_x20 = in_stack_00000060;
  return unaff_w19 != 0;
}


