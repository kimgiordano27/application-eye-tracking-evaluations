/*
FUNCTION_NAME: OVRManager$$StaticInitializeMixedRealityCapture
ENTRY_POINT: 060bf1a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRManager__StaticInitializeMixedRealityCapture(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0x600)) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_060bf1f8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bf1f8:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_07a21620;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *plVar3;
  uVar7 = *unaff_x21;
  uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  uStack0000000000000028 = (undefined4)unaff_x21[1];
  uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x21 + 0xc);
  uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a21620) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_060bf274;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_07a21620,4);
LAB_060bf274:
  in_stack_00000048 = uStack0000000000000028;
  uStack0000000000000054 = uStack0000000000000034;
  uStack000000000000004c = uStack000000000000002c;
  in_stack_00000050 = uStack0000000000000030;
  in_stack_00000040 = uVar7;
  (*(code *)*puVar2)(plVar3,&stack0x00000040,puVar2[1]);
  lVar4 = *plVar3;
  uVar7 = *unaff_x19;
  uStack0000000000000014 = *(undefined8 *)((long)unaff_x19 + 0x14);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  uStack0000000000000008 = (undefined4)unaff_x19[1];
  uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x19 + 0xc);
  uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_060bf2f8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)puVar1,2);
LAB_060bf2f8:
  in_stack_00000048 = uStack0000000000000008;
  uStack0000000000000054 = uStack0000000000000014;
  uStack000000000000004c = uStack000000000000000c;
  in_stack_00000050 = uStack0000000000000010;
  in_stack_00000040 = uVar7;
  (*(code *)*puVar2)(plVar3,&stack0x00000040,puVar2[1]);
  return plVar3;
}


