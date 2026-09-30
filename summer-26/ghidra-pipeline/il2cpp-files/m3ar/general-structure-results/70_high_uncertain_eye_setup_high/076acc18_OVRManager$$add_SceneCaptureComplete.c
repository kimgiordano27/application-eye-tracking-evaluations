/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 076acc18
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SceneCaptureComplete(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long unaff_x22;
  long *plVar13;
  long unaff_x23;
  long unaff_x25;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  
  puVar3 = PTR_DAT_08fad148;
  puVar14 = *(undefined8 **)(unaff_x25 + 0x150);
  plVar13 = *(long **)(unaff_x22 + 0x1b8);
  FUN_058f4880(&stack0x00000028,param_2,**(undefined8 **)(param_1 + 0x160));
  fVar31 = 0.0;
  in_stack_00000090 = in_stack_00000038;
  in_stack_00000048 = &stack0x00000080;
  in_stack_00000088 = in_stack_00000030;
  in_stack_00000080 = in_stack_00000028;
  in_stack_00000040 = 0;
  while (uVar6 = FUN_07250aac(&stack0x00000080,*puVar14), uVar10 = in_stack_00000090,
        (uVar6 & 1) != 0) {
    plVar12 = *(long **)(unaff_x19 + 0x28);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar13) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_076accc0;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar12,*plVar13,9);
LAB_076accc0:
    uVar6 = (*(code *)*puVar7)(plVar12,uVar10 & 0xffffffff,&stack0x00000060,puVar7[1]);
    if ((uVar6 & 1) == 0) {
      FUN_07250aa8(&stack0x00000080,*(undefined8 *)puVar3);
      return;
    }
    fVar15 = (float)(uVar10 >> 0x20);
    fVar31 = fVar31 + fVar15;
    FUN_076b6f6c(fVar15 / fVar31,&stack0x000000a0,&stack0x00000060,0);
  }
  FUN_07250aa8(&stack0x00000080,*(undefined8 *)puVar3);
  plVar12 = *(long **)(unaff_x19 + 0x28);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar13) {
          puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076acd6c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar14 = (undefined8 *)FUN_0406ae20(plVar12,*plVar13,0);
LAB_076acd6c:
    iVar5 = (*(code *)*puVar14)(plVar12,puVar14[1]);
    fVar31 = in_stack_000000a8;
    uVar4 = in_stack_000000a0;
    fVar16 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x48) >> 0x20);
    fVar20 = *(float *)(unaff_x19 + 0x44);
    fVar26 = (float)*(undefined8 *)(unaff_x23 + 0x14);
    fVar27 = (float)((ulong)*(undefined8 *)(unaff_x23 + 0x14) >> 0x20);
    uVar8 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x23 + 0xc);
    fVar24 = (float)uVar8;
    fVar25 = (float)((ulong)uVar8 >> 0x20);
    fVar15 = (float)*(undefined8 *)(unaff_x19 + 0x48);
    auVar29._4_4_ = fVar27;
    auVar29._0_4_ = fVar27;
    auVar29._8_4_ = fVar27;
    auVar29._12_4_ = fVar27;
    fVar17 = *(float *)(unaff_x19 + 0x50);
    fVar18 = fVar25 * fVar17;
    fVar19 = fVar27 * fVar17;
    fVar21 = fVar20 * fVar25;
    fVar22 = fVar15 * fVar26;
    fVar23 = fVar15 * fVar25;
    auVar28._12_4_ = fVar27;
    auVar28._0_12_ = *(undefined1 (*) [12])(unaff_x23 + 0xc);
    auVar28 = NEON_ext(auVar29,auVar28,4,1);
    auVar30._4_4_ = fVar18;
    auVar30._0_4_ = fVar24 * fVar17;
    auVar30._8_4_ = fVar26 * fVar17;
    auVar30._12_4_ = fVar19;
    auVar32._4_4_ = fVar18;
    auVar32._0_4_ = fVar24 * fVar17;
    auVar32._8_4_ = fVar26 * fVar17;
    auVar32._12_4_ = fVar19;
    auVar30 = NEON_ext(auVar30,auVar32,4,1);
    auVar1._4_4_ = fVar21;
    auVar1._0_4_ = fVar16 * fVar24;
    auVar1._8_4_ = fVar22;
    auVar1._12_4_ = fVar23;
    auVar2._4_4_ = fVar21;
    auVar2._0_4_ = fVar16 * fVar24;
    auVar2._8_4_ = fVar22;
    auVar2._12_4_ = fVar23;
    auVar32 = NEON_ext(auVar1,auVar2,0xc,1);
    fVar17 = -1.0;
    if (iVar5 != 0) {
      fVar17 = 1.0;
    }
    fVar22 = (auVar30._12_4_ + fVar20 * auVar28._4_4_ + fVar22) - fVar16 * fVar25;
    uVar8 = CONCAT44(fVar22,(auVar30._4_4_ + fVar16 * auVar28._0_4_ + fVar21) - fVar15 * fVar24);
    fVar18 = (fVar18 + fVar15 * auVar28._8_4_ + auVar32._4_4_) - fVar20 * fVar26;
    fVar15 = (float)FUN_08575f94(fVar22,fVar18,uVar8,
                                 ((fVar19 - fVar20 * auVar28._12_4_) - fVar23) - fVar16 * fVar26,
                                 *(float *)(unaff_x19 + 0x38) * fVar17,
                                 *(float *)(unaff_x19 + 0x3c) * fVar17,
                                 fVar17 * *(float *)(unaff_x19 + 0x40),0);
    plVar12 = *(long **)(unaff_x19 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *plVar13) {
            puVar14 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_076acea0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar14 = (undefined8 *)FUN_0406ae20(plVar12,*plVar13,4);
LAB_076acea0:
      fVar17 = (float)(*(code *)*puVar14)(plVar12,puVar14[1]);
      in_stack_000000a8 = fVar31 + (float)uVar8 * fVar17;
      in_stack_000000a0 =
           CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar18 * fVar17,(float)uVar4 + fVar15 * fVar17);
      uVar8 = FUN_085849e0();
      FUN_076b6cf0(uVar8,&stack0x000000a0,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


