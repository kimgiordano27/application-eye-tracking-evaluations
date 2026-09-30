/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTrackerAsync
ENTRY_POINT: 05bd4b70
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateDynamicObjectTrackerAsync(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar3 = FUN_03188b1c();
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  uVar4 = (ulong)uVar1;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
  puVar2 = PTR_DAT_070c22f8;
  fVar15 = 0.0;
  if (1 < (int)uVar1) {
    pfVar6 = (float *)(unaff_x19 + 0x34);
    uVar7 = 1;
    do {
      if ((uVar4 & 0xffffffff) <= uVar7) goto LAB_05bd4d98;
      fVar14 = *pfVar6;
      uVar3 = *(undefined8 *)(pfVar6 + -2);
      uVar16 = *(undefined8 *)(pfVar6 + -5);
      fVar17 = pfVar6[-3];
      if (DAT_07546bbc == '\0') {
        FUN_03188a78(puVar2);
        DAT_07546bbc = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar9 = (float)uVar3 - (float)uVar16;
      fVar11 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
      uVar4 = *(ulong *)(unaff_x19 + 0x18);
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 3;
      fVar15 = fVar15 + SQRT(fVar9 * fVar9 + fVar11 * fVar11 + (fVar14 - fVar17) * (fVar14 - fVar17)
                            );
    } while ((long)uVar7 < (long)(int)uVar4);
  }
  if (0 < (int)uVar4) {
    uVar7 = 0;
    pfVar6 = (float *)(unaff_x19 + 0x28);
    lVar8 = 0x20;
    do {
      if (lVar8 == 0x20) {
        if ((uint)uVar4 < 2) goto LAB_05bd4d98;
        fVar17 = *(float *)(unaff_x19 + 0x34);
        uVar3 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x20);
        fVar14 = *(float *)(unaff_x19 + 0x28);
      }
      else {
        if ((uVar4 & 0xffffffff) <= uVar7) {
LAB_05bd4d98:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        fVar17 = *pfVar6;
        uVar3 = *(undefined8 *)(pfVar6 + -2);
        uVar16 = *(undefined8 *)(pfVar6 + -5);
        fVar14 = pfVar6[-3];
      }
      fVar9 = (float)uVar3 - (float)uVar16;
      fVar11 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
      fVar17 = fVar17 - fVar14;
      lVar5 = *(long *)(unaff_x20 + 0x70);
      if (lVar5 == 0) {
LAB_05bd4d9c:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (((uVar4 & 0xffffffff) <= uVar7) || (*(uint *)(lVar5 + 0x18) <= uVar7)) goto LAB_05bd4d98;
      fVar12 = *pfVar6;
      *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(pfVar6 + -2);
      *(float *)((undefined8 *)(lVar5 + lVar8) + 1) = fVar12;
      lVar5 = *(long *)(unaff_x20 + 0x70);
      if (lVar5 == 0) goto LAB_05bd4d9c;
      fVar12 = fVar11;
      fVar13 = fVar17;
      uVar10 = FUN_069c5558(0);
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_05bd4d98;
      lVar5 = lVar5 + lVar8;
      *(undefined4 *)(lVar5 + 0xc) = uVar10;
      *(float *)(lVar5 + 0x10) = fVar12;
      *(float *)(lVar5 + 0x14) = fVar13;
      *(float *)(lVar5 + 0x18) = fVar14;
      lVar5 = *(long *)(unaff_x20 + 0x70);
      if (lVar5 == 0) goto LAB_05bd4d9c;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (lVar8 == 0x20) {
        fVar14 = 0.0;
        if ((ulong)uVar1 == 0) goto LAB_05bd4d98;
      }
      else {
        if ((uVar1 <= uVar7) || (uVar1 <= (int)uVar7 - 1U)) goto LAB_05bd4d98;
        fVar14 = *(float *)(lVar5 + lVar8 + -4);
        if (DAT_07546bbc == '\0') {
          FUN_03188a78(puVar2);
          DAT_07546bbc = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        fVar14 = SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar17 * fVar17) / fVar15 + fVar14;
      }
      uVar4 = *(ulong *)(unaff_x19 + 0x18);
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + lVar8;
      lVar8 = lVar8 + 0x20;
      pfVar6 = pfVar6 + 3;
      *(float *)(lVar5 + 0x1c) = fVar14;
    } while ((long)uVar7 < (long)(int)uVar4);
  }
  return;
}


