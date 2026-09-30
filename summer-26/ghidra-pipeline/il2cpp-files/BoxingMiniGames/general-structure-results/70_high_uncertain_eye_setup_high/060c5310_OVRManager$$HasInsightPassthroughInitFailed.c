/*
FUNCTION_NAME: OVRManager$$HasInsightPassthroughInitFailed
ENTRY_POINT: 060c5310
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__HasInsightPassthroughInitFailed(long param_1)

{
  float fVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  FUN_03642964(*(undefined8 *)(param_1 + 200));
  *(undefined1 *)(unaff_x21 + 0xa1f) = 1;
  puVar4 = PTR_DAT_07a240d8;
  puVar3 = PTR_DAT_07a20890;
  fVar16 = 0.0;
  fVar17 = 1.0;
  uVar12 = 0;
  bVar2 = false;
  do {
    if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_060c5598;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    iVar5 = FUN_060e2b30();
    if (iVar5 == 0) {
      lVar9 = *unaff_x19;
      if (lVar9 == 0) goto LAB_060c5598;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_060c559c;
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = 0;
    }
    else {
      plVar13 = *(long **)(unaff_x20 + 0x130);
      if (plVar13 == (long *)0x0) {
LAB_060c5598:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar9 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_060c5408;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar13,*(long *)puVar4,0);
LAB_060c5408:
      fVar14 = (float)(*(code *)*puVar6)(plVar13,uVar12 & 0xffffffff,puVar6[1]);
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_060c5598;
      fVar15 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
      lVar9 = *unaff_x19;
      fVar15 = (fVar14 - fVar15) / (1.0 - fVar15);
      fVar14 = 1.0;
      if (fVar15 <= 1.0) {
        fVar14 = fVar15;
      }
      fVar1 = 0.0;
      if (0.0 <= fVar15) {
        fVar1 = fVar14;
      }
      if (lVar9 == 0) goto LAB_060c5598;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) {
LAB_060c559c:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar7 = *(long *)puVar3;
      *(float *)(lVar9 + uVar12 * 4 + 0x20) = fVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      iVar5 = FUN_060e2b30();
      if (iVar5 == 2) {
        lVar9 = *unaff_x19;
        if (lVar9 == 0) goto LAB_060c5598;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_060c559c;
        bVar2 = true;
        fVar14 = *(float *)(lVar9 + uVar12 * 4 + 0x20);
        if (fVar14 <= fVar17) {
          fVar17 = fVar14;
        }
      }
      else {
        if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_060c5598;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        iVar5 = FUN_060e2b30();
        lVar9 = *unaff_x19;
        if (iVar5 == 1) {
          if (lVar9 == 0) goto LAB_060c5598;
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_060c559c;
          fVar14 = *(float *)(lVar9 + uVar12 * 4 + 0x20);
          if (fVar16 <= fVar14) {
            fVar16 = fVar14;
          }
        }
        else if (lVar9 == 0) goto LAB_060c5598;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_060c559c;
      uVar8 = 1 << (ulong)((uint)uVar12 & 0x1f);
      if (*(float *)(lVar9 + uVar12 * 4 + 0x20) <= 0.0) {
        uVar8 = *(uint *)(unaff_x20 + 0x158) & (uVar8 ^ 0xffffffff);
      }
      else {
        uVar8 = *(uint *)(unaff_x20 + 0x158) | uVar8;
      }
      *(uint *)(unaff_x20 + 0x158) = uVar8;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 5) {
      if (!bVar2) {
        fVar17 = fVar16;
      }
      return fVar17;
    }
  } while( true );
}


