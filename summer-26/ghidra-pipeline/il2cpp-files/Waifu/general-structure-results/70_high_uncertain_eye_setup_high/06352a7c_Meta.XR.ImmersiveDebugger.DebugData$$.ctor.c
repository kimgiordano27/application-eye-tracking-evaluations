/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugData$$.ctor
ENTRY_POINT: 06352a7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_ImmersiveDebugger_DebugData___ctor(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 in_CY;
  int iVar27;
  undefined4 uVar28;
  long in_x9;
  long in_x10;
  long lVar29;
  ulong unaff_x19;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined4 unaff_s8;
  undefined1 auVar30 [16];
  long in_stack_00000008;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 uStack0000000000000168;
  uint uStack000000000000016c;
  
  auVar30._8_8_ = unaff_x24;
  auVar30._0_8_ = unaff_x23;
  while (!(bool)in_CY) {
    lVar29 = *(long *)(in_x10 + unaff_x19 * 8 + 0x20);
    if ((lVar29 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) {
LAB_06352d60:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(in_x9 + 0x10);
    uVar16 = *(undefined8 *)(in_x9 + 0x18);
    uVar5 = *(undefined8 *)(lVar29 + 0x10);
    uVar17 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_0631798c(*(long *)(unaff_x22 + 0x18),0);
    if ((lVar29 == 0) ||
       ((lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))))
    goto LAB_06352d60;
    uVar6 = *(undefined8 *)(lVar29 + 0x10);
    uVar18 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if ((lVar29 == 0) ||
       ((lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))))
    goto LAB_06352d60;
    uVar7 = *(undefined8 *)(lVar29 + 0x10);
    uVar19 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if ((lVar29 == 0) ||
       ((lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))))
    goto LAB_06352d60;
    uVar8 = *(undefined8 *)(lVar29 + 0x10);
    uVar20 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if ((lVar29 == 0) ||
       ((lVar29 = *(long *)(lVar29 + 0x88), lVar29 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))))
    goto LAB_06352d60;
    uVar9 = *(undefined8 *)(lVar29 + 0x10);
    uVar21 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if ((lVar29 == 0) ||
       ((lVar29 = *(long *)(lVar29 + 0xa8), lVar29 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))))
    goto LAB_06352d60;
    uVar10 = *(undefined8 *)(lVar29 + 0x10);
    uVar22 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if ((lVar29 == 0) ||
       ((lVar29 = *(long *)(lVar29 + 0x58), lVar29 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))))
    goto LAB_06352d60;
    uVar11 = *(undefined8 *)(lVar29 + 0x10);
    uVar23 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (lVar29 == 0) goto LAB_06352d60;
    plVar2 = (long *)(lVar29 + 0xd0);
    if (*(int *)(lVar29 + 0xe0) != 0) {
      plVar2 = (long *)(lVar29 + 0xd8);
    }
    lVar29 = *plVar2;
    if ((lVar29 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) goto LAB_06352d60;
    uVar12 = *(undefined8 *)(lVar29 + 0x10);
    uVar24 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (lVar29 == 0) goto LAB_06352d60;
    plVar2 = (long *)(lVar29 + 0xd8);
    if (*(int *)(lVar29 + 0xe0) != 0) {
      plVar2 = (long *)(lVar29 + 0xd0);
    }
    lVar29 = *plVar2;
    if ((lVar29 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) goto LAB_06352d60;
    uVar13 = *(undefined8 *)(lVar29 + 0x10);
    uVar25 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (lVar29 == 0) goto LAB_06352d60;
    lVar29 = *(long *)(lVar29 + 0x28);
    if (lVar29 == 0) goto LAB_06352d60;
    uStack000000000000016c = (uint)unaff_x25;
    if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_06352d60;
    uVar14 = *(undefined8 *)(lVar29 + 0x10);
    uVar26 = *(undefined8 *)(lVar29 + 0x18);
    lVar29 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (lVar29 == 0) goto LAB_06352d60;
    if ((DAT_086de93e & 1) == 0) {
      FUN_0335b6c8(&DAT_083eb4b0,1);
      DataMemoryBarrier(2,3);
      DAT_086de93e = 1;
    }
    if (*(long *)(lVar29 + 0x18) == 0) {
      uVar28 = 0;
    }
    else {
      uVar28 = *(undefined4 *)(*(long *)(lVar29 + 0x18) + 0x30);
    }
    uStack0000000000000094 = uStack0000000000000168;
    uStack0000000000000098 = uStack000000000000016c;
    uStack000000000000009c = 0;
    uStack0000000000000090 = unaff_s8;
    in_stack_000000a0 = uVar3;
    in_stack_000000a8 = uVar15;
    in_stack_000000b0 = uVar4;
    in_stack_000000b8 = uVar16;
    in_stack_000000c0 = uVar5;
    in_stack_000000c8 = uVar17;
    in_stack_000000d0 = uVar6;
    in_stack_000000d8 = uVar18;
    in_stack_000000e0 = uVar7;
    in_stack_000000e8 = uVar19;
    in_stack_000000f0 = uVar8;
    in_stack_000000f8 = uVar20;
    in_stack_00000100 = uVar9;
    in_stack_00000108 = uVar21;
    in_stack_00000110 = uVar10;
    in_stack_00000118 = uVar22;
    in_stack_00000120 = uVar11;
    in_stack_00000128 = uVar23;
    in_stack_00000130 = uVar12;
    in_stack_00000138 = uVar24;
    in_stack_00000140 = uVar13;
    in_stack_00000148 = uVar25;
    in_stack_00000150 = uVar14;
    in_stack_00000158 = uVar26;
    auVar30 = FUN_04004310(&stack0x00000090,uVar28,0x40,auVar30._0_8_,auVar30._8_8_,DAT_0840efb8);
    if ((*(long *)(in_stack_00000008 + 0x18) == 0) ||
       (lVar29 = FUN_06317848(*(long *)(in_stack_00000008 + 0x18),0), lVar29 == 0))
    goto LAB_06352d60;
    iVar27 = *(int *)(lVar29 + 0xe0);
    unaff_x19 = (ulong)uStack000000000000016c;
    uVar1 = iVar27 + 2;
    if (-1 < iVar27 + 1) {
      uVar1 = iVar27 + 1;
    }
    *(uint *)(lVar29 + 0xe0) = (iVar27 + 1) - (uVar1 & 0xfffffffe);
    do {
      uVar1 = (int)unaff_x19 - 1;
      unaff_x19 = (ulong)uVar1;
      if (uVar1 == 0xffffffff) {
        return auVar30;
      }
      lVar29 = *(long *)(in_stack_00000008 + 0x20);
      if (lVar29 == 0) goto LAB_06352d60;
      if (*(uint *)(lVar29 + 0x18) <= uVar1) goto LAB_06352d64;
      lVar29 = *(long *)(lVar29 + unaff_x19 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_06352d60;
      iVar27 = FUN_042b66ec(lVar29,DAT_083eb4e8);
    } while (iVar27 == 0);
    lVar29 = *(long *)(in_stack_00000008 + 0x20);
    if (lVar29 == 0) goto LAB_06352d60;
    if (*(uint *)(lVar29 + 0x18) <= uVar1) break;
    param_1 = *(long *)(lVar29 + unaff_x19 * 8 + 0x20);
    if (((param_1 == 0) || (in_x9 = *(long *)(in_stack_00000008 + 0x30), in_x9 == 0)) ||
       (in_x10 = *(long *)(in_stack_00000008 + 0x28), in_x10 == 0)) goto LAB_06352d60;
    unaff_x22 = in_stack_00000008;
    unaff_x25 = unaff_x19;
    in_CY = *(uint *)(in_x10 + 0x18) <= uVar1;
  }
LAB_06352d64:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


