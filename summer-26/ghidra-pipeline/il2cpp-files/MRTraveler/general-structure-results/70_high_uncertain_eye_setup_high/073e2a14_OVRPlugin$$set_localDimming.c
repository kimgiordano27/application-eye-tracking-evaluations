/*
FUNCTION_NAME: OVRPlugin$$set_localDimming
ENTRY_POINT: 073e2a14
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_localDimming(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  puVar6 = (undefined8 *)(unaff_x19 + 0x30);
  fVar15 = 0.0;
  uVar2 = 1;
  do {
    if (((param_1 & 0xffffffff) <= uVar2) || ((param_1 & 0xffffffff) <= uVar2 - 1))
    goto LAB_073e2c44;
    uVar14 = *puVar6;
    fVar16 = *(float *)((long)puVar6 + -4);
    fVar17 = *(float *)(puVar6 + -2);
    uVar18 = *(undefined8 *)((long)puVar6 + -0xc);
    if (*(char *)(unaff_x22 + 0xb5) == '\0') {
      FUN_03c8f898();
      *(undefined1 *)(unaff_x22 + 0xb5) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar16 = fVar16 - fVar17;
    fVar17 = (float)uVar14 - (float)uVar18;
    fVar10 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar18 >> 0x20);
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    param_1 = (ulong)uVar1;
    uVar2 = uVar2 + 1;
    fVar15 = fVar15 + SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar10 * fVar10);
    puVar6 = (undefined8 *)((long)puVar6 + 0xc);
  } while ((long)uVar2 < (long)(int)uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar7 = 0x3c;
    pfVar8 = (float *)(unaff_x19 + 0x28);
    do {
      if (lVar7 == 0x3c) {
        if ((uint)param_1 < 2) goto LAB_073e2c44;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x20);
        pfVar3 = (float *)(unaff_x19 + 0x28);
        pfVar4 = (float *)(unaff_x19 + 0x34);
      }
      else {
        if (((param_1 & 0xffffffff) <= uVar2) || ((uint)param_1 <= (int)uVar2 - 1U)) {
LAB_073e2c44:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar14 = *(undefined8 *)(pfVar8 + -2);
        uVar18 = *(undefined8 *)(pfVar8 + -5);
        pfVar3 = pfVar8 + -3;
        pfVar4 = pfVar8;
      }
      fVar16 = (float)uVar14 - (float)uVar18;
      fVar17 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar18 >> 0x20);
      lVar5 = *unaff_x20;
      if (lVar5 == 0) {
LAB_073e2c48:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (((param_1 & 0xffffffff) <= uVar2) || (*(uint *)(lVar5 + 0x18) <= uVar2))
      goto LAB_073e2c44;
      fVar12 = *pfVar8;
      fVar13 = *pfVar4;
      fVar10 = *pfVar3;
      *(undefined8 *)(lVar5 + lVar7 + -0x1c) = *(undefined8 *)(pfVar8 + -2);
      *(float *)(lVar5 + lVar7 + -0x14) = fVar12;
      lVar5 = *unaff_x20;
      if (lVar5 == 0) goto LAB_073e2c48;
      fVar13 = fVar13 - fVar10;
      fVar10 = fVar17;
      fVar11 = fVar13;
      uVar9 = FUN_085d297c(0);
      if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_073e2c44;
      lVar5 = lVar5 + lVar7;
      *(undefined4 *)(lVar5 + -0x10) = uVar9;
      *(float *)(lVar5 + -0xc) = fVar10;
      *(float *)(lVar5 + -8) = fVar11;
      *(float *)(lVar5 + -4) = fVar12;
      lVar5 = *unaff_x20;
      if (lVar5 == 0) goto LAB_073e2c48;
      if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= uVar2) goto LAB_073e2c44;
      fVar10 = 0.0;
      if (lVar7 != 0x3c) {
        if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)uVar2 - 1U) goto LAB_073e2c44;
        fVar10 = *(float *)(lVar5 + lVar7 + -0x20);
        if (*(char *)(unaff_x22 + 0xb5) == '\0') {
          FUN_03c8f898();
          *(undefined1 *)(unaff_x22 + 0xb5) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        fVar10 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar13 * fVar13) / fVar15 + fVar10;
      }
      *(float *)(lVar5 + lVar7) = fVar10;
      param_1 = *(ulong *)(unaff_x19 + 0x18);
      uVar2 = uVar2 + 1;
      lVar7 = lVar7 + 0x20;
      pfVar8 = pfVar8 + 3;
    } while ((long)uVar2 < (long)(int)param_1);
  }
  return;
}


