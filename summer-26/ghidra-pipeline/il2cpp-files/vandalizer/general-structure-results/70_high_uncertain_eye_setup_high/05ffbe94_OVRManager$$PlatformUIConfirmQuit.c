/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 05ffbe94
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PlatformUIConfirmQuit(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  int *unaff_x20;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined8 uStack0000000000000154;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined4 uStack000000000000017c;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  
  if (((*(char *)(param_1 + 0xd8) == '\0') ||
      (iVar1 = *unaff_x20, iVar8 = FUN_0445a2c8(), iVar1 == iVar8)) ||
     ((unaff_x20[4] & 0xfffffffeU) != 2)) {
    return;
  }
  FUN_05fffce0(&stack0x00000160);
  uStack00000000000000b4 = CONCAT44(in_stack_00000178,uStack0000000000000174);
  in_stack_000000b0 = uStack0000000000000170;
  in_stack_000000a8 = uStack0000000000000168;
  in_stack_000000a0 = in_stack_00000160;
  *(ulong *)(unaff_x19 + 0x1b4) = CONCAT44(uStack000000000000016c,uStack0000000000000168);
  *(undefined8 *)(unaff_x19 + 0x1ac) = in_stack_00000160;
  *(undefined8 *)(unaff_x19 + 0x1c0) = uStack00000000000000b4;
  *(ulong *)(unaff_x19 + 0x1b8) = CONCAT44(uStack0000000000000170,uStack000000000000016c);
  FUN_05ffc068();
  uVar10 = FUN_05fff2c0();
  *(undefined8 *)(unaff_x19 + 0x180) = uVar10;
  thunk_FUN_0329bf60(unaff_x19 + 0x180);
  FUN_05fff3a8(&stack0x00000160);
  uStack0000000000000154 = CONCAT44(in_stack_00000178,uStack0000000000000174);
  in_stack_00000148 = uStack0000000000000168;
  in_stack_00000140 = in_stack_00000160;
  in_stack_00000150 = uStack0000000000000170;
  uVar9 = FUN_0445a2c8();
  in_stack_00000088 = in_stack_00000148;
  in_stack_00000080 = in_stack_00000140;
  uStack0000000000000094 = uStack0000000000000154;
  in_stack_00000090 = in_stack_00000150;
  FUN_05f8600c(&stack0x00000100,uVar9,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x108),0);
  uVar7 = in_stack_00000130;
  uVar6 = in_stack_00000128;
  uVar5 = in_stack_00000120;
  uVar4 = in_stack_00000118;
  uVar3 = in_stack_00000110;
  uVar2 = in_stack_00000108;
  uVar10 = in_stack_00000100;
  if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
     (plVar15 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar15 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar12 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_075d99e8) {
        puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_05ffc020;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar11 = (undefined8 *)FUN_0322c1e8(plVar15,*(long *)PTR_DAT_075d99e8,0);
LAB_05ffc020:
  uStack0000000000000168 = (undefined4)uVar2;
  uStack000000000000016c = (undefined4)((ulong)uVar2 >> 0x20);
  in_stack_00000160 = uVar10;
  in_stack_00000178 = (undefined4)uVar4;
  uStack000000000000017c = (undefined4)((ulong)uVar4 >> 0x20);
  uStack0000000000000170 = (undefined4)uVar3;
  uStack0000000000000174 = (undefined4)((ulong)uVar3 >> 0x20);
  in_stack_00000188 = uVar6;
  in_stack_00000180 = uVar5;
  in_stack_00000190 = uVar7;
  (*(code *)*puVar11)(plVar15,&stack0x00000160,puVar11[1]);
  return;
}


