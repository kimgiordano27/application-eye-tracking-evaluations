/*
FUNCTION_NAME: OVRPlugin$$IsMixedRealityInitialized
ENTRY_POINT: 0909f95c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsMixedRealityInitialized(void)

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
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar15;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined1 in_stack_00000060 [16];
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac78dc8);
  FUN_04947ee4(PTR_DAT_0ac78d78);
  FUN_04947ee4(PTR_DAT_0ac09788);
  FUN_04947ee4(PTR_DAT_0ac78bd0);
  FUN_04947ee4(PTR_DAT_0ac78db8);
  *(undefined1 *)(unaff_x23 + 0x262) = 1;
  in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0xc);
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  uStack00000000000000d4 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_000000e8 = *(undefined8 *)(unaff_x20 + 2);
  in_stack_000000e0 = *(undefined8 *)unaff_x20;
  in_stack_000000f8 = *(undefined8 *)(unaff_x20 + 6);
  in_stack_000000f0 = *(undefined8 *)(unaff_x20 + 4);
  in_stack_000000b0 = 0;
  in_stack_00000108 = *(undefined8 *)(unaff_x20 + 10);
  in_stack_00000100 = *(undefined8 *)(unaff_x20 + 8);
  FUN_0717c94c();
  uVar15 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar10 = FUN_0a17cd28(uVar15,0,0);
  if ((uVar10 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0xd0) == 0) {
LAB_0909fba0:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) != '\0') {
      iVar1 = *unaff_x20;
      iVar8 = FUN_066842d8();
      if ((iVar1 != iVar8) && ((unaff_x20[4] & 0xfffffffeU) == 2)) {
        FUN_0909dd40(&stack0x00000060 + 4);
        *(ulong *)(unaff_x19 + 0x1c0) = CONCAT44(uStack0000000000000070,in_stack_00000060._12_4_);
        *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000060._4_8_;
        *(undefined8 *)(unaff_x19 + 0x1cc) = in_stack_00000078;
        *(ulong *)(unaff_x19 + 0x1c4) = CONCAT44(uStack0000000000000074,uStack0000000000000070);
        FUN_0909fba4();
        uVar15 = FUN_0909d2ac();
        *(undefined8 *)(unaff_x19 + 0x198) = uVar15;
        thunk_FUN_049ee3d8(unaff_x19 + 0x198,uVar15);
        FUN_0909d394(&stack0x000000c0);
        uVar9 = FUN_066842d8();
        uStack0000000000000054 = CONCAT44(in_stack_000000d8,uStack00000000000000d4);
        uStack0000000000000048 = in_stack_000000c8;
        in_stack_00000040 = in_stack_000000c0;
        uStack000000000000004c = uStack00000000000000cc;
        uStack0000000000000050 = in_stack_000000d0;
        FUN_09024c94(&stack0x00000080,uVar9,4,&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x108),0)
        ;
        uVar7 = in_stack_000000b0;
        uVar6 = in_stack_000000a8;
        uVar5 = in_stack_000000a0;
        uVar4 = in_stack_00000098;
        uVar3 = in_stack_00000090;
        uVar2 = in_stack_00000088;
        uVar15 = in_stack_00000080;
        if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
           (plVar14 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar14 == (long *)0x0))
        goto LAB_0909fba0;
        lVar12 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac449f0) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0909fb5c;
            }
            uVar10 = uVar10 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac449f0,0);
LAB_0909fb5c:
        in_stack_000000e8 = uVar2;
        in_stack_000000e0 = uVar15;
        in_stack_000000f8 = uVar4;
        in_stack_000000f0 = uVar3;
        in_stack_00000108 = uVar6;
        in_stack_00000100 = uVar5;
        in_stack_00000110 = uVar7;
        (*(code *)*puVar11)(plVar14,&stack0x000000e0,puVar11[1]);
      }
    }
  }
  return;
}


