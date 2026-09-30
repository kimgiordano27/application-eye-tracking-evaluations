/*
FUNCTION_NAME: OVRManager$$GetSystemHeadsetTheme
ENTRY_POINT: 06927d90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetSystemHeadsetTheme(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  ulong uVar14;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  
  lVar2 = FUN_04561f74(param_2,**(undefined8 **)(param_1 + 0x970));
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if ((int)uVar1 < 1) {
      uVar17 = 0;
      fVar6 = 0.0;
      fVar8 = 0.0;
      uVar18 = 0;
    }
    else {
      uVar17 = 0;
      fVar8 = 0.0;
      lVar4 = 0;
      fVar6 = 0.0;
      uVar18 = 0;
      do {
        if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar3 = *(long *)(lVar2 + 0x20 + lVar4 * 8);
        if (lVar3 == 0) goto LAB_06927efc;
        FUN_07c61260(&stack0x00000008,lVar3,0);
        fVar19 = (float)uVar18 + (float)uVar17;
        fVar15 = (float)((ulong)uVar17 >> 0x20);
        fVar12 = (float)((ulong)uVar18 >> 0x20);
        fVar20 = fVar12 + fVar15;
        fVar7 = (float)uStack0000000000000010 - (float)uStack000000000000001c;
        fVar13 = (float)uVar17 - (float)uVar18;
        fVar15 = fVar15 - fVar12;
        uVar14 = CONCAT44(fVar15,fVar13);
        fVar21 = (float)in_stack_00000008 - (float)uStack0000000000000014;
        fVar11 = (float)((ulong)in_stack_00000008 >> 0x20);
        fVar22 = fVar11 - SUB84(uStack0000000000000014,4);
        fVar5 = (float)uStack0000000000000010 + (float)uStack000000000000001c;
        fVar10 = (float)in_stack_00000008 + (float)uStack0000000000000014;
        fVar11 = fVar11 + SUB84(uStack0000000000000014,4);
        uVar9 = CONCAT44(fVar11,fVar10);
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar4 = lVar4 + 1;
        fVar12 = fVar6 - fVar8;
        if (fVar7 <= fVar6 - fVar8) {
          fVar12 = fVar7;
        }
        uVar14 = uVar14 ^ (uVar14 ^ CONCAT44(fVar22,fVar21)) &
                          ~CONCAT44(-(uint)(fVar15 < fVar22),-(uint)(fVar13 < fVar21));
        fVar13 = fVar8 + fVar6;
        if (fVar8 + fVar6 <= fVar7) {
          fVar13 = fVar7;
        }
        uVar16 = CONCAT44(fVar22,fVar21) ^
                 (CONCAT44(fVar22,fVar21) ^ CONCAT44(fVar20,fVar19)) &
                 CONCAT44(-(uint)(fVar22 < fVar20),-(uint)(fVar21 < fVar19));
        fVar15 = (float)uVar14;
        fVar19 = (float)(uVar14 >> 0x20);
        fVar8 = (fVar13 - fVar12) * 0.5;
        fVar13 = ((float)uVar16 - fVar15) * 0.5;
        fVar20 = ((float)(uVar16 >> 0x20) - fVar19) * 0.5;
        fVar15 = fVar15 + fVar13;
        fVar19 = fVar19 + fVar20;
        fVar6 = (fVar12 + fVar8) - fVar8;
        fVar8 = fVar8 + fVar12 + fVar8;
        fVar12 = fVar15 - fVar13;
        fVar7 = fVar19 - fVar20;
        fVar13 = fVar13 + fVar15;
        fVar20 = fVar20 + fVar19;
        if (fVar5 <= fVar6) {
          fVar6 = fVar5;
        }
        if (fVar8 <= fVar5) {
          fVar8 = fVar5;
        }
        uVar14 = uVar9 ^ (uVar9 ^ CONCAT44(fVar7,fVar12)) &
                         CONCAT44(-(uint)(fVar7 < fVar11),-(uint)(fVar12 < fVar10));
        uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar20,fVar13)) &
                        CONCAT44(-(uint)(fVar11 < fVar20),-(uint)(fVar10 < fVar13));
        fVar12 = (float)uVar14;
        fVar5 = (float)(uVar14 >> 0x20);
        fVar8 = (fVar8 - fVar6) * 0.5;
        fVar7 = ((float)uVar9 - fVar12) * 0.5;
        fVar10 = ((float)(uVar9 >> 0x20) - fVar5) * 0.5;
        uVar18 = CONCAT44(fVar10,fVar7);
        fVar6 = fVar6 + fVar8;
        uVar17 = CONCAT44(fVar5 + fVar10,fVar12 + fVar7);
      } while ((int)lVar4 < (int)uVar1);
    }
    *unaff_x19 = uVar17;
    *(float *)(unaff_x19 + 1) = fVar6;
    *(undefined8 *)((long)unaff_x19 + 0xc) = uVar18;
    *(float *)((long)unaff_x19 + 0x14) = fVar8;
    return;
  }
LAB_06927efc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


