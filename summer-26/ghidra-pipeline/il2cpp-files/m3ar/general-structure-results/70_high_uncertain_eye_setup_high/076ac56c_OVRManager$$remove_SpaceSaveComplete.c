/*
FUNCTION_NAME: OVRManager$$remove_SpaceSaveComplete
ENTRY_POINT: 076ac56c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceSaveComplete(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  long *unaff_x22;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  float in_stack_00000038;
  
  uVar5 = (**(code **)(param_1 + (long)(*in_x10 + 9) * 0x10 + 0x138))();
  if ((uVar5 & 1) == 0) {
    return;
  }
  plVar10 = *(long **)(unaff_x19 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076ac5e8;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar10,*unaff_x22,0);
LAB_076ac5e8:
    iVar4 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    uVar3 = fStack0000000000000028;
    uVar7 = in_stack_00000020;
    fVar12 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x44) >> 0x20);
    fVar16 = *(float *)(unaff_x19 + 0x40);
    auVar23._8_4_ = uStack0000000000000034;
    auVar23._0_8_ = uStack000000000000002c;
    fVar21 = (float)uStack000000000000002c;
    fVar22 = SUB84(uStack000000000000002c,4);
    fVar11 = (float)*(undefined8 *)(unaff_x19 + 0x44);
    auVar24._4_4_ = in_stack_00000038;
    auVar24._0_4_ = in_stack_00000038;
    auVar24._8_4_ = in_stack_00000038;
    auVar24._12_4_ = in_stack_00000038;
    fVar13 = *(float *)(unaff_x19 + 0x4c);
    fVar14 = fVar22 * fVar13;
    fVar15 = in_stack_00000038 * fVar13;
    fVar18 = fVar16 * fVar22;
    fVar19 = fVar11 * (float)uStack0000000000000034;
    fVar20 = fVar11 * fVar22;
    auVar23._12_4_ = in_stack_00000038;
    auVar23 = NEON_ext(auVar24,auVar23,4,1);
    auVar25._4_4_ = fVar14;
    auVar25._0_4_ = fVar21 * fVar13;
    auVar25._8_4_ = (float)uStack0000000000000034 * fVar13;
    auVar25._12_4_ = fVar15;
    auVar26._4_4_ = fVar14;
    auVar26._0_4_ = fVar21 * fVar13;
    auVar26._8_4_ = (float)uStack0000000000000034 * fVar13;
    auVar26._12_4_ = fVar15;
    auVar25 = NEON_ext(auVar25,auVar26,4,1);
    auVar1._4_4_ = fVar18;
    auVar1._0_4_ = fVar12 * fVar21;
    auVar1._8_4_ = fVar19;
    auVar1._12_4_ = fVar20;
    auVar2._4_4_ = fVar18;
    auVar2._0_4_ = fVar12 * fVar21;
    auVar2._8_4_ = fVar19;
    auVar2._12_4_ = fVar20;
    auVar26 = NEON_ext(auVar1,auVar2,0xc,1);
    fVar13 = -1.0;
    if (iVar4 != 0) {
      fVar13 = 1.0;
    }
    fVar19 = (auVar25._12_4_ + fVar16 * auVar23._4_4_ + fVar19) - fVar12 * fVar22;
    uVar17 = CONCAT44(fVar19,(auVar25._4_4_ + fVar12 * auVar23._0_4_ + fVar18) - fVar11 * fVar21);
    fVar14 = (fVar14 + fVar11 * auVar23._8_4_ + auVar26._4_4_) -
             fVar16 * (float)uStack0000000000000034;
    fVar11 = (float)FUN_08575f94(fVar19,fVar14,uVar17,
                                 ((fVar15 - fVar16 * auVar23._12_4_) - fVar20) -
                                 fVar12 * (float)uStack0000000000000034,
                                 *(float *)(unaff_x19 + 0x34) * fVar13,
                                 *(float *)(unaff_x19 + 0x38) * fVar13,
                                 fVar13 * *(float *)(unaff_x19 + 0x3c),0);
    plVar10 = *(long **)(unaff_x19 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_076ac71c;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar10,*unaff_x22,4);
LAB_076ac71c:
      fVar13 = (float)(*(code *)*puVar6)(plVar10,puVar6[1]);
      fStack0000000000000028 = (float)uVar3 + (float)uVar17 * fVar13;
      in_stack_00000020 =
           CONCAT44((float)((ulong)uVar7 >> 0x20) + fVar14 * fVar13,(float)uVar7 + fVar11 * fVar13);
      uVar7 = FUN_085849e0();
      FUN_076b6cf0(uVar7,&stack0x00000020,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


