/*
FUNCTION_NAME: OVRManager$$IsOpenXRLoaderActive
ENTRY_POINT: 060c546c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__IsOpenXRLoaderActive(undefined8 param_1,undefined1 param_2 [16])

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int in_w9;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar10;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  do {
    uStack0000000000000010 = param_1;
    if (in_w9 == 0) {
      thunk_FUN_036a1978();
    }
    iVar2 = FUN_060e2b30();
    if (iVar2 == 2) {
      lVar6 = *unaff_x19;
      if (lVar6 == 0) goto LAB_060c5598;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
LAB_060c559c:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      unaff_x24 = 1;
      fVar12 = *(float *)(lVar6 + unaff_x21 * 4 + 0x20);
      if (fVar12 <= unaff_s10) {
        unaff_s10 = fVar12;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x20 + 0xd0);
      if (lVar6 == 0) goto LAB_060c5598;
      uStack0000000000000008 = *(undefined8 *)(lVar6 + 200);
      uStack0000000000000000 = *(undefined8 *)(lVar6 + 0xc0);
      uStack0000000000000010 = *(undefined8 *)(lVar6 + 0xd0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      iVar2 = FUN_060e2b30();
      lVar6 = *unaff_x19;
      if (iVar2 == 1) {
        if (lVar6 == 0) goto LAB_060c5598;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_060c559c;
        fVar12 = *(float *)(lVar6 + unaff_x21 * 4 + 0x20);
        if (unaff_s9 <= fVar12) {
          unaff_s9 = fVar12;
        }
      }
      else if (lVar6 == 0) goto LAB_060c5598;
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_060c559c;
    uVar5 = unaff_w26 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(lVar6 + unaff_x21 * 4 + 0x20) <= 0.0) {
      uVar5 = *(uint *)(unaff_x20 + 0x158) & (uVar5 ^ 0xffffffff);
    }
    else {
      uVar5 = *(uint *)(unaff_x20 + 0x158) | uVar5;
    }
    *(uint *)(unaff_x20 + 0x158) = uVar5;
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 5) {
        if ((unaff_x24 & 1) == 0) {
          unaff_s10 = unaff_s9;
        }
        return unaff_s10;
      }
      lVar6 = *(long *)(unaff_x20 + 0xd0);
      if (lVar6 == 0) goto LAB_060c5598;
      uStack0000000000000008 = *(undefined8 *)(lVar6 + 200);
      uStack0000000000000000 = *(undefined8 *)(lVar6 + 0xc0);
      uStack0000000000000010 = *(undefined8 *)(lVar6 + 0xd0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      iVar2 = FUN_060e2b30();
      if (iVar2 != 0) break;
      lVar6 = *unaff_x19;
      if (lVar6 == 0) goto LAB_060c5598;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_060c559c;
      *(undefined4 *)(lVar6 + unaff_x21 * 4 + 0x20) = 0;
    }
    plVar10 = *(long **)(unaff_x20 + 0x130);
    if (plVar10 == (long *)0x0) {
LAB_060c5598:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_060c5408;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar10,*unaff_x25,0);
LAB_060c5408:
    fVar12 = (float)(*(code *)*puVar3)(plVar10,unaff_x21 & 0xffffffff,puVar3[1]);
    lVar6 = *(long *)(unaff_x20 + 0xd0);
    if (lVar6 == 0) goto LAB_060c5598;
    lVar8 = *unaff_x19;
    fVar11 = (fVar12 - *(float *)(lVar6 + 0xd8)) / (unaff_s11 - *(float *)(lVar6 + 0xd8));
    fVar12 = unaff_s11;
    if (fVar11 <= unaff_s11) {
      fVar12 = fVar11;
    }
    fVar1 = unaff_s8;
    if (0.0 <= fVar11) {
      fVar1 = fVar12;
    }
    if (lVar8 == 0) goto LAB_060c5598;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x21) goto LAB_060c559c;
    lVar4 = *unaff_x23;
    *(float *)(lVar8 + unaff_x21 * 4 + 0x20) = fVar1;
    in_w9 = *(int *)(lVar4 + 0xe4);
    uStack0000000000000008 = *(undefined8 *)(lVar6 + 200);
    uStack0000000000000000 = *(undefined8 *)(lVar6 + 0xc0);
    param_1 = *(undefined8 *)(lVar6 + 0xd0);
  } while( true );
}


