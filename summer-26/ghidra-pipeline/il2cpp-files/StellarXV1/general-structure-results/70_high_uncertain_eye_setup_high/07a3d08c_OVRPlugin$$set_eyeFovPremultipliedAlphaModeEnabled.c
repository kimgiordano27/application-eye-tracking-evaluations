/*
FUNCTION_NAME: OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 07a3d08c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_eyeFovPremultipliedAlphaModeEnabled(long param_1)

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
  
  if (param_1 == 0) {
    if (unaff_x19 == 0) goto LAB_07a3d2f4;
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
  }
  else {
    if (unaff_x19 == 0) {
LAB_07a3d2f4:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
    if ((int)*(uint *)(unaff_x19 + 0x18) <= *(int *)(param_1 + 0x18)) goto LAB_07a3d0d4;
  }
  lVar7 = FUN_04077674(*(undefined8 *)PTR_DAT_092ecf70,uVar3);
  *unaff_x20 = lVar7;
  thunk_FUN_040ec700();
  uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
LAB_07a3d0d4:
  puVar2 = PTR_DAT_09285ae0;
  fVar14 = 0.0;
  if (1 < (int)uVar3) {
    pfVar5 = (float *)(unaff_x19 + 0x34);
    uVar6 = 1;
    do {
      if ((uVar3 & 0xffffffff) <= uVar6) goto LAB_07a3d2f0;
      fVar13 = *pfVar5;
      uVar15 = *(undefined8 *)(pfVar5 + -2);
      uVar16 = *(undefined8 *)(pfVar5 + -5);
      fVar17 = pfVar5[-3];
      if (DAT_098854e9 == '\0') {
        FUN_04077588(puVar2);
        DAT_098854e9 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
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
        if ((uint)uVar3 < 2) goto LAB_07a3d2f0;
        fVar17 = *(float *)(unaff_x19 + 0x34);
        uVar15 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x20);
        fVar13 = *(float *)(unaff_x19 + 0x28);
      }
      else {
        if ((uVar3 & 0xffffffff) <= uVar6) {
LAB_07a3d2f0:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
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
      if (lVar4 == 0) goto LAB_07a3d2f4;
      if (((uVar3 & 0xffffffff) <= uVar6) || (*(uint *)(lVar4 + 0x18) <= uVar6)) goto LAB_07a3d2f0;
      fVar11 = *pfVar5;
      *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(pfVar5 + -2);
      *(float *)((undefined8 *)(lVar4 + lVar7) + 1) = fVar11;
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_07a3d2f4;
      fVar11 = fVar10;
      fVar12 = fVar17;
      uVar9 = FUN_089b94d0(0);
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07a3d2f0;
      lVar4 = lVar4 + lVar7;
      *(undefined4 *)(lVar4 + 0xc) = uVar9;
      *(float *)(lVar4 + 0x10) = fVar11;
      *(float *)(lVar4 + 0x14) = fVar12;
      *(float *)(lVar4 + 0x18) = fVar13;
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_07a3d2f4;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (lVar7 == 0x20) {
        fVar13 = 0.0;
        if ((ulong)uVar1 == 0) goto LAB_07a3d2f0;
      }
      else {
        if ((uVar1 <= uVar6) || (uVar1 <= (int)uVar6 - 1U)) goto LAB_07a3d2f0;
        fVar13 = *(float *)(lVar4 + lVar7 + -4);
        if (DAT_098854e9 == '\0') {
          FUN_04077588(puVar2);
          DAT_098854e9 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
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


