/*
FUNCTION_NAME: OVRPlugin$$SetClientColorDesc
ENTRY_POINT: 06acd450
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


long * OVRPlugin__SetClientColorDesc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long in_x11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0338f71c();
      goto LAB_06acd480;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_06acd480:
  plVar2 = (long *)(*(code *)*puVar1)();
  uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
  uVar6 = *unaff_x21;
  uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
  uStack000000000000004c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
  uStack0000000000000054 = uStack0000000000000034;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uStack0000000000000028 = (undefined4)unaff_x21[1];
  uStack000000000000002c = uStack000000000000004c;
  lVar3 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_083ccd68) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_06acd508;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083ccd68,4);
LAB_06acd508:
  in_stack_00000068 = uStack0000000000000028;
  uStack0000000000000074 = uStack0000000000000034;
  uStack000000000000006c = uStack000000000000002c;
  in_stack_00000070 = uStack0000000000000050;
  in_stack_00000060 = uVar6;
  (*(code *)*puVar1)(plVar2,&stack0x00000060,puVar1[1]);
  uStack0000000000000014 = *(undefined8 *)((long)unaff_x19 + 0x14);
  uVar6 = *unaff_x19;
  uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
  uStack0000000000000008 = (undefined4)unaff_x19[1];
  uStack000000000000000c = (undefined4)((ulong)unaff_x19[1] >> 0x20);
  lVar3 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_083ccd68) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_06acd58c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083ccd68,2);
LAB_06acd58c:
  in_stack_00000068 = uStack0000000000000008;
  uStack0000000000000074 = uStack0000000000000014;
  uStack000000000000006c = uStack000000000000000c;
  in_stack_00000070 = uStack0000000000000010;
  in_stack_00000060 = uVar6;
  (*(code *)*puVar1)(plVar2,&stack0x00000060,puVar1[1]);
  return plVar2;
}


