/*
FUNCTION_NAME: OVRManager$$remove_SceneCaptureComplete
ENTRY_POINT: 076acd0c
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


void OVRManager__remove_SceneCaptureComplete(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float fVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long *unaff_x22;
  long unaff_x23;
  float fVar12;
  float fVar13;
  float fVar14;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  
  if (unaff_x20 != (long *)0x0) {
    lVar8 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076acd6c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20();
LAB_076acd6c:
    iVar5 = (*(code *)*puVar6)();
    fVar4 = in_stack_000000a8;
    uVar3 = in_stack_000000a0;
    fVar13 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x48) >> 0x20);
    fVar17 = *(float *)(unaff_x19 + 0x44);
    fVar23 = (float)*(undefined8 *)(unaff_x23 + 0x14);
    fVar24 = (float)((ulong)*(undefined8 *)(unaff_x23 + 0x14) >> 0x20);
    uVar7 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x23 + 0xc);
    fVar21 = (float)uVar7;
    fVar22 = (float)((ulong)uVar7 >> 0x20);
    fVar12 = (float)*(undefined8 *)(unaff_x19 + 0x48);
    auVar26._4_4_ = fVar24;
    auVar26._0_4_ = fVar24;
    auVar26._8_4_ = fVar24;
    auVar26._12_4_ = fVar24;
    fVar14 = *(float *)(unaff_x19 + 0x50);
    fVar15 = fVar22 * fVar14;
    fVar16 = fVar24 * fVar14;
    fVar18 = fVar17 * fVar22;
    fVar19 = fVar12 * fVar23;
    fVar20 = fVar12 * fVar22;
    auVar25._12_4_ = fVar24;
    auVar25._0_12_ = *(undefined1 (*) [12])(unaff_x23 + 0xc);
    auVar25 = NEON_ext(auVar26,auVar25,4,1);
    auVar27._4_4_ = fVar15;
    auVar27._0_4_ = fVar21 * fVar14;
    auVar27._8_4_ = fVar23 * fVar14;
    auVar27._12_4_ = fVar16;
    auVar28._4_4_ = fVar15;
    auVar28._0_4_ = fVar21 * fVar14;
    auVar28._8_4_ = fVar23 * fVar14;
    auVar28._12_4_ = fVar16;
    auVar27 = NEON_ext(auVar27,auVar28,4,1);
    auVar1._4_4_ = fVar18;
    auVar1._0_4_ = fVar13 * fVar21;
    auVar1._8_4_ = fVar19;
    auVar1._12_4_ = fVar20;
    auVar2._4_4_ = fVar18;
    auVar2._0_4_ = fVar13 * fVar21;
    auVar2._8_4_ = fVar19;
    auVar2._12_4_ = fVar20;
    auVar28 = NEON_ext(auVar1,auVar2,0xc,1);
    fVar14 = -1.0;
    if (iVar5 != 0) {
      fVar14 = 1.0;
    }
    fVar19 = (auVar27._12_4_ + fVar17 * auVar25._4_4_ + fVar19) - fVar13 * fVar22;
    uVar7 = CONCAT44(fVar19,(auVar27._4_4_ + fVar13 * auVar25._0_4_ + fVar18) - fVar12 * fVar21);
    fVar15 = (fVar15 + fVar12 * auVar25._8_4_ + auVar28._4_4_) - fVar17 * fVar23;
    fVar12 = (float)FUN_08575f94(fVar19,fVar15,uVar7,
                                 ((fVar16 - fVar17 * auVar25._12_4_) - fVar20) - fVar13 * fVar23,
                                 *(float *)(unaff_x19 + 0x38) * fVar14,
                                 *(float *)(unaff_x19 + 0x3c) * fVar14,
                                 fVar14 * *(float *)(unaff_x19 + 0x40),0);
    plVar11 = *(long **)(unaff_x19 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_076acea0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar11,*unaff_x22,4);
LAB_076acea0:
      fVar14 = (float)(*(code *)*puVar6)(plVar11,puVar6[1]);
      in_stack_000000a8 = fVar4 + (float)uVar7 * fVar14;
      in_stack_000000a0 =
           CONCAT44((float)((ulong)uVar3 >> 0x20) + fVar15 * fVar14,(float)uVar3 + fVar12 * fVar14);
      uVar7 = FUN_085849e0();
      FUN_076b6cf0(uVar7,&stack0x000000a0,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


