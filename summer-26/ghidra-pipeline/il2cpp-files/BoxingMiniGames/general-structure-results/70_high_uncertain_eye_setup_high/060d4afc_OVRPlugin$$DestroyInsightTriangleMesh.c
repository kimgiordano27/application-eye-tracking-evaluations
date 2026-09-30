/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightTriangleMesh
ENTRY_POINT: 060d4afc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyInsightTriangleMesh(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  if (unaff_x19 == 0) {
LAB_060d4d60:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (*(int *)(param_1 + 0x18) < (int)uVar1) {
    lVar7 = FUN_03642a4c(*(undefined8 *)PTR_DAT_07a20818);
    *unaff_x20 = lVar7;
    thunk_FUN_036b7ad0();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
  }
  puVar2 = PTR_DAT_079f4df0;
  uVar3 = (ulong)uVar1;
  fVar14 = 0.0;
  if (1 < (int)uVar1) {
    pfVar5 = (float *)(unaff_x19 + 0x34);
    uVar6 = 1;
    do {
      if ((uVar3 & 0xffffffff) <= uVar6) goto LAB_060d4d5c;
      fVar13 = *pfVar5;
      uVar15 = *(undefined8 *)(pfVar5 + -2);
      uVar16 = *(undefined8 *)(pfVar5 + -5);
      fVar17 = pfVar5[-3];
      if (DAT_07ed76bb == '\0') {
        FUN_03642964(puVar2);
        DAT_07ed76bb = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      fVar8 = (float)uVar15 - (float)uVar16;
      fVar10 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
      uVar3 = *(ulong *)(unaff_x19 + 0x18);
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 3;
      fVar14 = fVar14 + SQRT(fVar8 * fVar8 + fVar10 * fVar10 + (fVar13 - fVar17) * (fVar13 - fVar17)
                            );
    } while ((long)uVar6 < (long)(int)uVar3);
  }
  if (0 < (int)uVar3) {
    uVar6 = 0;
    pfVar5 = (float *)(unaff_x19 + 0x28);
    lVar7 = 0x20;
    do {
      if (lVar7 == 0x20) {
        if ((uint)uVar3 < 2) goto LAB_060d4d5c;
        fVar17 = *(float *)(unaff_x19 + 0x34);
        uVar15 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x20);
        fVar13 = *(float *)(unaff_x19 + 0x28);
      }
      else {
        if ((uVar3 & 0xffffffff) <= uVar6) {
LAB_060d4d5c:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        fVar17 = *pfVar5;
        uVar15 = *(undefined8 *)(pfVar5 + -2);
        uVar16 = *(undefined8 *)(pfVar5 + -5);
        fVar13 = pfVar5[-3];
      }
      fVar8 = (float)uVar15 - (float)uVar16;
      fVar10 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
      fVar17 = fVar17 - fVar13;
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_060d4d60;
      if (((uVar3 & 0xffffffff) <= uVar6) || (*(uint *)(lVar4 + 0x18) <= uVar6)) goto LAB_060d4d5c;
      fVar11 = *pfVar5;
      *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(pfVar5 + -2);
      *(float *)((undefined8 *)(lVar4 + lVar7) + 1) = fVar11;
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_060d4d60;
      fVar11 = fVar10;
      fVar12 = fVar17;
      uVar9 = FUN_071af474(0);
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_060d4d5c;
      lVar4 = lVar4 + lVar7;
      *(undefined4 *)(lVar4 + 0xc) = uVar9;
      *(float *)(lVar4 + 0x10) = fVar11;
      *(float *)(lVar4 + 0x14) = fVar12;
      *(float *)(lVar4 + 0x18) = fVar13;
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_060d4d60;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (lVar7 == 0x20) {
        fVar13 = 0.0;
        if ((ulong)uVar1 == 0) goto LAB_060d4d5c;
      }
      else {
        if ((uVar1 <= uVar6) || (uVar1 <= (int)uVar6 - 1U)) goto LAB_060d4d5c;
        fVar13 = *(float *)(lVar4 + lVar7 + -4);
        if (DAT_07ed76bb == '\0') {
          FUN_03642964(puVar2);
          DAT_07ed76bb = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        fVar13 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar17 * fVar17) / fVar14 + fVar13;
      }
      uVar3 = *(ulong *)(unaff_x19 + 0x18);
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x20;
      pfVar5 = pfVar5 + 3;
      *(float *)(lVar4 + 0x1c) = fVar13;
    } while ((long)uVar6 < (long)(int)uVar3);
  }
  return;
}


