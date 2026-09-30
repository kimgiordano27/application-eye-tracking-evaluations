/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 05d60b68
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_instance(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  lVar2 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072ad930,*(undefined4 *)(unaff_x19 + 0x18));
  *unaff_x20 = lVar2;
  thunk_FUN_0333a630();
  puVar1 = PTR_DAT_07279c00;
  fVar16 = 0.0;
  uVar3 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
  if (1 < (int)*(ulong *)(unaff_x19 + 0x18)) {
    puVar8 = (undefined8 *)(unaff_x19 + 0x30);
    fVar16 = 0.0;
    uVar4 = 1;
    do {
      if ((uVar3 <= uVar4) || (uVar3 <= uVar4 - 1)) goto LAB_05d60ddc;
      uVar15 = *puVar8;
      fVar17 = *(float *)((long)puVar8 + -4);
      fVar18 = *(float *)(puVar8 + -2);
      uVar19 = *(undefined8 *)((long)puVar8 + -0xc);
      if (DAT_076cd828 == '\0') {
        thunk_FUN_032e1da0(puVar1);
        DAT_076cd828 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar17 = fVar17 - fVar18;
      fVar18 = (float)uVar15 - (float)uVar19;
      fVar11 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
      uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
      uVar4 = uVar4 + 1;
      fVar16 = fVar16 + SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar11 * fVar11);
      puVar8 = (undefined8 *)((long)puVar8 + 0xc);
    } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
  }
  if (0 < (int)uVar3) {
    uVar4 = 0;
    lVar2 = 0x3c;
    pfVar9 = (float *)(unaff_x19 + 0x28);
    do {
      if (lVar2 == 0x3c) {
        if ((uint)uVar3 < 2) goto LAB_05d60ddc;
        uVar15 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar19 = *(undefined8 *)(unaff_x19 + 0x20);
        pfVar5 = (float *)(unaff_x19 + 0x28);
        pfVar6 = (float *)(unaff_x19 + 0x34);
      }
      else {
        if (((uVar3 & 0xffffffff) <= uVar4) || ((uint)uVar3 <= (int)uVar4 - 1U)) {
LAB_05d60ddc:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar15 = *(undefined8 *)(pfVar9 + -2);
        uVar19 = *(undefined8 *)(pfVar9 + -5);
        pfVar5 = pfVar9 + -3;
        pfVar6 = pfVar9;
      }
      fVar17 = (float)uVar15 - (float)uVar19;
      fVar18 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
      lVar7 = *unaff_x20;
      if (lVar7 == 0) {
LAB_05d60de0:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (((uVar3 & 0xffffffff) <= uVar4) || (*(uint *)(lVar7 + 0x18) <= uVar4)) goto LAB_05d60ddc;
      fVar13 = *pfVar9;
      fVar14 = *pfVar6;
      fVar11 = *pfVar5;
      *(undefined8 *)(lVar7 + lVar2 + -0x1c) = *(undefined8 *)(pfVar9 + -2);
      *(float *)(lVar7 + lVar2 + -0x14) = fVar13;
      lVar7 = *unaff_x20;
      if (lVar7 == 0) goto LAB_05d60de0;
      fVar14 = fVar14 - fVar11;
      fVar11 = fVar18;
      fVar12 = fVar14;
      uVar10 = FUN_06bddffc(0);
      if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_05d60ddc;
      lVar7 = lVar7 + lVar2;
      *(undefined4 *)(lVar7 + -0x10) = uVar10;
      *(float *)(lVar7 + -0xc) = fVar11;
      *(float *)(lVar7 + -8) = fVar12;
      *(float *)(lVar7 + -4) = fVar13;
      lVar7 = *unaff_x20;
      if (lVar7 == 0) goto LAB_05d60de0;
      if ((*(ulong *)(lVar7 + 0x18) & 0xffffffff) <= uVar4) goto LAB_05d60ddc;
      fVar11 = 0.0;
      if (lVar2 != 0x3c) {
        if ((uint)*(ulong *)(lVar7 + 0x18) <= (int)uVar4 - 1U) goto LAB_05d60ddc;
        fVar11 = *(float *)(lVar7 + lVar2 + -0x20);
        if (DAT_076cd828 == '\0') {
          thunk_FUN_032e1da0(puVar1);
          DAT_076cd828 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        fVar11 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar14 * fVar14) / fVar16 + fVar11;
      }
      *(float *)(lVar7 + lVar2) = fVar11;
      uVar3 = *(ulong *)(unaff_x19 + 0x18);
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 0x20;
      pfVar9 = pfVar9 + 3;
    } while ((long)uVar4 < (long)(int)uVar3);
  }
  return;
}


