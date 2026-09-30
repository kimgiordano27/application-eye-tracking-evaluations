/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$Init
ENTRY_POINT: 06352b08
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


undefined1  [16] Meta_XR_ImmersiveDebugger_RuntimeSettings__Init(undefined8 param_1,long param_2)

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
  int iVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  undefined8 in_x9;
  long lVar19;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined4 unaff_s8;
  undefined1 auVar20 [16];
  long in_stack_00000008;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
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
  
  auVar20._8_8_ = unaff_x24;
  auVar20._0_8_ = unaff_x23;
  while( true ) {
    uStack0000000000000068 = param_1;
    uStack0000000000000070 = in_x9;
    lVar16 = FUN_06317848(param_2,0);
    if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x88), lVar16 == 0)) ||
       (*(long *)(unaff_x22 + 0x18) == 0)) break;
    uVar3 = *(undefined8 *)(lVar16 + 0x10);
    uVar9 = *(undefined8 *)(lVar16 + 0x18);
    lVar16 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0xa8), lVar16 == 0)) ||
       (*(long *)(unaff_x22 + 0x18) == 0)) break;
    uVar4 = *(undefined8 *)(lVar16 + 0x10);
    uVar10 = *(undefined8 *)(lVar16 + 0x18);
    lVar16 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x58), lVar16 == 0)) ||
       (*(long *)(unaff_x22 + 0x18) == 0)) break;
    uVar5 = *(undefined8 *)(lVar16 + 0x10);
    uVar11 = *(undefined8 *)(lVar16 + 0x18);
    lVar16 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (lVar16 == 0) break;
    plVar2 = (long *)(lVar16 + 0xd0);
    if (*(int *)(lVar16 + 0xe0) != 0) {
      plVar2 = (long *)(lVar16 + 0xd8);
    }
    lVar16 = *plVar2;
    if ((lVar16 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) break;
    uVar6 = *(undefined8 *)(lVar16 + 0x10);
    uVar12 = *(undefined8 *)(lVar16 + 0x18);
    lVar16 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (lVar16 == 0) break;
    plVar2 = (long *)(lVar16 + 0xd8);
    if (*(int *)(lVar16 + 0xe0) != 0) {
      plVar2 = (long *)(lVar16 + 0xd0);
    }
    lVar16 = *plVar2;
    if ((lVar16 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) break;
    uVar7 = *(undefined8 *)(lVar16 + 0x10);
    uVar13 = *(undefined8 *)(lVar16 + 0x18);
    lVar16 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (lVar16 == 0) break;
    lVar16 = *(long *)(lVar16 + 0x28);
    if (lVar16 == 0) break;
    uStack000000000000016c = (uint)unaff_x25;
    if (*(long *)(unaff_x22 + 0x18) == 0) break;
    uVar8 = *(undefined8 *)(lVar16 + 0x10);
    uVar14 = *(undefined8 *)(lVar16 + 0x18);
    lVar16 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if (lVar16 == 0) break;
    if ((DAT_086de93e & 1) == 0) {
      FUN_0335b6c8(&DAT_083eb4b0,1);
      DataMemoryBarrier(2,3);
      DAT_086de93e = 1;
    }
    if (*(long *)(lVar16 + 0x18) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x30);
    }
    uStack0000000000000094 = uStack0000000000000168;
    uStack0000000000000098 = uStack000000000000016c;
    uStack000000000000009c = 0;
    in_stack_000000d8 = in_stack_00000088;
    in_stack_000000e0 = in_stack_00000080;
    in_stack_000000e8 = in_stack_00000078;
    in_stack_000000f0 = uStack0000000000000070;
    in_stack_000000f8 = uStack0000000000000068;
    uStack0000000000000090 = unaff_s8;
    in_stack_000000a0 = unaff_x19;
    in_stack_000000a8 = unaff_x20;
    in_stack_000000b0 = unaff_x27;
    in_stack_000000b8 = unaff_x21;
    in_stack_000000c0 = unaff_x26;
    in_stack_000000c8 = unaff_x28;
    in_stack_000000d0 = unaff_x29;
    in_stack_00000100 = uVar3;
    in_stack_00000108 = uVar9;
    in_stack_00000110 = uVar4;
    in_stack_00000118 = uVar10;
    in_stack_00000120 = uVar5;
    in_stack_00000128 = uVar11;
    in_stack_00000130 = uVar6;
    in_stack_00000138 = uVar12;
    in_stack_00000140 = uVar7;
    in_stack_00000148 = uVar13;
    in_stack_00000150 = uVar8;
    in_stack_00000158 = uVar14;
    auVar20 = FUN_04004310(&stack0x00000090,uVar17,0x40,auVar20._0_8_,auVar20._8_8_,DAT_0840efb8);
    if ((*(long *)(in_stack_00000008 + 0x18) == 0) ||
       (lVar16 = FUN_06317848(*(long *)(in_stack_00000008 + 0x18),0), lVar16 == 0)) break;
    iVar15 = *(int *)(lVar16 + 0xe0);
    unaff_x25 = (ulong)uStack000000000000016c;
    uVar1 = iVar15 + 2;
    if (-1 < iVar15 + 1) {
      uVar1 = iVar15 + 1;
    }
    *(uint *)(lVar16 + 0xe0) = (iVar15 + 1) - (uVar1 & 0xfffffffe);
    do {
      uVar1 = (int)unaff_x25 - 1;
      unaff_x25 = (ulong)uVar1;
      if (uVar1 == 0xffffffff) {
        return auVar20;
      }
      lVar16 = *(long *)(in_stack_00000008 + 0x20);
      if (lVar16 == 0) goto LAB_06352d60;
      if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_06352d64;
      lVar16 = *(long *)(lVar16 + unaff_x25 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_06352d60;
      iVar15 = FUN_042b66ec(lVar16,DAT_083eb4e8);
    } while (iVar15 == 0);
    lVar16 = *(long *)(in_stack_00000008 + 0x20);
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar1) {
LAB_06352d64:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar16 = *(long *)(lVar16 + unaff_x25 * 8 + 0x20);
    if (((lVar16 == 0) || (lVar18 = *(long *)(in_stack_00000008 + 0x30), lVar18 == 0)) ||
       (lVar19 = *(long *)(in_stack_00000008 + 0x28), lVar19 == 0)) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar1) goto LAB_06352d64;
    lVar19 = *(long *)(lVar19 + unaff_x25 * 8 + 0x20);
    if ((lVar19 == 0) || (*(long *)(in_stack_00000008 + 0x18) == 0)) break;
    unaff_x19 = *(undefined8 *)(lVar16 + 0x10);
    unaff_x20 = *(undefined8 *)(lVar16 + 0x18);
    unaff_x27 = *(undefined8 *)(lVar18 + 0x10);
    unaff_x21 = *(undefined8 *)(lVar18 + 0x18);
    unaff_x26 = *(undefined8 *)(lVar19 + 0x10);
    unaff_x28 = *(undefined8 *)(lVar19 + 0x18);
    lVar16 = FUN_0631798c(*(long *)(in_stack_00000008 + 0x18),0);
    if ((lVar16 == 0) ||
       ((lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0 ||
        (*(long *)(in_stack_00000008 + 0x18) == 0)))) break;
    unaff_x29 = *(undefined8 *)(lVar16 + 0x10);
    in_stack_00000088 = *(undefined8 *)(lVar16 + 0x18);
    lVar16 = FUN_06317848(*(long *)(in_stack_00000008 + 0x18),0);
    if ((lVar16 == 0) ||
       ((lVar16 = *(long *)(lVar16 + 0x20), lVar16 == 0 ||
        (*(long *)(in_stack_00000008 + 0x18) == 0)))) break;
    in_stack_00000080 = *(undefined8 *)(lVar16 + 0x10);
    in_stack_00000078 = *(undefined8 *)(lVar16 + 0x18);
    lVar16 = FUN_06317848(*(long *)(in_stack_00000008 + 0x18),0);
    if ((lVar16 == 0) ||
       ((lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0 ||
        (param_2 = *(long *)(in_stack_00000008 + 0x18), param_2 == 0)))) break;
    in_x9 = *(undefined8 *)(lVar16 + 0x10);
    param_1 = *(undefined8 *)(lVar16 + 0x18);
    unaff_x22 = in_stack_00000008;
  }
LAB_06352d60:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


