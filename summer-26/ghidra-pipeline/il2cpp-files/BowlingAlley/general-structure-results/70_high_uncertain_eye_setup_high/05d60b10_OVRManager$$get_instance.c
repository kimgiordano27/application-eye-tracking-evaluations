/*
FUNCTION_NAME: OVRManager$$get_instance
ENTRY_POINT: 05d60b10
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_instance(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  float *pfVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  
  if ((DAT_076d85e0 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072ad930);
    DAT_076d85e0 = 1;
  }
  plVar7 = (long *)(param_1 + 0x70);
  if (*plVar7 == 0) {
    if (param_2 == 0) goto LAB_05d60de0;
  }
  else {
    if (param_2 == 0) {
LAB_05d60de0:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(int *)(param_2 + 0x18) <= *(int *)(*plVar7 + 0x18)) goto LAB_05d60b8c;
  }
  lVar9 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072ad930,*(undefined4 *)(param_2 + 0x18));
  *plVar7 = lVar9;
  thunk_FUN_0333a630(plVar7,lVar9);
LAB_05d60b8c:
  puVar1 = PTR_DAT_07279c00;
  fVar17 = 0.0;
  uVar2 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
  if (1 < (int)*(ulong *)(param_2 + 0x18)) {
    puVar8 = (undefined8 *)(param_2 + 0x30);
    fVar17 = 0.0;
    uVar3 = 1;
    do {
      if ((uVar2 <= uVar3) || (uVar2 <= uVar3 - 1)) goto LAB_05d60ddc;
      uVar16 = *puVar8;
      fVar18 = *(float *)((long)puVar8 + -4);
      fVar19 = *(float *)(puVar8 + -2);
      uVar20 = *(undefined8 *)((long)puVar8 + -0xc);
      if (DAT_076cd828 == '\0') {
        thunk_FUN_032e1da0(puVar1);
        DAT_076cd828 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar18 = fVar18 - fVar19;
      fVar19 = (float)uVar16 - (float)uVar20;
      fVar12 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar20 >> 0x20);
      uVar2 = (ulong)*(uint *)(param_2 + 0x18);
      uVar3 = uVar3 + 1;
      fVar17 = fVar17 + SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar12 * fVar12);
      puVar8 = (undefined8 *)((long)puVar8 + 0xc);
    } while ((long)uVar3 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  if (0 < (int)uVar2) {
    uVar3 = 0;
    lVar9 = 0x3c;
    pfVar10 = (float *)(param_2 + 0x28);
    do {
      if (lVar9 == 0x3c) {
        if ((uint)uVar2 < 2) goto LAB_05d60ddc;
        uVar16 = *(undefined8 *)(param_2 + 0x2c);
        uVar20 = *(undefined8 *)(param_2 + 0x20);
        pfVar4 = (float *)(param_2 + 0x28);
        pfVar5 = (float *)(param_2 + 0x34);
      }
      else {
        if (((uVar2 & 0xffffffff) <= uVar3) || ((uint)uVar2 <= (int)uVar3 - 1U)) {
LAB_05d60ddc:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar16 = *(undefined8 *)(pfVar10 + -2);
        uVar20 = *(undefined8 *)(pfVar10 + -5);
        pfVar4 = pfVar10 + -3;
        pfVar5 = pfVar10;
      }
      fVar18 = (float)uVar16 - (float)uVar20;
      fVar19 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar20 >> 0x20);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_05d60de0;
      if (((uVar2 & 0xffffffff) <= uVar3) || (*(uint *)(lVar6 + 0x18) <= uVar3)) goto LAB_05d60ddc;
      fVar14 = *pfVar10;
      fVar15 = *pfVar5;
      fVar12 = *pfVar4;
      *(undefined8 *)(lVar6 + lVar9 + -0x1c) = *(undefined8 *)(pfVar10 + -2);
      *(float *)(lVar6 + lVar9 + -0x14) = fVar14;
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_05d60de0;
      fVar15 = fVar15 - fVar12;
      fVar12 = fVar19;
      fVar13 = fVar15;
      uVar11 = FUN_06bddffc(0);
      if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_05d60ddc;
      lVar6 = lVar6 + lVar9;
      *(undefined4 *)(lVar6 + -0x10) = uVar11;
      *(float *)(lVar6 + -0xc) = fVar12;
      *(float *)(lVar6 + -8) = fVar13;
      *(float *)(lVar6 + -4) = fVar14;
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_05d60de0;
      if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) <= uVar3) goto LAB_05d60ddc;
      fVar12 = 0.0;
      if (lVar9 != 0x3c) {
        if ((uint)*(ulong *)(lVar6 + 0x18) <= (int)uVar3 - 1U) goto LAB_05d60ddc;
        fVar12 = *(float *)(lVar6 + lVar9 + -0x20);
        if (DAT_076cd828 == '\0') {
          thunk_FUN_032e1da0(puVar1);
          DAT_076cd828 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        fVar12 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar15 * fVar15) / fVar17 + fVar12;
      }
      *(float *)(lVar6 + lVar9) = fVar12;
      uVar2 = *(ulong *)(param_2 + 0x18);
      uVar3 = uVar3 + 1;
      lVar9 = lVar9 + 0x20;
      pfVar10 = pfVar10 + 3;
    } while ((long)uVar3 < (long)(int)uVar2);
  }
  return;
}


